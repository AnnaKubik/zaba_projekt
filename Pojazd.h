#ifndef POJAZD_H
#define POJAZD_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include "Zaba.h"
//klasa odpowiadajaca za ruch samochodu z prawej strony
class Pojazd : public QObject, public QGraphicsPixmapItem  {
    Q_OBJECT
public:
    Pojazd();
     void po_uderzeniu();
public slots:
    virtual void ruch() = 0;
};

#endif // POJAZD_H
