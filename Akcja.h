#ifndef AKCJA_H
#define AKCJA_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Zaba.h"
#include "Szansa.h"

class Akcja : public QGraphicsView  {

public:
    Akcja(QWidget *parent = 0);

    QGraphicsScene *scene;
    Zaba *uzytkownik;
    Szansa *szansa;
};

#endif // AKCJA_H
