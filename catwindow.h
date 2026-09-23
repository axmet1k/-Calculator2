#ifndef CATWINDOW_H
#define CATWINDOW_H

#include <QWidget>

class CatWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CatWindow(QWidget *parent = nullptr);
    ~CatWindow();
};

#endif // CATWINDOW_H
