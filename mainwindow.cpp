#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for(int i=0;i<5;i++){
        racas[i]=0;
        classes[i]=0;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_comboBox_activated(int index)
{
    for(int i=0;i<5;i++){
        racas[i]=0;
    }
    switch(index){
        case 0:
            racas[0]=1;
            forc = 7 + classes[0]*5 + classes[1]*2 + classes[2]*5 + classes[3]*2 + classes[4]*1;
            mudar_atributosForca(forc);
            des = 6 + classes[0]*2 + classes[1]*6 + classes[2]*5 + classes[3]*2 + classes[4]*3;
            mudar_atributosDestreza(des);
            inte = 3 + classes[0]*1 + classes[1]*3 + classes[2]*4 + classes[3]*4 + classes[4]*8;
            mudar_atributosInteligencia(inte);
            cons = 5 + classes[0]*5 + classes[1]*2 + classes[2]*1 + classes[3]*4 + classes[4]*1;
            mudar_atributosConstituicao(cons);
            car = 4 + classes[0]*2 + classes[1]*2 + classes[2]*0 + classes[3]*3 + classes[4]*2;
            mudar_atributosCarisma(car);
        break;
        case 1:
            racas[1]=1;
            forc = 2 + classes[0]*5 + classes[1]*2 + classes[2]*5 + classes[3]*2 + classes[4]*1;
            mudar_atributosForca(forc);
            des = 7 + classes[0]*2 + classes[1]*6 + classes[2]*5 + classes[3]*2 + classes[4]*3;
            mudar_atributosDestreza(des);
            inte = 7 + classes[0]*1 + classes[1]*3 + classes[2]*4 + classes[3]*4 + classes[4]*8;
            mudar_atributosInteligencia(inte);
            cons = 4 + classes[0]*5 + classes[1]*2 + classes[2]*1 + classes[3]*4 + classes[4]*1;
            mudar_atributosConstituicao(cons);
            car = 5 + classes[0]*2 + classes[1]*2 + classes[2]*0 + classes[3]*3 + classes[4]*2;
            mudar_atributosCarisma(car);
        break;
        case 2:
            racas[2]=1;
            forc = 10 + classes[0]*5 + classes[1]*2 + classes[2]*5 + classes[3]*2 + classes[4]*1;
            mudar_atributosForca(forc);
            des = 5 + classes[0]*2 + classes[1]*6 + classes[2]*5 + classes[3]*2 + classes[4]*3;
            mudar_atributosDestreza(des);
            inte = 1 + classes[0]*1 + classes[1]*3 + classes[2]*4 + classes[3]*4 + classes[4]*8;
            mudar_atributosInteligencia(inte);
            cons = 8 + classes[0]*5 + classes[1]*2 + classes[2]*1 + classes[3]*4 + classes[4]*1;
            mudar_atributosConstituicao(cons);
            car = 1 + classes[0]*2 + classes[1]*2 + classes[2]*0 + classes[3]*3 + classes[4]*2;
            mudar_atributosCarisma(car);
        break;
        case 3:
            racas[3]=1;
            forc = 8 + classes[0]*5 + classes[1]*2 + classes[2]*5 + classes[3]*2 + classes[4]*1;
            mudar_atributosForca(forc);
            des = 2 + classes[0]*2 + classes[1]*6 + classes[2]*5 + classes[3]*2 + classes[4]*3;
            mudar_atributosDestreza(des);
            inte = 5 + classes[0]*1 + classes[1]*3 + classes[2]*4 + classes[3]*4 + classes[4]*8;
            mudar_atributosInteligencia(inte);
            cons = 7 + classes[0]*5 + classes[1]*2 + classes[2]*1 + classes[3]*4 + classes[4]*1;
            mudar_atributosConstituicao(cons);
            car = 3 + classes[0]*2 + classes[1]*2 + classes[2]*0 + classes[3]*3 + classes[4]*2;
            mudar_atributosCarisma(car);
        break;
        case 4:
            racas[4]=1;
            forc = 10 + classes[0]*7 + classes[1]*2 + classes[2]*5 + classes[3]*2 + classes[4]*1;
            mudar_atributosForca(forc);
            des = 0 + classes[0]*6 + classes[1]*6 + classes[2]*5 + classes[3]*2 + classes[4]*3;
            mudar_atributosDestreza(des);
            inte = 2 + classes[0]*3 + classes[1]*3 + classes[2]*4 + classes[3]*4 + classes[4]*8;
            mudar_atributosInteligencia(inte);
            cons = 10 + classes[0]*5 + classes[1]*2 + classes[2]*1 + classes[3]*4 + classes[4]*1;
            mudar_atributosConstituicao(cons);
            car = 3 + classes[0]*4 + classes[1]*2 + classes[2]*0 + classes[3]*3 + classes[4]*2;
            mudar_atributosCarisma(car);
            break;

    }
}
void MainWindow::on_comboBox_2_activated(int index)
{
    for(int i=0;i<5;i++){
        classes[i]=0;
    }
    switch(index){
        case 0:
            classes[0]=1;
            forc = 5 + racas[0]*7 + racas[1]*2 + racas[2]*10 + racas[3]*8 + racas[4]*10;
            mudar_atributosForca(forc);
            des = 2 + racas[0]*6 + racas[1]*7 + racas[2]*5 + racas[3]*2 + racas[4]*0;
            mudar_atributosDestreza(des);
            inte = 1 + racas[0]*3 + racas[1]*7 + racas[2]*1 + racas[3]*5 + racas[4]*2;
            mudar_atributosInteligencia(inte);
            cons = 5 + racas[0]*5 + racas[1]*4 + racas[2]*8 + racas[3]*7 + racas[4]*10;
            mudar_atributosConstituicao(cons);
            car = 2 + racas[0]*4 + racas[1]*5 + racas[2]*1 + racas[3]*3 + racas[4]*3;
            mudar_atributosCarisma(car);
        break;
        case 1:
            classes[1]=1;
            forc = 2 + racas[0]*7 + racas[1]*2 + racas[2]*10 + racas[3]*8 + racas[4]*10;
            mudar_atributosForca(forc);
            des = 6 + racas[0]*6 + racas[1]*7 + racas[2]*5 + racas[3]*2 + racas[4]*0;
            mudar_atributosDestreza(des);
            inte = 3 + racas[0]*3 + racas[1]*7 + racas[2]*1 + racas[3]*5 + racas[4]*2;
            mudar_atributosInteligencia(inte);
            cons = 2 + racas[0]*5 + racas[1]*4 + racas[2]*8 + racas[3]*7 + racas[4]*10;
            mudar_atributosConstituicao(cons);
            car = 2 + racas[0]*4 + racas[1]*5 + racas[2]*1 + racas[3]*3 + racas[4]*3;
            mudar_atributosCarisma(car);
        break;
        case 2:
            classes[2]=1;
            forc = 5 + racas[0]*7 + racas[1]*2 + racas[2]*10 + racas[3]*8 + racas[4]*10;
            mudar_atributosForca(forc);
            des = 5 + racas[0]*6 + racas[1]*7 + racas[2]*5 + racas[3]*2 + racas[4]*0;
            mudar_atributosDestreza(des);
            inte = 4 + racas[0]*3 + racas[1]*7 + racas[2]*1 + racas[3]*5 + racas[4]*2;
            mudar_atributosInteligencia(inte);
            cons = 1 + racas[0]*5 + racas[1]*4 + racas[2]*8 + racas[3]*7 + racas[4]*10;
            mudar_atributosConstituicao(cons);
            car = 0 + racas[0]*4 + racas[1]*5 + racas[2]*1 + racas[3]*3 + racas[4]*3;
            mudar_atributosCarisma(car);
        break;
        case 3:
            classes[3]=1;
            forc = 2 + racas[0]*7 + racas[1]*2 + racas[2]*10 + racas[3]*8 + racas[4]*10;
            mudar_atributosForca(forc);
            des = 2 + racas[0]*6 + racas[1]*7 + racas[2]*5 + racas[3]*2 + racas[4]*0;
            mudar_atributosDestreza(des);
            inte = 4 + racas[0]*3 + racas[1]*7 + racas[2]*1 + racas[3]*5 + racas[4]*2;
            mudar_atributosInteligencia(inte);
            cons = 4 + racas[0]*5 + racas[1]*4 + racas[2]*8 + racas[3]*7 + racas[4]*10;
            mudar_atributosConstituicao(cons);
            car = 3 + racas[0]*4 + racas[1]*5 + racas[2]*1 + racas[3]*3 + racas[4]*3;
            mudar_atributosCarisma(car);
        break;
        case 4:
            classes[4]=1;
            forc = 1 + racas[0]*7 + racas[1]*2 + racas[2]*10 + racas[3]*8 + racas[4]*10;
            mudar_atributosForca(forc);
            des = 3 + racas[0]*6 + racas[1]*7 + racas[2]*5 + racas[3]*2 + racas[4]*0;
            mudar_atributosDestreza(des);
            inte = 8 + racas[0]*3 + racas[1]*7 + racas[2]*1 + racas[3]*5 + racas[4]*2;
            mudar_atributosInteligencia(inte);
            cons = 1 + racas[0]*5 + racas[1]*4 + racas[2]*8 + racas[3]*7 + racas[4]*10;
            mudar_atributosConstituicao(cons);
            car = 2 + racas[0]*4 + racas[1]*5 + racas[2]*1 + racas[3]*3 + racas[4]*3;
            mudar_atributosCarisma(car);
    }
}
