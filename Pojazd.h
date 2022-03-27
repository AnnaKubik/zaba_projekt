#ifndef POJAZD_H
#define POJAZD_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
class Pojazd : public QObject, public QGraphicsRectItem  {
    Q_OBJECT
public:
    Pojazd();
public slots:
    virtual void move() = 0;
};

#endif // POJAZD_H
