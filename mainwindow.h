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

private slots:
    void recebeLevel(int x);

    void on_comboBox_activated(int index);
    void on_comboBox_2_activated(int index);

    //void on_label_20_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    int racas[5];
    int classes[5];
    int forc, des, inte, cons, car, lvl;
};

#endif // MAINWINDOW_H
