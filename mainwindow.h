#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QLabel>
#include <QTimer>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    QLabel * label_Bild;
    QTimer *timet_bild_1,*timet_bild_2, *timet_bild_3, *timet_bild_4, *timet_bild_5;
public slots:
    void Timer_bild_1_Timeout_Event_Slot();
    void Timer_bild_2_Timeout_Event_Slot();
    void Timer_bild_3_Timeout_Event_Slot();
    void Timer_bild_4_Timeout_Event_Slot();
    void Timer_bild_5_Timeout_Event_Slot();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
