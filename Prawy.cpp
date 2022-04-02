#include "Prawy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Prawy::Prawy()  {
    // meijsce startu
    setPos(500,260);
    //rysowanie samochodu
    setPixmap(QPixmap(":/dodatki/samochod_prawy.png"));
}
//w prawo
void Prawy::ruch()  {
//ruch w prawo
    int random_number = rand() % 6;
    setPos(x()-random_number,y());
    if (pos().x() + pixmap().width() < 0)  {
        scene()->removeItem(this);
        delete this;
    }
    Prawy::po_uderzeniu();
}



