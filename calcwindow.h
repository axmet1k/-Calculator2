#ifndef CALCWINDOW_H
#define CALCWINDOW_H

#include <QWidget>

class CalcWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CalcWindow(QWidget *parent = nullptr);
    ~CalcWindow();
};

#endif // CALCWINDOW_H
