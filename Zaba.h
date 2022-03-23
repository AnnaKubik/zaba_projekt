#ifndef ZABA_H
#define ZABA_H

#include <QGraphicsRectItem>

//
class Zaba: public QGraphicsRectItem  {
public:
    //metoda ktora zmusza oblekt do ruchy - deklaracja
    void keyPressEvent(QKeyEvent * event);
};

#endif // ZABA_H
