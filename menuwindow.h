#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QLabel>
#include <QPushButton>
#include <QWidget>

class MenuWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();
private slots:

private:
    QLabel *label1;
    QPushButton *catRadioButton;
    QPushButton *checkBox;
    QPushButton *calculator;
    QPushButton *game;
};

#endif // MENUWINDOW_H
