#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "Lewy.h"

Lewy::Lewy()  {
    //miejsce startu
    setPos(0,140);
    //rysowanie samochodu
    setPixmap(QPixmap(":/dodatki/samochod_lewy.png"));
}
//w lewo
void Lewy::ruch()  {
    // ruch w lewo
     int random_number = rand() % 10;
     setPos(x()+random_number,y());
     if (pos().x() + pixmap().width() > 650)  {
         scene()->removeItem(this);
         delete this;
     }
     Lewy::po_uderzeniu();
}


