#include "firstform.h"
#include "ui_firstform.h"
#include<QDebug>
FirstForm::FirstForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstForm),xc(0),t0(0),s1IsAngularRegion(false),s2IsAngularRegion(false),isNormalStructure(false)

{
    ui->setupUi(this);
}

FirstForm::~FirstForm()
{
    delete ui;
}

int xc;//实测碳化深度
int t0;//测试时间
bool s1IsAngularRegion;//测试位置
bool s2IsAngularRegion;//评定位置
bool isNormalStructure;//结构/构件种类	(普通,预应力)
double importance ;//结构/构件耐久性重要性	 重要(1.1) 一般(1.0) 次要(0.9)
bool isBeam;//构件类别 1.杆件    2.墙板
bool isTension;// 受拉/受压

double fcuk;//混凝土强度评定值Mpa
double fc; // 混凝土强度C10/15/20/25/30/35/40/45……80
int c;//混凝土保护层厚度
double fPercent;//粉煤灰取代量
double fy;//钢筋强度
double d;//钢筋直径
bool isRound;//种类:光圆、带肋
double eta;//受力钢筋截面损失率

bool isOutDoor;//工作环境	室内 or 室外
int t;// 温度℃
double rh;//湿度
double m;//局部环境系数
double CO2Percent;//二氧化碳浓度
bool hasActualCO2;
int envType;
void FirstForm::on_xcLineEdit_textChanged(const QString &arg1)
{
    xc = arg1.toInt();
    qDebug("xc:%d",xc);
}

void FirstForm::on_tLineEdit_textChanged(const QString &arg1)
{
    t0 = arg1.toInt();
}

void FirstForm::on_s1RadioButton_clicked(bool checked)
{
   s1IsAngularRegion = (checked ?true : false);

}

void FirstForm::on_s2RadioButton_clicked(bool checked)
{
    if(checked) s2IsAngularRegion = (checked ?true : false);
}

void FirstForm::on_componentRadioButton_clicked(bool checked)
{
    if(checked) isNormalStructure = (checked ?true : false);

}

void FirstForm::on_importanceRadioButton_clicked(bool checked)
{
    if(checked) importance = 1.1;
}

void FirstForm::on_normalImpotanceRadioButton_clicked(bool checked)
{
    if(checked) importance = 1.0;
}

void FirstForm::on_notImportanceRadioButton_clicked(bool checked)
{
    if(checked) importance = 0.9;
}


void FirstForm::on_beamRadioButton_clicked(bool checked)
{
    isBeam = (checked ?true : false);
}



void FirstForm::on_fcukLineEdit_textChanged(const QString &arg1)
{
    fuck = arg1.toInt();
}

void FirstForm::on_comboBox_activated(int index)
{
    fc = index + 1;

}




void FirstForm::on_isTensionRadioButton_clicked(bool checked)
{
    isTension = (checked ?true : false);
}

void FirstForm::on_fyLineEdit_textChanged(const QString &arg1)
{
    fy = arg1.toInt();

}

void FirstForm::on_dLineEdit_textChanged(const QString &arg1)
{
    d = arg1.toInt();
}

void FirstForm::on_isRoundRadioButton_clicked(bool checked)
{
    isRound = (checked ?true : false);

}

void FirstForm::on_etaSpinBox_valueChanged(int arg1)
{
    eta = arg1;
}

void FirstForm::on_isOutdoorRadioButton_clicked(bool checked)
{
    isOutDoor = (checked ?true : false);
}

void FirstForm::on_tSpinBox_valueChanged(int arg1)
{
    t = arg1;
}


void FirstForm::on_rhSpinBox_valueChanged(int arg1)
{
    rh =arg1;
}

void FirstForm::on_mSpinBox_valueChanged(int arg1)
{
    m = arg1;
}

void FirstForm::on_CO2SpinBox_valueChanged(const QString &arg1)
{
    CO2Percent = arg1.toInt();
}

void FirstForm::on_hasActualRadioButton_clicked(bool checked)
{
    hasActualCO2 = (checked ?true : false);

}




void FirstForm::on_envTypeComboBox_activated(int index)
{
    envType = index;
}
