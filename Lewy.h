#ifndef LEWY_H
#define LEWY_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include "Pojazd.h"
//klasa odpowiadajaca za ruch samochodu z lewej strony
class Lewy : public Pojazd  {
    Q_OBJECT
public:
    Lewy();
public slots:
    virtual void ruch();
};

#endif // LEWY_H
