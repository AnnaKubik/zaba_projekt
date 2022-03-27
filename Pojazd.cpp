#include "Pojazd.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Pojazd::Pojazd() : QObject(), QGraphicsRectItem()  {
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

    timer->start(20);
}
