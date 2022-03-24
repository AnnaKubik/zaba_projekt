#ifndef ZABA_H
#define ZABA_H

#include <QGraphicsRectItem>
#include <QObject>
//
class Zaba: public QObject, public QGraphicsRectItem  {
    Q_OBJECT
public:
    //metoda ktora zmusza oblekt do ruchy - deklaracja
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};

#endif // ZABA_H
