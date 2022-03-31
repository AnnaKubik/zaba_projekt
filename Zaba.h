#ifndef ZABA_H
#define ZABA_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>


class Zaba: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Zaba(QGraphicsItem * parent=0);
    //metoda ktora zmusza oblekt do ruchy - deklaracja
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
public:
    void wygrana();

};

#endif // ZABA_H
