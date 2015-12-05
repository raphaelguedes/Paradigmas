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
    void atulizarDados();
signals:
    void mudar_atributosForca(int);
    void mudar_atributosDestreza(int);
    void mudar_atributosInteligencia(int);
    void mudar_atributosConstituicao(int);
    void mudar_atributosCarisma(int);
    void pv(int);
    void pm(int);
    void pa(int);
    void inic(int);
    void vida_atual(int);
    void mana_atual(int);
    void acao_atual(int);
    void dinheiro_atual(int);
    void pocao_de_vida_atual(int);
    void pocao_de_mana_atual(int);

private slots:
    void recebeLevel(int x);
    void recebeLevell(int n);
    void vida_perdida(QString z);
    void perder_vida();
    void mana_perdida(QString k);
    void perder_mana();
    void acao_perdida(QString w);
    void perder_acao();
    void vida_ganha(QString j);
    void receber_vida();
    void repousar();
    void dinheiro_ganho(QString s);
    void receber_dinheiro();
    void dinheiro_perdido(QString v);
    void perder_dinheiro();
    void obter_pocao_de_vida();
    void usar_pocao_de_vida();
    void obter_pocao_de_mana();
    void usar_pocao_de_mana();
    void gerar_personagem();
    void forc_raca(QString q);
    void forc_classe(QString e);
    void des_raca(QString r);
    void des_classe(QString t);
    void inte_raca(QString y);
    void inte_classe(QString u);
    void cons_raca(QString i);
    void cons_classe(QString o);
    void car_raca(QString p);
    void car_classe(QString a);


    void on_comboBox_activated(int index);
    void on_comboBox_2_activated(int index);

private:
    Ui::MainWindow *ui;
    int racas[5];
    int classes[5];
    int forc, des, inte, cons, car, lvl, lvll, pacao ,pvida ,pmana, ini, vida, vidap,
    mana, manap, acao, acaop, vidag, dinheirog, dinheiro, dinheirop, pocaov, pocaom, forcr, forcc,
    desr, desc, inter, intec, consr, consc, carr, carc;
};

#endif // MAINWINDOW_H
