#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//==== Класс главного окна ====
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); // конструктор
    ~MainWindow();                         //дестркуртор
};
#endif // MAINWINDOW_H
