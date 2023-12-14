#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ctime>
#include <QLabel>
#include <QPushButton>
#include <QEvent>
#include <QPixmap>
#include <QTimer>
#include <QPainter>
#include <QMessageBox>

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
    bool eventFilter(QObject *obj, QEvent *event);
private slots:
    void on_horizontalScrollBar_valueChanged(int value);

    void on_Countplanteat_windowIconTextChanged(const QString &iconText);
private slots:
    void digits_numbers();
    void Timer_org();
    void paintEvent(QPaintEvent *event) override;
    void on_grassbutt_clicked();

    void on_grassbutt_clicked(bool checked);

    void on_travbutt_clicked();

    void on_plotbutt_clicked();

    void on_armabutt_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer_org;
    int msec,sec,minute,razriv;
};

class MicroOrganize
{
public:
    int posX, posY, size_h, size_w;
    int stepX, stepY;
    bool dead = false;
private:
};
class DinoOrganize : public MicroOrganize
{
public:
    int HP;
private:
};
class HuntersOrganize : public DinoOrganize
{
public:
    int Kills;
private:
};
class Armageddon : public MicroOrganize
{
public:
    int kills;
private:
};
#endif // MAINWINDOW_H
