#ifndef DRUGI_SAMOCHOD_H
#define DRUGI_SAMOCHOD_H
#include <QGraphicsRectItem>
#include <QObject>
//#include "Samochod.h"

class Drugi_samochod : public QObject, public QGraphicsRectItem  {
    Q_OBJECT
public:
    Drugi_samochod();
public slots:
    void move_left();
};

#endif // DRUGI_SAMOCHOD_H
