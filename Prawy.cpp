#include "Prawy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "Zaba.h"
#include "Akcja.h"
#include "Szansa.h"
#include <QImage>
//objekt globalny
//extern Akcja * akcja;
Prawy::Prawy()  {
    // meijsce startu
    setPos(500,260);
    //rysowanie samochodu
    setPixmap(QPixmap(":/dodatki/samochod_prawy.png"));
}
//w prawo
void Prawy::ruch()  {
//    QList<QGraphicsItem *> Zaba_po_zderzeniu = collidingItems();

//    // jezeli samochod zderzy sie z zaba zniszcz oba
//    for (int i = 0, n = Zaba_po_zderzeniu.size(); i < n; ++i)  {
//        if (typeid(*(Zaba_po_zderzeniu[i])) == typeid(Zaba))  {
//            //zmniejsz zycie
//            akcja->szansa->zmniejsz();
//            // usun ze scey(pozostaje na stercie
//            scene()->removeItem(Zaba_po_zderzeniu[i]);

//            Zaba_po_zderzeniu[i]->setPos(300,300);

//            scene()->addItem(Zaba_po_zderzeniu[i]);

//            Zaba_po_zderzeniu[i]->setFlag(QGraphicsItem::ItemIsFocusable);
//            Zaba_po_zderzeniu[i]->setFocus();

//            return;
//        }
//    }

//ruch w prawo
    int random_number = rand() % 6;
    setPos(x()-random_number,y());
    if (pos().x() + pixmap().width() < 0)  {
        scene()->removeItem(this);
        delete this;
  }
    Prawy::po_uderzeniu();
}



