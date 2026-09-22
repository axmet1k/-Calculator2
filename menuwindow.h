#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QLabel>
#include <QPushButton>
#include <QWidget>

class CalcWindow;

class MenuWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();
private slots:
    void calculatorClicked();

private:
    QLabel *label1;
    QPushButton *catRadioButton;
    QPushButton *checkBox;
    QPushButton *calculator;
    QPushButton *game;

    CalcWindow *calcWindow;
};

#endif // MENUWINDOW_H
