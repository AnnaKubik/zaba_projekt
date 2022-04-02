#ifndef SZANSA_H
#define SZANSA_H
#include <QGraphicsTextItem>
#include "Zaba.h"

class Szansa: public QGraphicsTextItem  {
public :
    int ilosc_szans;
public:
    Szansa(QGraphicsItem *parent = 0);
    void zmniejsz();
    void zwieksz();
    void gameOver();
};

#endif // SZANSA_H
