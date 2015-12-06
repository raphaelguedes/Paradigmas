/*! Mainwindow.h
 * Autor Raphael Guedes Spinelli
 * Versão 1.0
 * Data 2015
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /*! Função que atualiza as contas feitas pelo programa de acordo com as diferente variaveis */
    void atulizarDados();
signals:
    /*! Função que atualiza o valor da variavel força chamada "forc", recebe um valor inteiro */
    void mudar_atributosForca(int);
    /*! Função que atualiza o valor da variavel destreza chamada "des", recebe um valor inteiro */
    void mudar_atributosDestreza(int);
    /*! Função que atualiza o valor da variavel inteligência chamada "inte", recebe um valor inteiro */
    void mudar_atributosInteligencia(int);
    /*! Função que atualiza o valor da variavel constituição chamada "cons", recebe um valor inteiro */
    void mudar_atributosConstituicao(int);
    /*! Função que atualiza o valor da variavel carisma chamada "car", recebe um valor inteiro */
    void mudar_atributosCarisma(int);
    /*! Função que atualiza o valor da variavel pontos de vida máximos chamada "pvida", recebe um valor inteiro */
    void pv(int);
    /*! Função que atualiza o valor da variavel pontos de mana máximos chamada "pmana", recebe um valor inteiro */
    void pm(int);
    /*! Função que atualiza o valor da variavel pontos de ação máximos chamada "pacao", recebe um valor inteiro */
    void pa(int);
    /*! Função que atualiza o valor da variavel iniciativa chamada "ini", recebe um valor inteiro */
    void inic(int);
    /*! Função que atualiza o valor da variavel pontos de vida atual chamada "vida", recebe um valor inteiro */
    void vida_atual(int);
    /*! Função que atualiza o valor da variavel pontos de mana atual chamada "mana", recebe um valor inteiro */
    void mana_atual(int);
    /*! Função que atualiza o valor da variavel pontos de ação atual chamada "vida", recebe um valor inteiro */
    void acao_atual(int);
    /*! Função que atualiza o valor da variavel dinheiro atual chamada "dinheiro", recebe um valor inteiro */
    void dinheiro_atual(int);
    /*! Função que atualiza o valor da variavel quantidade de poções de vida atual chamada "pocaov", recebe um valor inteiro */
    void pocao_de_vida_atual(int);
    /*! Função que atualiza o valor da variavel quantidade de poções de mana atual chamada "pocaom", recebe um valor inteiro */
    void pocao_de_mana_atual(int);

private slots:
    /*! Função que recebe o valor do level atual do personagem da aba Hero, recebe o valor da variavel "lvl", recebe um valor inteiro  */
    void recebeLevel(int x);
    /*! Função que recebe o valor do level atual do personagem da aba New Hero, recebe o valor da variavel "lvll", recebe um valor inteiro  */
    void recebeLevell(int n);
    /*! Função que recebe o valor da vida perdia, recebe o valor da variavel "vidap" */
    void vida_perdida(QString z);
    /*! Função que atualiza o valor da vida do personagem, atualiza o valor da variavel "vida" */
    void perder_vida();
    /*! Função que recebe o valor da mana perdia, recebe o valor da variavel "manap" */
    void mana_perdida(QString k);
    /*! Função que atualiza o valor da mana do personagem, atualiza o valor da variavel "mana" */
    void perder_mana();
    /*! Função que recebe o valor dos pontos de ação perdidos, recebe o valor da variavel "acaop" */
    void acao_perdida(QString w);
    /*! Função que atualiza o valor dos pontos de ação do personagem, atualiza o valor da variavel "acao" */
    void perder_acao();
    /*! Função que recebe o valor da vida curada, recebe o valor da variavel "vidag" */
    void vida_ganha(QString j);
    /*! Função que atualiza o valor da vida do personagem, atualiza o valor da variavel "vida" */
    void receber_vida();
    /*! Função que restaura o valor da vida, mana e pontos de ação do personagem, atualiza o valor das variaveis "vida","mana" e "acao" */
    void repousar();
    /*! Função que recebe o valor do dinheiro recebido, recebe o valor da variavel "dinheirog" */
    void dinheiro_ganho(QString s);
    /*! Função que atualiza o valor do dinheiro do personagem, atualiza o valor da variavel "dinheiro" */
    void receber_dinheiro();
    /*! Função que recebe o valor do dinheiro perdido, recebe o valor da variavel "dinheirop" */
    void dinheiro_perdido(QString v);
    /*! Função que atualiza o valor do dinheiro do personagem, atualiza o valor da variavel "dinheiro" */
    void perder_dinheiro();
    /*! Função que aumenta em 1 o valor do número de poções de vida do personagem , atualiza o valor da variavel "pocaov" */
    void obter_pocao_de_vida();
     /*! Função que diminui em 1 o valor do número de poções de vida do personagem e aumenta a vida do personagem , atualiza o valor da variavel "pocaov" e "vida" */
    void usar_pocao_de_vida();
    /*! Função que aumenta em 1 o valor do número de poções de mana do personagem , atualiza o valor da variavel "pocaom" */
    void obter_pocao_de_mana();
     /*! Função que diminui em 1 o valor do número de poções de mana do personagem e aumenta a mana do personagem , atualiza o valor da variavel "pocaov" e "mana" */
    void usar_pocao_de_mana();
    /*! Função de gera novo personagem com dados escolhidos pelo usuario */
    void gerar_personagem();
    /*! Função que recebe o numero do atributo força da raça criada pelo usuário, recebe a variavel "forcr" */
    void forc_raca(QString q);
     /*! Função que recebe o numero do atributo força da classe criada pelo usuário, recebe a variavel "forcc" */
    void forc_classe(QString e);
     /*! Função que recebe o numero do atributo destreza da raça criada pelo usuário, recebe a variavel "desr" */
    void des_raca(QString r);
     /*! Função que recebe o numero do atributo destreza da classe criada pelo usuário, recebe a variavel "desc" */
    void des_classe(QString t);
     /*! Função que recebe o numero do atributo inteligência da raça criada pelo usuário, recebe a variavel "inter" */
    void inte_raca(QString y);
     /*! Função que recebe o numero do atributo inteligência da classe criada pelo usuário, recebe a variavel "intec" */
    void inte_classe(QString u);
     /*! Função que recebe o numero do atributo constituição da raça criada pelo usuário, recebe a variavel "consr" */
    void cons_raca(QString i);
     /*! Função que recebe o numero do atributo constituição da classe criada pelo usuário, recebe a variavel "consc" */
    void cons_classe(QString o);
     /*! Função que recebe o numero do atributo carisma da raça criada pelo usuário, recebe a variavel "carr" */
    void car_raca(QString p);
     /*! Função que recebe o numero do atributo carisma da classe criada pelo usuário, recebe a variavel "carc" */
    void car_classe(QString a);
     /*!  Função que recebe um numero inteiro da seleção da caixa comboBox */
    void on_comboBox_activated(int index);
    /*!  Função que recebe um numero inteiro da seleção da caixa comboBox_2 */
    void on_comboBox_2_activated(int index);

private:
    Ui::MainWindow *ui;
    /*! Vetor raças */
    int racas[5];
    /*! Vetor classes */
    int classes[5];


    /*! Variável Força*/
    int forc;
    /*! Variável Destreza*/
    int des;
    /*! Variável Inteligência*/
    int inte;
    /*! Variável Constituição*/
    int cons;
    /*! Variável Carisma*/
    int car;
     /*! Variável Lével*/
    int lvl;
    /*! Variável Lével2*/
    int lvll;
    /*! Variável Pontos de Ação*/
    int pacao;
    /*! Variável Pontos de vida*/
    int pvida;
    /*! Variável Pontos de Mana*/
    int pmana;
     /*! Variável Inciativa*/
    int ini;
    /*! Variável Vida atual*/
    int vida;
    /*! Variável Vida Perdida*/
    int vidap;
    /*! Variável Mana atual*/
    int mana;
    /*! Variável Mana Perdida*/
    int manap;
    /*! Variável Pontos de ação atual*/
    int acao;
    /*! Variável Pontos de ação perdidos*/
    int acaop;
    /*! Variável Vida ganha*/
    int vidag;
    /*! Variável Dinheiro ganho*/
    int dinheirog;
    /*! Variável Dinheiro*/
    int dinheiro;
    /*! Variável Dinheiro perdido*/
    int dinheirop;
     /*! Variável Poção de vida*/
    int pocaov;
    /*! Variável Poção de mana*/
    int pocaom;
    /*! Variável Força da raça*/
    int forcr;
    /*! Variável Força da classe*/
    int forcc;
    /*! Variável Destreza da raça*/
    int desr;
    /*! Variável Destreza da classe*/
    int desc;
    /*! Variável Inteligência da raça*/
    int inter;
    /*! Variável Inteligência da classe*/
    int intec;
    /*! Variável Constituição da raça*/
    int consr;
    /*! Variável Contituição da classe*/
    int consc;
    /*! Variável Carisma da raça */
    int carr;
     /*! Variável Carisma da classe */
    int carc;
};

#endif // MAINWINDOW_H
