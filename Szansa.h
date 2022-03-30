#ifndef SZANSA_H
#define SZANSA_H
#include <QGraphicsTextItem>
#include "Zaba.h"


class Szansa: public QGraphicsTextItem{
private :
    int ilosc_szans;
public:
    Szansa(QGraphicsItem *parent = 0);
    void zmniejsz();
    //int podaj_zycie();
    void gameOver();
};

#endif // SZANSA_H
