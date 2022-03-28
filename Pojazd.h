#ifndef POJAZD_H
#define POJAZD_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>


class Pojazd : public QObject, public QGraphicsPixmapItem  {
    Q_OBJECT
public:
    Pojazd();
public slots:
    virtual void move() = 0;
};

#endif // POJAZD_H
