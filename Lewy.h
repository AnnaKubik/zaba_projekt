#ifndef LEWY_H
#define LEWY_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include "Pojazd.h"

class Lewy : public Pojazd  {
    Q_OBJECT
public:
    Lewy();
public slots:
    virtual void move();
};

#endif // LEWY_H
