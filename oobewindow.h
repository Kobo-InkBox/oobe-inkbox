#ifndef OOBEWINDOW_H
#define OOBEWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class oobewindow; }
QT_END_NAMESPACE

class oobewindow : public QMainWindow
{
    Q_OBJECT

public:
    oobewindow(QWidget *parent = nullptr);
    ~oobewindow();
    int pageNumber = 0;
    void string_writeconfig(string file, string config_option) {
        ofstream fhandler;
        fhandler.open(file);
        fhandler << config_option;
        fhandler.close();
    }

private slots:
    void on_rightBtn_clicked();

    void on_leftBtn_clicked();

    void on_chooseScale1_toggled(bool checked);

    void on_chooseScale2_toggled(bool checked);

    void on_chooseScale3_toggled(bool checked);

    void on_checkBox_toggled(bool checked);

    void on_sourceSerif_toggled(bool checked);

    void on_libreBaskerville_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

    void on_inter_toggled(bool checked);

    void on_roboto_toggled(bool checked);

    void on_notoMono_toggled(bool checked);

    void on_font1_toggled(bool checked);

    void on_font2_toggled(bool checked);

    void on_font3_toggled(bool checked);

    void on_font4_toggled(bool checked);

    void on_font5_toggled(bool checked);

    void on_startBtn_clicked();

    void on_crimsonPro_toggled(bool checked);

private:
    Ui::oobewindow *ui;
};
#endif // OOBEWINDOW_H
