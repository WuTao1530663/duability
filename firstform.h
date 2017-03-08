#ifndef FIRSTFORM_H
#define FIRSTFORM_H

#include <QWidget>

namespace Ui {
class FirstForm;
}

class FirstForm : public QWidget
{
    Q_OBJECT

public:
    explicit FirstForm(QWidget *parent = 0);
    ~FirstForm();

private slots:

    void on_xcLineEdit_textChanged(const QString &arg1);

    void on_tLineEdit_textChanged(const QString &arg1);

    void on_s1RadioButton_clicked(bool checked);

    void on_s2RadioButton_clicked(bool checked);

    void on_componentRadioButton_clicked(bool checked);

    void on_importanceRadioButton_clicked(bool checked);

    void on_normalImpotanceRadioButton_clicked(bool checked);

    void on_notImportanceRadioButton_clicked(bool checked);

    void on_beamRadioButton_clicked(bool checked);


    void on_fcukLineEdit_textChanged(const QString &arg1);

    void on_comboBox_activated(int index);


    void on_isTensionRadioButton_clicked(bool checked);

    void on_fyLineEdit_textChanged(const QString &arg1);

    void on_dLineEdit_textChanged(const QString &arg1);


    void on_isRoundRadioButton_clicked(bool checked);

    void on_etaSpinBox_valueChanged(int arg1);

    void on_isOutdoorRadioButton_clicked(bool checked);

    void on_tSpinBox_valueChanged(int arg1);



    void on_rhSpinBox_valueChanged(int arg1);

    void on_mSpinBox_valueChanged(int arg1);

    void on_CO2SpinBox_valueChanged(const QString &arg1);

    void on_hasActualRadioButton_clicked(bool checked);


    void on_envTypeComboBox_activated(int index);

private:
    Ui::FirstForm *ui;
};

#endif // FIRSTFORM_H
