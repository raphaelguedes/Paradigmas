/*! Mainwindow.cpp
 * Autor Raphael Guedes Spinelli
 * Versão 1.0
 * Data 2015
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"


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
    lvll=0;
    vidap=0;
    manap=0;
    acaop=0;
    vidag=0;
    dinheiro=0;
    dinheirog=0;
    dinheirop=0;
    pocaov=0;
    pocaom=0;
    forcr = 0;
    forcc = 0;
    desr = 0;
    desc = 0;
    inter = 0;
    intec = 0;
    consr = 0;
    consc = 0;
    carr = 0;
    carc = 0;


}
/*!
 * Função de gera dados do novo personagem com variáveis escolhidos pelo usuario, recebe "forcr", "forcc", "desr",
   "desc","inter", "intec", "consr", "consc", "carr", "carc", "lvll", gera valores para "forc, des, inte, cons, car".,
   Chama as funções de mudar os respectivos atributos.
   Calcula valores para as variáveis "pvida, vida, pmana, mana, pacao, acao, ini"
*/
void MainWindow::gerar_personagem(){
    pvida=0;
    pmana=0;
    pacao=0;
    ini=0;
    forc = (forcr + forcc)*(1+lvll*0.1);
    des = (desr + desc)*(1+lvll*0.1);
    inte = (inter + intec)*(1+lvll*0.1);
    cons = (consr + consc)*(1+lvll*0.1);
    car = (carr + carc)*(1+lvll*0.1);
    mudar_atributosForca(forc);
    mudar_atributosDestreza(des);
    mudar_atributosInteligencia(inte);
    mudar_atributosConstituicao(cons);
    mudar_atributosCarisma(car);
    pvida = 2*lvll + cons*1.5 + forc* 0.5;
    pv(pvida);
    vida = pvida;
    vida_atual(vida);
    pmana = 2*lvll + inte*1.5;
    pm(pmana);
    mana = pmana;
    mana_atual(mana);
    pacao = 2*lvll + forc*1.3 + des*0.3 ;
    pa(pacao);
    acao = pacao;
    acao_atual(acao);
    ini = 3*lvll + des*1.1 - cons*0.4;
    inic(ini);
}  
 /*! Função que recebe o numero do atributo carisma da raça criada pelo usuário, recebe a variavel "carr" */
void MainWindow::car_raca(QString p){
     carr = p.toInt();
}
/*! Função que recebe o numero do atributo carisma da classe criada pelo usuário, recebe a variavel "carc" */
void MainWindow::car_classe(QString a){
    carc = a.toInt();
}
/*! Função que recebe o numero do atributo constituição da raça criada pelo usuário, recebe a variavel "consr" */
void MainWindow::cons_raca(QString i){
    consr = i.toInt();
}
/*! Função que recebe o numero do atributo constituição da classe criada pelo usuário, recebe a variavel "consc" */
void MainWindow::cons_classe(QString o){
    consc = o.toInt();
}
/*! Função que recebe o numero do atributo inteligência da raça criada pelo usuário, recebe a variavel "inter" */
void MainWindow::inte_raca(QString y){
    inter = y.toInt();
}
/*! Função que recebe o numero do atributo inteligência da classe criada pelo usuário, recebe a variavel "intec" */
void MainWindow::inte_classe(QString u){
    intec = u.toInt();
}
/*! Função que recebe o numero do atributo destreza da raça criada pelo usuário, recebe a variavel "desr" */
void MainWindow::des_raca(QString r){
        desr = r.toInt();
    }
/*! Função que recebe o numero do atributo destreza da classe criada pelo usuário, recebe a variavel "desc" */
void MainWindow::des_classe(QString t){
        desc = t.toInt();
}
/*! Função que recebe o numero do atributo força da raça criada pelo usuário, recebe a variavel "forcr" */
void MainWindow::forc_raca(QString q){
    forcr = q.toInt();
}
/*! Função que recebe o numero do atributo força da classe criada pelo usuário, recebe a variavel "forcc" */
void MainWindow::forc_classe(QString e){
    forcc = e.toInt();
}
MainWindow::~MainWindow()
{
    delete ui;
}
/*! Função que aumenta em 1 o valor do número de poções de mana do personagem , atualiza o valor da variavel "pocaom" */
void MainWindow::obter_pocao_de_mana(){
    pocaom = pocaom + 1;
    pocao_de_mana_atual(pocaom);
}
/*! Função que diminui em 1 o valor do número de poções de mana do personagem e aumenta a mana do personagem , atualiza o valor da variavel "pocaov" e "mana" */
void MainWindow::usar_pocao_de_mana(){
    if(pocaom>0){
        pocaom = pocaom - 1;
        mana = mana + pmana*0.2;
        if(mana>pmana){
            mana = pmana;
        }
        mana_atual(mana);
        pocao_de_mana_atual(pocaom);
    }
}
/*! Função que diminui em 1 o valor do número de poções de vida do personagem e aumenta a vida do personagem , atualiza o valor da variavel "pocaov" e "vida" */
void MainWindow::usar_pocao_de_vida(){
    if(pocaov>0){
        pocaov = pocaov - 1;
        vida = vida + pvida*0.2;
        if(vida>pvida){
            vida = pvida;
        }
        vida_atual(vida);
        pocao_de_vida_atual(pocaov);
    }
}
/*! Função que aumenta em 1 o valor do número de poções de vida do personagem , atualiza o valor da variavel "pocaov" */
void MainWindow::obter_pocao_de_vida(){
    pocaov = pocaov + 1;
    pocao_de_vida_atual(pocaov);
}
/*! Função que restaura o valor da vida, mana e pontos de ação do personagem, atualiza o valor das variaveis "vida","mana" e "acao" */
void MainWindow::repousar(){
    mana = pmana;
    acao = pacao;
    pvida = 2*lvl + cons*1.5 + forc* 0.5;
    vida = pvida;
    vida_atual(vida);
    mana_atual(mana);
    acao_atual(acao);
    pv(pvida);
}
/*! Função que recebe o valor do dinheiro perdido, recebe o valor da variavel "dinheirop" */
void MainWindow::dinheiro_perdido(QString v){
    dinheirop = v.toInt();
}
/*! Função que atualiza o valor do dinheiro do personagem, atualiza o valor da variavel "dinheiro" */
void MainWindow::perder_dinheiro(){
    dinheiro = dinheiro - dinheirop;
    dinheiro_atual(dinheiro);
}
/*! Função que recebe o valor do dinheiro recebido, recebe o valor da variavel "dinheirog" */
void MainWindow::dinheiro_ganho(QString s){
    dinheirog = s.toInt();
}
/*! Função que atualiza o valor do dinheiro do personagem, atualiza o valor da variavel "dinheiro" */
void MainWindow::receber_dinheiro(){
    dinheiro = dinheiro + dinheirog;
    dinheiro_atual(dinheiro);
}
/*! Função que recebe o valor da vida perdia, recebe o valor da variavel "vidap" */
void MainWindow::vida_perdida(QString z){
    vidap = z.toInt();
}
/*! Função que atualiza o valor da vida do personagem, atualiza o valor das variaveis "vida". "pvida" caso o personagem morra */
void MainWindow::perder_vida(){
    vida = vida - vidap;
    if(vida<0){
        vida = 0;
        pvida = 0;

    }
    pv(pvida);
    vida_atual(vida);
}
/*! Função que recebe o valor da vida curada, recebe o valor da variavel "vidag" */
void MainWindow::vida_ganha(QString j){
    vidag = j.toInt();
}
/*! Função que atualiza o valor da vida do personagem, atualiza o valor da variavel "vida" */
void MainWindow::receber_vida(){
    vida = vida + vidag;
    if(vida>pvida){
        vida = pvida;
    }
     vida_atual(vida);
}
/*! Função que recebe o valor da mana perdia, recebe o valor da variavel "manap" */
void MainWindow::mana_perdida(QString k){
    manap = k.toInt();
}
/*! Função que atualiza o valor da mana do personagem, atualiza o valor da variavel "mana" */
void MainWindow::perder_mana(){
    mana = mana - manap;
    if(mana<0){
        mana = 0;

    }
    mana_atual(mana);
}
/*! Função que recebe o valor dos pontos de ação perdidos, recebe o valor da variavel "acaop" */
void MainWindow::acao_perdida(QString w){
    acaop = w.toInt();
}
/*! Função que atualiza o valor dos pontos de ação do personagem, atualiza o valor da variavel "acao" */
void MainWindow::perder_acao(){
    acao = acao - acaop;
    if(acao<0){
        acao = 0;

    }
    acao_atual(acao);
}
/*! Função que atualiza as contas feitas pelo programa de acordo com as diferente variaveis */
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


    //TODO VIDA,MANA,STAMINA,INIATIVA
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
    ini = 3*lvl + des*1.1 - cons*0.4;
    inic(ini);



}
/*!  Função que recebe um numero inteiro da seleção da caixa comboBox */
void MainWindow::on_comboBox_activated(int index)
{
    for(int i=0;i<5;i++){
        racas[i]=0;
    }
    racas[index]=1;
    atulizarDados();
}
/*!  Função que recebe um numero inteiro da seleção da caixa comboBox_2 */
void MainWindow::on_comboBox_2_activated(int index)
{
    for(int i=0;i<5;i++){
        classes[i]=0;
    }
    classes[index]=1;
    atulizarDados();
}
/*! Função que recebe o valor do level atual do personagem da aba Hero, recebe o valor da variavel "lvl", recebe um valor inteiro  */
void MainWindow::recebeLevel(int x){
    lvl=x;
    atulizarDados();
}
    /*! Função que recebe o valor do level atual do personagem da aba New Hero, recebe o valor da variavel "lvll", recebe um valor inteiro  */
void MainWindow::recebeLevell(int n){
    lvll = n;
    gerar_personagem();
}
