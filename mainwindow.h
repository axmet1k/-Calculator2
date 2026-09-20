#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>

//==== Класс главного окна ====
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); // конструктор
    ~MainWindow();                         //дестркуртор
private slots:
    // void logInClicked();

private:
    QLineEdit *login;
    QLineEdit *password;
    QPushButton *logIn;
};
#endif // MAINWINDOW_H
