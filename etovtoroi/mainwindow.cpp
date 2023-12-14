#include "mainwindow.h"
#include "./ui_mainwindow.h"

MicroOrganize *Grass;
DinoOrganize *Bruh, *Tric;
HuntersOrganize *TRX, *Vel;
Armageddon *Arma;
int flaggrass=0,flagarm=0,flagtrav=0,flagplot=0;
int CountofTrav=0,CountofGrass=0,CountofPlot=0,CountofOrg=0;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setFixedSize(1080,720);
    this->setWindowTitle("DinoOrganize");
    this->setWindowIcon(QPixmap(":/resources/res/app.png"));
    ui->armabutt->setCursor(QCursor(QPixmap(":/resources/res/yager.png").scaled(20,20)));
    //QPixmap label_19(":/resources/res/fon.png");
   // ui->label_19->setPixmap(label_19);
    msec=0;
    sec=0;
    minute=0;
    timer_org = new QTimer(this);
    connect(timer_org, SIGNAL(timeout()), this, SLOT(Timer_org()));
    connect(timer_org, SIGNAL(timeout()), this, SLOT(eventFilter));
    Grass = new class MicroOrganize[20];
    Bruh = new class DinoOrganize[20];
    Tric = new class DinoOrganize[20];
    TRX = new class HuntersOrganize[20];
    Vel  = new class HuntersOrganize[20];
   // connect(timer_org, SIGNAL(timeout()), this, SLOT(eventFilter()));
    timer_org->start(50);
}

MainWindow::~MainWindow()
{
    delete ui;
}



bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{

    if ((event->type() == QEvent::MouseButtonPress)&& (obj ==  ui->grassbutt))  {//создание растительности
        for (int i=0;i<10;i++){
            switch(i){
            case 0:{
                ui->label_7->setEnabled(true);
                    CountofGrass++;
                    Grass[i].stepX = 0;
                    Grass[i].stepY = 0;
                    Grass[i].posX = (rand()%650 + 30);
                    Grass[i].posY = (rand()%550 + 20);
                    Grass[i].size_w = ui->label_7->width();
                    Grass[i].size_h = ui->label_7->height();
                    QPixmap label_7(":/resources/res/Grass.png");
                    ui->label_7->setPixmap(label_7.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                    ui->label_7->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                    break;
            };
            case 1:{
                ui->label_10->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_10->width();
                Grass[i].size_h = ui->label_10->height();
                QPixmap label_10(":/resources/res/Grass.png");
                ui->label_10->setPixmap(label_10.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_10->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 2:{
                ui->label_11->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_11->width();
                Grass[i].size_h = ui->label_11->height();
                QPixmap label_11(":/resources/res/Grass.png");
                ui->label_11->setPixmap(label_11.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_11->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 3:{
                ui->label_24->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_24->width();
                Grass[i].size_h = ui->label_24->height();
                QPixmap label_24(":/resources/res/Grass.png");
                ui->label_24->setPixmap(label_24.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_24->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 4:{
                ui->label_25->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_25->width();
                Grass[i].size_h = ui->label_25->height();
                QPixmap label_25(":/resources/res/Grass.png");
                ui->label_25->setPixmap(label_25.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_25->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 5:{
                ui->label_26->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_26->width();
                Grass[i].size_h = ui->label_26->height();
                QPixmap label_26(":/resources/res/Grass.png");
                ui->label_26->setPixmap(label_26.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_26->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 6:{
                ui->label_27->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_27->width();
                Grass[i].size_h = ui->label_27->height();
                QPixmap label_27(":/resources/res/Grass.png");
                ui->label_27->setPixmap(label_27.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_27->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 7:{
                ui->label_28->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_28->width();
                Grass[i].size_h = ui->label_28->height();
                QPixmap label_28(":/resources/res/Grass.png");
                ui->label_28->setPixmap(label_28.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_28->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 8:{
                ui->label_29->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_29->width();
                Grass[i].size_h = ui->label_29->height();
                QPixmap label_29(":/resources/res/Grass.png");
                ui->label_29->setPixmap(label_29.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_29->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            case 9:{
                ui->label_30->setEnabled(true);
                CountofGrass++;
                Grass[i].stepX = 0;
                Grass[i].stepY = 0;
                Grass[i].posX = (rand()%650 + 30);
                Grass[i].posY = (rand()%550 + 20);
                Grass[i].size_w = ui->label_30->width();
                Grass[i].size_h = ui->label_30->height();
                QPixmap label_30(":/resources/res/Grass.png");
                ui->label_30->setPixmap(label_30.scaled(Grass[i].size_w, Grass[i].size_h, Qt::KeepAspectRatio));
                ui->label_30->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                break;
            };
            }
        }
        };
    if ((event->type() == QEvent::MouseButtonPress)&& (obj ==  ui->travbutt))  {//создание травоядных
        for (int i=0;i<5;i++){
            switch(i){
            case 0:{
                ui->label_12->setEnabled(true);
                CountofTrav++;
                Bruh[i].stepX = -5;
                Bruh[i].stepY = -5;
                Bruh[i].posX = (rand()%650 + 30);
                Bruh[i].posY = (rand()%550 + 20);
                Bruh[i].size_w = ui->label_12->width();
                Bruh[i].size_h = ui->label_12->height();
                QPixmap label_12(":/resources/res/Bruh.png");
                ui->label_12->setPixmap(label_12.scaled(Bruh[i].size_w, Bruh[i].size_h, Qt::KeepAspectRatio));
                ui->label_12->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
                break;
            };
            case 1:{
                ui->label_13->setEnabled(true);
                CountofTrav++;
                Bruh[i].stepX = 5;
                Bruh[i].stepY = -5;
                Bruh[i].posX = (rand()%650 + 30);
                Bruh[i].posY = (rand()%550 + 20);
                Bruh[i].size_w = ui->label_13->width();
                Bruh[i].size_h = ui->label_13->height();
                QPixmap label_13(":/resources/res/Bruh.png");
                ui->label_13->setPixmap(label_13.scaled(Bruh[i].size_w, Bruh[i].size_h, Qt::KeepAspectRatio));
                ui->label_13->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
                break;
            };
            case 2:{
                ui->label_14->setEnabled(true);
                CountofTrav++;
                Bruh[i].stepX = 5;
                Bruh[i].stepY = 4;
                Bruh[i].posX = (rand()%650 + 30);
                Bruh[i].posY = (rand()%550 + 20);
                Bruh[i].size_w = ui->label_14->width();
                Bruh[i].size_h = ui->label_14->height();
                QPixmap label_14(":/resources/res/Bruh.png");
                ui->label_14->setPixmap(label_14.scaled(Bruh[i].size_w, Bruh[i].size_h, Qt::KeepAspectRatio));
                ui->label_14->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
                break;
            };
            case 3:{
                ui->label_20->setEnabled(true);
                CountofTrav++;
                Tric[i].stepX = -3;
                Tric[i].stepY = -3;
                Tric[i].posX = (rand()%650 + 30);
                Tric[i].posY = (rand()%550 + 20);
                Tric[i].size_w = ui->label_20->width();
                Tric[i].size_h = ui->label_20->height();
                QPixmap label_20(":/resources/res/tric.png");
                ui->label_20->setPixmap(label_20.scaled(Tric[i].size_w, Tric[i].size_h, Qt::KeepAspectRatio));
                ui->label_20->setGeometry(Tric[i].posX, Tric[i].posY, Tric[i].size_w, Tric[i].size_h);
                break;
            };
            case 4:{
                ui->label_21->setEnabled(true);
                CountofTrav++;
                Tric[i].stepX = 3;
                Tric[i].stepY = 3;
                Tric[i].posX = (rand()%650 + 30);
                Tric[i].posY = (rand()%550 + 20);
                Tric[i].size_w = ui->label_21->width();
                Tric[i].size_h = ui->label_21->height();
                QPixmap label_21(":/resources/res/tric.png");
                ui->label_21->setPixmap(label_21.scaled(Tric[i].size_w, Tric[i].size_h, Qt::KeepAspectRatio));
                ui->label_21->setGeometry(Tric[i].posX, Tric[i].posY, Tric[i].size_w, Tric[i].size_h);
                break;
            };
            }
        }
    };
    if ((event->type() == QEvent::MouseButtonPress)&& (obj ==  ui->plotbutt))  {//создание плотоядных
        for (int i=0;i<5;i++){
            switch(i){
            case 0:{
                ui->label_15->setEnabled(true);
                CountofPlot++;
                TRX[i].stepX = 10;
                TRX[i].stepY = -10;
                TRX[i].posX = (rand()%650 + 30);
                TRX[i].posY = (rand()%550 + 20);
                TRX[i].size_w = ui->label_15->width();
                TRX[i].size_h = ui->label_15->height();
                QPixmap label_15(":/resources/res/TRX.png");
                ui->label_15->setPixmap(label_15.scaled(TRX[i].size_w, TRX[i].size_h, Qt::KeepAspectRatio));
                ui->label_15->setGeometry(TRX[i].posX, TRX[i].posY,TRX[i].size_w, TRX[i].size_h);
                break;
            };
            case 1:{
                ui->label_16->setEnabled(true);
                CountofPlot++;
                TRX[i].stepX = 10;
                TRX[i].stepY = 10;
                TRX[i].posX = (rand()%650 + 30);
                TRX[i].posY = (rand()%550 + 20);
                TRX[i].size_w = ui->label_16->width();
                TRX[i].size_h = ui->label_16->height();
                QPixmap label_16(":/resources/res/TRX.png");
                ui->label_16->setPixmap(label_16.scaled(TRX[i].size_w, TRX[i].size_h, Qt::KeepAspectRatio));
                ui->label_16->setGeometry(TRX[i].posX, TRX[i].posY,TRX[i].size_w, TRX[i].size_h);
                break;
            };
            case 2:{
                ui->label_17->setEnabled(true);
                CountofPlot++;
                TRX[i].stepX = -10;
                TRX[i].stepY = -10;
                TRX[i].posX = (rand()%650 + 30);
                TRX[i].posY = (rand()%550 + 20);
                TRX[i].size_w = ui->label_17->width();
                TRX[i].size_h = ui->label_17->height();
                QPixmap label_17(":/resources/res/TRX.png");
                ui->label_17->setPixmap(label_17.scaled(TRX[i].size_w, TRX[i].size_h, Qt::KeepAspectRatio));
                ui->label_17->setGeometry(TRX[i].posX, TRX[i].posY,TRX[i].size_w, TRX[i].size_h);
                break;
            };
            case 3:{
                ui->label_22->setEnabled(true);
                CountofPlot++;
                Vel[i].stepX = -20;
                Vel[i].stepY = -20;
                Vel[i].posX = (rand()%650 + 30);
                Vel[i].posY = (rand()%550 + 20);
                Vel[i].size_w = ui->label_22->width();
                Vel[i].size_h = ui->label_22->height();
                QPixmap label_22(":/resources/res/vel.png");
                ui->label_22->setPixmap(label_22.scaled(Vel[i].size_w, Vel[i].size_h, Qt::KeepAspectRatio));
                ui->label_22->setGeometry(Vel[i].posX, Vel[i].posY,Vel[i].size_w, Vel[i].size_h);
                break;
            };
            case 4:{
                ui->label_23->setEnabled(true);
                CountofPlot++;
                Vel[i].stepX = 20;
                Vel[i].stepY = -20;
                Vel[i].posX = (rand()%650 + 30);
                Vel[i].posY = (rand()%550 + 20);
                Vel[i].size_w = ui->label_23->width();
                Vel[i].size_h = ui->label_23->height();
                QPixmap label_23(":/resources/res/vel.png");
                ui->label_23->setPixmap(label_23.scaled(Vel[i].size_w, Vel[i].size_h, Qt::KeepAspectRatio));
                ui->label_23->setGeometry(Vel[i].posX, Vel[i].posY,Vel[i].size_w, Vel[i].size_h);
                break;
            };
            }
        }
    };
    if ((event->type() == QEvent::MouseButtonPress)&& (obj ==  ui->armabutt))  {//армагеддон
        QPixmap label_19(":/resources/res/boom.png");
        ui->label_19->setPixmap(label_19.scaled(50, 50, Qt::KeepAspectRatio));
        ui->label_19->setGeometry(250, 200,50, 50);
        int razriv=sec;
        for(int i=0;i<20;i++){
            Tric[i].dead=true;
            Bruh[i].dead = true;
            Grass[i].dead = true;
            TRX[i].dead=true;
            Vel[i].dead=true;
            CountofOrg=0;
            CountofTrav=0;
            CountofGrass=0;
            CountofPlot=0;
            ui->label_7->setVisible(false);
            ui->label_7->setEnabled(false);
            ui->label_10->setVisible(false);
            ui->label_10->setEnabled(false);
            ui->label_11->setVisible(false);
            ui->label_11->setEnabled(false);
            ui->label_12->setVisible(false);
            ui->label_12->setEnabled(false);
            ui->label_13->setVisible(false);
            ui->label_13->setEnabled(false);
            ui->label_15->setVisible(false);
            ui->label_15->setEnabled(false);
            ui->label_16->setVisible(false);
            ui->label_16->setEnabled(false);
            ui->label_17->setVisible(false);
            ui->label_17->setEnabled(false);
            ui->label_20->setVisible(false);
            ui->label_20->setEnabled(false);
            ui->label_21->setVisible(false);
            ui->label_21->setEnabled(false);
            ui->label_22->setVisible(false);
            ui->label_22->setEnabled(false);
            ui->label_23->setVisible(false);
            ui->label_23->setEnabled(false);
            ui->label_24->setVisible(false);
            ui->label_24->setEnabled(false);
            ui->label_25->setVisible(false);
            ui->label_25->setEnabled(false);
            ui->label_26->setVisible(false);
            ui->label_26->setEnabled(false);
            ui->label_27->setVisible(false);
            ui->label_27->setEnabled(false);
            ui->label_28->setVisible(false);
            ui->label_28->setEnabled(false);
            ui->label_29->setVisible(false);
            ui->label_29->setEnabled(false);
            ui->label_30->setVisible(false);
            ui->label_30->setEnabled(false);

        }
    }

}
void MainWindow::Timer_org(){
    msec=msec+50;
    if(msec>=100){
        msec=0;
        sec++;
    }
    if(sec>=60){
        sec=0;
        minute++;
    }
    ui->label_8->setText(QString::number(minute) + " : " +QString::number(sec)+ " : " +QString::number(msec));
    if (razriv+2<=sec){
        int sizew= ui->label_19->width();
        int sizeh= ui->label_19->height();
        QPixmap label_19(":/resources/res/boom.png");
        ui->label_19->setPixmap(label_19.scaled(sizew+20, sizeh+20, Qt::KeepAspectRatio));
        ui->label_19->setGeometry(250,200, sizew+20, sizeh+20);
    }
    for (int i=0;i<10;i++){ //взаимодействие растительности
        switch(i){
        case 0:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_7->width();
                Grass[i].size_h = ui->label_7->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_7->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_7->setVisible(false);
                ui->label_7->setEnabled(false);

            }
            break;
        }
        case 1:
        {
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_10->width();
                Grass[i].size_h = ui->label_10->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_10->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_10->setVisible(false);
                ui->label_10->setEnabled(false);

            }
            break;
        }
        case 2:
        {
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_11->width();
                Grass[i].size_h = ui->label_11->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_11->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_11->setVisible(false);
                ui->label_11->setEnabled(false);

            }
            break;
        }
        case 3:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_24->width();
                Grass[i].size_h = ui->label_24->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_24->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_24->setVisible(false);
                ui->label_24->setEnabled(false);

            }
            break;
        }
        case 4:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_25->width();
                Grass[i].size_h = ui->label_25->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_25->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_25->setVisible(false);
                ui->label_25->setEnabled(false);

            }
            break;
        }
        case 5:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_26->width();
                Grass[i].size_h = ui->label_26->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_26->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_26->setVisible(false);
                ui->label_26->setEnabled(false);

            }
            break;
        }
        case 6:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_27->width();
                Grass[i].size_h = ui->label_27->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_27->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_27->setVisible(false);
                ui->label_27->setEnabled(false);

            }
            break;
        }
        case 7:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_28->width();
                Grass[i].size_h = ui->label_28->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_28->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_28->setVisible(false);
                ui->label_28->setEnabled(false);

            }
            break;
        }
        case 8:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_29->width();
                Grass[i].size_h = ui->label_29->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_29->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_29->setVisible(false);
                ui->label_29->setEnabled(false);

            }
            break;
        }
        case 9:{
            if (Grass[i].dead==true){
                Grass[i].size_w = ui->label_30->width();
                Grass[i].size_h = ui->label_30->height();
                Grass[i].posX = 1080;
                Grass[i].posY = 720;
                Grass[i].dead = true;
                ui->label_30->setGeometry(Grass[i].posX, Grass[i].posY, Grass[i].size_w, Grass[i].size_h);
                ui->label_30->setVisible(false);
                ui->label_30->setEnabled(false);

            }
            break;
        }
        }
    }


    for (int i=0;i<5;i++){//передвижение и взаимодействие травоядных
        switch(i){
        case 0:{
        if (Bruh[i].dead==false){
            Bruh[i].posX = ui->label_12->x();
            Bruh[i].posY = ui->label_12->y();
            Bruh[i].size_w = ui->label_12->width();
            Bruh[i].size_h = ui->label_12->height();
            Bruh[i].posX += Bruh[i].stepX;
            if ((Bruh[i].posX > 700) || (Bruh[i].posX < 10))
            {
                Bruh[i].stepX = -Bruh[i].stepX;
            }
            Bruh[i].posY += Bruh[i].stepY;
            if ((Bruh[i].posY > 600) || (Bruh[i].posY < 12))
            {

                Bruh[i].stepY = -Bruh[i].stepY;
            }
            ui->label_12->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
            for (int j = 0; j < 10; j++)
            {
                if (((Grass[j].posX - 15) <= Bruh[i].posX) && ((Grass[j].posX + 25) >= Bruh[i].posX))
                {
                    if (((Grass[j].posY - 15) <= Bruh[i].posY) && ((Grass[j].posY + 25) >= Bruh[i].posY))
                    {
                        Grass[j].dead = true;
                        CountofGrass--;
                    }
                }
            }
        }
        else
        {
            Bruh[i].size_w = ui->label_12->width();
            Bruh[i].size_h = ui->label_12->height();
            Bruh[i].posX = 1080;
            Bruh[i].posY = 720;
            Bruh[i].dead = true;
            ui->label_12->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
            ui->label_12->setVisible(false);
            ui->label_12->setEnabled(false);

        }
    break;
        }
    case 1:
    {        if (Bruh[i].dead==false){
            Bruh[i].posX = ui->label_13->x();
            Bruh[i].posY = ui->label_13->y();
            Bruh[i].size_w = ui->label_13->width();
            Bruh[i].size_h = ui->label_13->height();
            Bruh[i].posX += Bruh[i].stepX;
            if ((Bruh[i].posX > 700) || (Bruh[i].posX < 10))
            {
                Bruh[i].stepX = -Bruh[i].stepX;
            }
            Bruh[i].posY += Bruh[i].stepY;
            if ((Bruh[i].posY > 600) || (Bruh[i].posY < 12))
            {

                Bruh[i].stepY = -Bruh[i].stepY;
            }
            ui->label_13->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
            for (int j = 0; j < 10; j++)
            {
                if (((Grass[j].posX - 15) <= Bruh[i].posX) && ((Grass[j].posX + 25) >= Bruh[i].posX))
                {
                    if (((Grass[j].posY - 15) <= Bruh[i].posY) && ((Grass[j].posY + 25) >= Bruh[i].posY))
                    {
                        Grass[j].dead = true;
                        CountofGrass--;
                    }
                }
            }
        }
        else
        {
            Bruh[i].size_w = ui->label_13->width();
            Bruh[i].size_h = ui->label_13->height();
            Bruh[i].posX = 1080;
            Bruh[i].posY = 720;
            Bruh[i].dead = true;
            ui->label_13->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
            ui->label_13->setVisible(false);
            ui->label_13->setEnabled(false);

        }
        break;
    }
    case 2:
    {        if (Bruh[i].dead==false){
            Bruh[i].posX = ui->label_14->x();
            Bruh[i].posY = ui->label_14->y();
            Bruh[i].size_w = ui->label_14->width();
            Bruh[i].size_h = ui->label_14->height();
            Bruh[i].posX += Bruh[i].stepX;
            if ((Bruh[i].posX > 700) || (Bruh[i].posX < 10))
            {
                Bruh[i].stepX = -Bruh[i].stepX;
            }
            Bruh[i].posY += Bruh[i].stepY;
            if ((Bruh[i].posY > 600) || (Bruh[i].posY < 12))
            {

                Bruh[i].stepY = -Bruh[i].stepY;
            }
            ui->label_14->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
            for (int j = 0; j < 10; j++)
            {
                if (((Grass[j].posX - 15) <= Bruh[i].posX) && ((Grass[j].posX + 25) >= Bruh[i].posX))
                {
                    if (((Grass[j].posY - 15) <= Bruh[i].posY) && ((Grass[j].posY + 25) >= Bruh[i].posY))
                    {
                        Grass[j].dead = true;
                        CountofGrass--;
                    }
                }
            }
        }
        else
        {
            Bruh[i].size_w = ui->label_14->width();
            Bruh[i].size_h = ui->label_14->height();
            Bruh[i].posX = 1080;
            Bruh[i].posY = 720;
            Bruh[i].dead = true;
            ui->label_14->setGeometry(Bruh[i].posX, Bruh[i].posY, Bruh[i].size_w, Bruh[i].size_h);
            ui->label_14->setVisible(false);
            ui->label_14->setEnabled(false);

        }
        break;
    }
    case 3:
        {
            if (Tric[i].dead==false){
                Tric[i].posX = ui->label_20->x();
                Tric[i].posY = ui->label_20->y();
                Tric[i].size_w = ui->label_20->width();
                Tric[i].size_h = ui->label_20->height();
                Tric[i].posX += Tric[i].stepX;
                if ((Tric[i].posX > 700) || (Tric[i].posX < 10))
                {
                    Tric[i].stepX = -Tric[i].stepX;
                }
                Tric[i].posY += Tric[i].stepY;
                if ((Tric[i].posY > 600) || (Tric[i].posY < 12))
                {

                    Tric[i].stepY = -Tric[i].stepY;
                }
                ui->label_20->setGeometry(Tric[i].posX, Tric[i].posY, Tric[i].size_w, Tric[i].size_h);
                for (int j = 0; j < 10; j++)
                {
                    if (((Grass[j].posX - 5) <= Tric[i].posX) && ((Grass[j].posX + 15) >= Tric[i].posX))
                    {
                        if (((Grass[j].posY - 5) <= Tric[i].posY) && ((Grass[j].posY + 15) >= Tric[i].posY))
                        {
                            Grass[j].dead = true;
                            CountofGrass--;
                        }
                    }
                }
            }
            else
            {
                Tric[i].size_w = ui->label_20->width();
                Tric[i].size_h = ui->label_20->height();
                Tric[i].posX = 1080;
                Tric[i].posY = 720;
                Tric[i].dead = true;
                ui->label_20->setGeometry(Tric[i].posX, Tric[i].posY, Tric[i].size_w, Tric[i].size_h);
                ui->label_20->setVisible(false);
                ui->label_20->setEnabled(false);

            }
            break;

    }
    case 4:
    {
        if (Tric[i].dead==false){
            Tric[i].posX = ui->label_21->x();
            Tric[i].posY = ui->label_21->y();
            Tric[i].size_w = ui->label_21->width();
            Tric[i].size_h = ui->label_21->height();
            Tric[i].posX += Tric[i].stepX;
            if ((Tric[i].posX > 700) || (Tric[i].posX < 10))
            {
                Tric[i].stepX = -Tric[i].stepX;
            }
            Tric[i].posY += Tric[i].stepY;
            if ((Tric[i].posY > 600) || (Tric[i].posY < 12))
            {

                Tric[i].stepY = -Tric[i].stepY;
            }
            ui->label_21->setGeometry(Tric[i].posX, Tric[i].posY, Tric[i].size_w, Tric[i].size_h);
            for (int j = 0; j < 10; j++)
            {
                if (((Grass[j].posX - 5) <= Tric[i].posX) && ((Grass[j].posX + 15) >= Tric[i].posX))
                {
                    if (((Grass[j].posY - 5) <= Tric[i].posY) && ((Grass[j].posY + 15) >= Tric[i].posY))
                    {
                        Grass[j].dead = true;
                        CountofGrass--;
                    }
                }
            }
        }
        else
        {
            Tric[i].size_w = ui->label_21->width();
            Tric[i].size_h = ui->label_21->height();
            Tric[i].posX = 1080;
            Tric[i].posY = 720;
            Tric[i].dead = true;
            ui->label_21->setGeometry(Tric[i].posX, Tric[i].posY, Tric[i].size_w, Tric[i].size_h);
            ui->label_21->setVisible(false);
            ui->label_21->setEnabled(false);

        }
        break;

    }
    }

}


for (int i=0;i<5;i++){//передвижение и взаимодействие плотоядных
    switch(i){
    case 0:{
        if (TRX[i].dead==false){
            TRX[i].posX = ui->label_15->x();
            TRX[i].posY = ui->label_15->y();
            TRX[i].size_w = ui->label_15->width();
            TRX[i].size_h = ui->label_15->height();
            TRX[i].posX += TRX[i].stepX;
            if ((TRX[i].posX > 700) || (TRX[i].posX < 10))
            {
                TRX[i].stepX = -TRX[i].stepX;
            }
            TRX[i].posY += TRX[i].stepY;
            if ((TRX[i].posY > 600) || (TRX[i].posY < 12))
            {

                TRX[i].stepY = -TRX[i].stepY;
            }
            ui->label_15->setGeometry(TRX[i].posX, TRX[i].posY, TRX[i].size_w, TRX[i].size_h);
            for (int j = 0; j < 5; j++)
            {
                if (((Bruh[j].posX - 15) <= TRX[i].posX) && ((Bruh[j].posX + 25) >= TRX[i].posX))
                {
                    if (((Bruh[j].posY - 15) <= TRX[i].posY) && ((Bruh[j].posY + 25) >= TRX[i].posY))
                    {
                        Bruh[j].dead = true;
                        CountofTrav--;
                    }
                }
                if (((Tric[j].posX - 15) <= TRX[i].posX) && ((Tric[j].posX + 25) >= TRX[i].posX))
                {
                    if (((Tric[j].posY - 15) <= TRX[i].posY) && ((Tric[j].posY + 25) >= TRX[i].posY))
                    {
                        Tric[j].dead = true;
                        CountofTrav--;
                    }
                }
            }
        }
        else
        {
            TRX[i].size_w = ui->label_15->width();
            TRX[i].size_h = ui->label_15->height();
            TRX[i].posX = 1080;
            TRX[i].posY = 720;
            TRX[i].dead = true;
            ui->label_15->setGeometry(TRX[i].posX, TRX[i].posY, TRX[i].size_w, TRX[i].size_h);
            ui->label_15->setVisible(false);
            ui->label_15->setEnabled(false);
            CountofPlot--;
        }
        break;
    }
    case 1:
    {
        if (TRX[i].dead==false){
            TRX[i].posX = ui->label_16->x();
            TRX[i].posY = ui->label_16->y();
            TRX[i].size_w = ui->label_16->width();
            TRX[i].size_h = ui->label_16->height();
            TRX[i].posX += TRX[i].stepX;
            if ((TRX[i].posX > 700) || (TRX[i].posX < 10))
            {
                TRX[i].stepX = -TRX[i].stepX;
            }
            TRX[i].posY += TRX[i].stepY;
            if ((TRX[i].posY > 600) || (TRX[i].posY < 12))
            {

                TRX[i].stepY = -TRX[i].stepY;
            }
            ui->label_16->setGeometry(TRX[i].posX, TRX[i].posY, TRX[i].size_w, TRX[i].size_h);
            for (int j = 0; j < 5; j++)
            {
                if (((Bruh[j].posX - 15) <= TRX[i].posX) && ((Bruh[j].posX + 25) >= TRX[i].posX))
                {
                    if (((Bruh[j].posY - 15) <= TRX[i].posY) && ((Bruh[j].posY + 25) >= TRX[i].posY))
                    {
                        Bruh[j].dead = true;
                        CountofTrav--;
                    }
                }
                if (((Tric[j].posX - 15) <= TRX[i].posX) && ((Tric[j].posX + 25) >= TRX[i].posX))
                {
                    if (((Tric[j].posY - 15) <= TRX[i].posY) && ((Tric[j].posY + 25) >= TRX[i].posY))
                    {
                        Tric[j].dead = true;
                        CountofTrav--;
                    }
                }
            }
        }
        else
        {
            TRX[i].size_w = ui->label_16->width();
            TRX[i].size_h = ui->label_16->height();
            TRX[i].posX = 1080;
            TRX[i].posY = 720;
            TRX[i].dead = true;
            ui->label_16->setGeometry(TRX[i].posX, TRX[i].posY, TRX[i].size_w, TRX[i].size_h);
            ui->label_16->setVisible(false);
            ui->label_16->setEnabled(false);
            CountofPlot--;
        }
        break;
    }
    case 2:
    {
        if (TRX[i].dead==false){
            TRX[i].posX = ui->label_17->x();
            TRX[i].posY = ui->label_17->y();
            TRX[i].size_w = ui->label_17->width();
            TRX[i].size_h = ui->label_17->height();
            TRX[i].posX += TRX[i].stepX;
            if ((TRX[i].posX > 700) || (TRX[i].posX < 10))
            {
                TRX[i].stepX = -TRX[i].stepX;
            }
            TRX[i].posY += TRX[i].stepY;
            if ((TRX[i].posY > 600) || (TRX[i].posY < 12))
            {

                TRX[i].stepY = -TRX[i].stepY;
            }
            ui->label_17->setGeometry(TRX[i].posX, TRX[i].posY, TRX[i].size_w, TRX[i].size_h);
            for (int j = 0; j < 5; j++)
            {
                if (((Bruh[j].posX - 15) <= TRX[i].posX) && ((Bruh[j].posX + 25) >= TRX[i].posX))
                {
                    if (((Bruh[j].posY - 15) <= TRX[i].posY) && ((Bruh[j].posY + 25) >= TRX[i].posY))
                    {
                        Bruh[j].dead = true;
                        CountofTrav--;
                    }
                    if (((Tric[j].posX - 15) <= TRX[i].posX) && ((Tric[j].posX + 25) >= TRX[i].posX))
                    {
                        if (((Tric[j].posY - 15) <= TRX[i].posY) && ((Tric[j].posY + 25) >= TRX[i].posY))
                        {
                            Tric[j].dead = true;
                            CountofTrav--;
                        }
                    }
                }
            }
        }
        else
        {
            TRX[i].size_w = ui->label_17->width();
            TRX[i].size_h = ui->label_17->height();
            TRX[i].posX = 1080;
            TRX[i].posY = 720;
            TRX[i].dead = true;
            ui->label_17->setGeometry(TRX[i].posX, TRX[i].posY, TRX[i].size_w, TRX[i].size_h);
            ui->label_17->setVisible(false);
            ui->label_17->setEnabled(false);
            CountofPlot--;
        }
        break;
    }
    case 3:{
        if (Vel[i].dead==false){
            Vel[i].posX = ui->label_22->x();
            Vel[i].posY = ui->label_22->y();
            Vel[i].size_w = ui->label_22->width();
            Vel[i].size_h = ui->label_22->height();
            Vel[i].posX += TRX[i].stepX;
            if ((Vel[i].posX > 700) || (Vel[i].posX < 10))
            {
                Vel[i].stepX = -Vel[i].stepX;
            }
            Vel[i].posY += Vel[i].stepY;
            if ((Vel[i].posY > 600) || (Vel[i].posY < 12))
            {

                Vel[i].stepY = -Vel[i].stepY;
            }
            ui->label_22->setGeometry(Vel[i].posX, Vel[i].posY, Vel[i].size_w, Vel[i].size_h);
            for (int j = 0; j < 5; j++)
            {
                if (((Bruh[j].posX - 5) <= Vel[i].posX) && ((Bruh[j].posX + 15) >= Vel[i].posX))
                {
                    if (((Bruh[j].posY - 5) <= Vel[i].posY) && ((Bruh[j].posY + 15) >= Vel[i].posY))
                    {
                        Bruh[j].dead = true;
                        CountofTrav--;
                    }
                }
                if (((Tric[j].posX - 15) <= Vel[i].posX) && ((Tric[j].posX + 25) >= Vel[i].posX))
                {
                    if (((Tric[j].posY - 15) <= Vel[i].posY) && ((Tric[j].posY + 25) >= Vel[i].posY))
                    {
                        Tric[j].dead = true;
                        CountofTrav--;
                    }
                }
            }
        }
        else
        {
            Vel[i].size_w = ui->label_22->width();
            Vel[i].size_h = ui->label_22->height();
            Vel[i].posX = 1080;
            Vel[i].posY = 720;
            Vel[i].dead = true;
            ui->label_22->setGeometry(Vel[i].posX, Vel[i].posY, Vel[i].size_w, Vel[i].size_h);
            ui->label_22->setVisible(false);
            ui->label_22->setEnabled(false);
            CountofPlot--;
        }
        break;
    }
    case 4:{
        if (Vel[i].dead==false){
            Vel[i].posX = ui->label_23->x();
            Vel[i].posY = ui->label_23->y();
            Vel[i].size_w = ui->label_23->width();
            Vel[i].size_h = ui->label_23->height();
            Vel[i].posX += TRX[i].stepX;
            if ((Vel[i].posX > 700) || (Vel[i].posX < 10))
            {
                Vel[i].stepX = -Vel[i].stepX;
            }
            Vel[i].posY += Vel[i].stepY;
            if ((Vel[i].posY > 600) || (Vel[i].posY < 12))
            {

                Vel[i].stepY = -Vel[i].stepY;
            }
            ui->label_23->setGeometry(Vel[i].posX, Vel[i].posY, Vel[i].size_w, Vel[i].size_h);
            for (int j = 0; j < 5; j++)
            {
                if (((Bruh[j].posX - 5) <= Vel[i].posX) && ((Bruh[j].posX + 15) >= Vel[i].posX))
                {
                    if (((Bruh[j].posY - 5) <= Vel[i].posY) && ((Bruh[j].posY + 15) >= Vel[i].posY))
                    {
                        Bruh[j].dead = true;
                        CountofTrav--;
                    }
                }
                if (((Tric[j].posX - 15) <= Vel[i].posX) && ((Tric[j].posX + 25) >= Vel[i].posX))
                {
                    if (((Tric[j].posY - 15) <= Vel[i].posY) && ((Tric[j].posY + 25) >= Vel[i].posY))
                    {
                        Tric[j].dead = true;
                        CountofTrav--;
                    }
                }
            }
        }
        else
        {
            Vel[i].size_w = ui->label_23->width();
            Vel[i].size_h = ui->label_23->height();
            Vel[i].posX = 1080;
            Vel[i].posY = 720;
            Vel[i].dead = true;
            ui->label_23->setGeometry(Vel[i].posX, Vel[i].posY, Vel[i].size_w, Vel[i].size_h);
            ui->label_23->setVisible(false);
            ui->label_23->setEnabled(false);
            CountofPlot--;
        }
        break;
    }
    }

    ui->label_5->setText(QString::number(CountofGrass));
    ui->Countplant->setText(QString::number(CountofTrav));
    ui->label_6->setText(QString::number(CountofPlot));
    CountofOrg=CountofGrass+CountofPlot+CountofTrav;
    ui->label_18->setText(QString::number(CountofOrg));
}

}
void MainWindow::on_grassbutt_clicked()
{
     ui->grassbutt->installEventFilter(this);
}


void MainWindow::on_grassbutt_clicked(bool checked)
{}
void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{    }
void MainWindow::digits_numbers(){
}

void MainWindow::on_Countplanteat_windowIconTextChanged(const QString &iconText)
{}

void MainWindow::on_travbutt_clicked()
{
    ui->travbutt->installEventFilter(this);
}


void MainWindow::on_plotbutt_clicked()
{
    ui->plotbutt->installEventFilter(this);
}

void MainWindow::paintEvent(QPaintEvent *event)
{

}

void MainWindow::on_armabutt_clicked()
{
   ui->armabutt->installEventFilter(this);
}

