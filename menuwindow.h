#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QLabel>
#include <QPushButton>
#include <QWidget>

class CalcWindow;
class CatWindow;

class MenuWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();
private slots:
    void calculatorClicked();
    void catClicked();

private:
    QLabel *label1;
    QPushButton *catRadioButton;
    QPushButton *checkBox;
    QPushButton *calculator;
    QPushButton *game;

    CalcWindow *calcWindow;
    CatWindow *catWindow;
};

#endif // MENUWINDOW_H
