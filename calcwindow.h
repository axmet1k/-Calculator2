#ifndef CALCWINDOW_H
#define CALCWINDOW_H

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>

class CalcWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CalcWindow(QWidget *parent = nullptr);
    ~CalcWindow();

private slots:
    void onEqualsClicked();

private:
    QLineEdit *input1;
    QLineEdit *input2;
    QLabel *resultLabel;
    QPushButton *equalsButton;
};

#endif // CALCWINDOW_H
