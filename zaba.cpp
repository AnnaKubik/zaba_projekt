#include "Zaba.h"
#include "Akcja.h"
#include "Lewy.h"
#include "Prawy.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsView>

Zaba::Zaba(QGraphicsItem *parent): QGraphicsPixmapItem(parent)  {
    //pozycja startowa zaby
    setPos(260,300);
    // skupienie na obiekcie- zaba
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
    //rysowanie zaby
    setPixmap(QPixmap(":/dodatki/zaba.png"));
}

void Zaba::keyPressEvent(QKeyEvent *event)  {

    if (event->key() == Qt::Key_Left || event->key() == 'A')  {
        if (pos().x() > 0)
           setPos(x()-15,y());
    }
    else if (event->key() == Qt::Key_Right || event->key() == 'D')  {
        if(pos().x() + 83 < 600)
            setPos(x()+15,y());
    }
    else if (event->key() == Qt::Key_Up  || event->key() == 'W')  {
        if(pos().y() > 0) {
             setPos(x(),y() - 15);
             wygrana();
        }
    }
    else if (event->key() == Qt::Key_Down || event->key() == 'S')  {
        if(pos().y() > 100 && pos().y() + 99 < 400 )
        setPos(x(),y()+15);
    }

}

void Zaba::wygrana() {
    if(pos().y() < 5)
        setPixmap(QPixmap(":/dodatki/wygrana_zaba.png"));
}




