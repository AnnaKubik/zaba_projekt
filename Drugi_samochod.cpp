#include "Drugi_samochod.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Drugi_samochod::Drugi_samochod() : QObject(), QGraphicsRectItem()  {
    setPos(0,100);
    //rysowanie samochodu
    setRect(0,0,70,50);
    //polaczenie
    QTimer *t_l = new QTimer(this);
    connect(t_l,SIGNAL(timeout()), this, SLOT(move_left()));

    t_l->start(50);
}
//w prawo
void Drugi_samochod::move_left()  {
    int random_number = rand() % 6;
  setPos(x()+random_number,y());
  if (pos().x() + rect().width() > 600)  {
      scene()->removeItem(this);
      delete this;
  }

}
