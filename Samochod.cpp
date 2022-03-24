#include "Samochod.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Samochod::Samochod() : QObject(), QGraphicsRectItem()  {
    // set random position
    setPos(600,250);
    //rysowanie samochodu
    setRect(0,0,70,50);
    //polaczenie
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}
//w lewo
void Samochod::move()  {
    int random_number = rand() % 5;
  setPos(x()-random_number,y());
  if (pos().x() + rect().width() < 0)  {
      scene()->removeItem(this);
      delete this;
  }
}

