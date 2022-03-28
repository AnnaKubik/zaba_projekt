#ifndef PRAWY_H
#define PRAWY_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include "Pojazd.h"


class Prawy : public Pojazd  {
    Q_OBJECT
public:
    Prawy();
public slots:
    virtual void move();
};

#endif // PRAWY_H
