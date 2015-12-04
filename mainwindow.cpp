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
    vidap=0;
    manap=0;
    acaop=0;
    vidag=0;
    dinheiro=0;
    dinheirog=0;
    dinheirop=0;
    pocaov=0;
    pocaom=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::obter_pocao_de_mana(){
    pocaom = pocaom + 1;
    pocao_de_mana_atual(pocaom);
}
void MainWindow::usar_pocao_de_mana(){
    if(pocaom>0){
        pocaom = pocaom - 1;
        mana = mana + 10;
        if(mana>pmana){
            mana = pmana;
        }
        mana_atual(mana);
        pocao_de_mana_atual(pocaom);
    }
}
void MainWindow::usar_pocao_de_vida(){
    if(pocaov>0){
        pocaov = pocaov - 1;
        vida = vida + 10;
        if(vida>pvida){
            vida = pvida;
        }
        vida_atual(vida);
        pocao_de_vida_atual(pocaov);
    }
}

void MainWindow::obter_pocao_de_vida(){
    pocaov = pocaov + 1;
    pocao_de_vida_atual(pocaov);
}

void MainWindow::repousar(){
    vida = pvida;
    mana = pmana;
    acao = pacao;
    vida_atual(vida);
    mana_atual(mana);
    acao_atual(acao);
}
void MainWindow::dinheiro_perdido(QString v){
    dinheirop = v.toInt();
}

void MainWindow::perder_dinheiro(){
    dinheiro = dinheiro - dinheirop;
    dinheiro_atual(dinheiro);
}

void MainWindow::dinheiro_ganho(QString s){
    dinheirog = s.toInt();
}

void MainWindow::receber_dinheiro(){
    dinheiro = dinheiro + dinheirog;
    dinheiro_atual(dinheiro);
}

void MainWindow::vida_perdida(QString z){
    vidap = z.toInt();
}

void MainWindow::perder_vida(){
    vida = vida - vidap;
    if(vida<0){
        vida = 0;

    }
    vida_atual(vida);
}
void MainWindow::vida_ganha(QString j){
    vidag = j.toInt();
}
void MainWindow::receber_vida(){
    vida = vida + vidag;
    if(vida>pvida){
        vida = pvida;
    }
     vida_atual(vida);
}

void MainWindow::mana_perdida(QString k){
    manap = k.toInt();
}
void MainWindow::perder_mana(){
    mana = mana - manap;
    if(mana<0){
        mana = 0;

    }
    mana_atual(mana);
}
void MainWindow::acao_perdida(QString w){
    acaop = w.toInt();
}
void MainWindow::perder_acao(){
    acao = acao - acaop;
    if(acao<0){
        acao = 0;

    }
    acao_atual(acao);
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
    pvida = 2*lvl + cons*1.5 + forc* 0.5;
    pv(pvida);
    vida = pvida;
    vida_atual(vida);
    pmana = 2*lvl + inte*1.5;
    pm(pmana);
    mana = pmana;
    mana_atual(mana);
    pacao = 2*lvl + forc*1.3 + des*0.3 ;
    pa(pacao);
    acao = pacao;
    acao_atual(acao);
    ini = 3*lvl + des*1.7 - cons*0.7;
    inic(ini);







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
