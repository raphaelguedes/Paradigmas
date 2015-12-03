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
    lvl=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::atulizarDados(){
    forc = (racas[0]*7 + racas[1]*2 + racas[2]*10 + racas[3]*8 + racas[4]*10 +
           classes[0]*5 + classes[1]*2 + classes[2]*5 + classes[3]*2 + classes[4]*1)*(1+lvl*0.1);
    mudar_atributosForca(forc);

    des = (racas[0]*6 + racas[1]*7 + racas[2]*5 + racas[3]*2 + racas[4]*0 +
          classes[0]*2 + classes[1]*6 + classes[2]*5 + classes[3]*2 + classes[4]*3)*(1+lvl*0.1);
    mudar_atributosDestreza(des);

    inte = (racas[0]*3 + racas[1]*7 + racas[2]*1 + racas[3]*5 + racas[4]*2 +
           classes[0]*1 + classes[1]*3 + classes[2]*4 + classes[3]*4 + classes[4]*8)*(1+lvl*0.1);
    mudar_atributosInteligencia(inte);

    cons = (racas[0]*5 + racas[1]*4 + racas[2]*8 + racas[3]*7 + racas[4]*10 +
           classes[0]*5 + classes[1]*2 + classes[2]*1 + classes[3]*4 + classes[4]*1)*(1+lvl*0.1);
    mudar_atributosConstituicao(cons);

    car = (racas[0]*4 + racas[1]*5 + racas[2]*1 + racas[3]*3 + racas[4]*3 +
          classes[0]*2 + classes[1]*2 + classes[2]*0 + classes[3]*3 + classes[4]*2)*(1+lvl*0.1);
    mudar_atributosCarisma(car);


    //TODO VIDA,MANA,STAMINA


}

void MainWindow::on_comboBox_activated(int index)
{
    for(int i=0;i<5;i++){
        racas[i]=0;
    }
    racas[index]=1;
    atulizarDados();
}
void MainWindow::on_comboBox_2_activated(int index)
{
    for(int i=0;i<5;i++){
        classes[i]=0;
    }
    classes[index]=1;
    atulizarDados();
}
void MainWindow::recebeLevel(int x){
    lvl=x;
    atulizarDados();
}
