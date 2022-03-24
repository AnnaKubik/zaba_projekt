#ifndef SAMOCHOD_H
#define SAMOCHOD_H
#include <QGraphicsRectItem>
#include <QObject>

class Samochod : public QObject, public QGraphicsRectItem  {
    Q_OBJECT
public:
    Samochod();
public slots:
    void move();
};

#endif // SAMOCHOD_H
