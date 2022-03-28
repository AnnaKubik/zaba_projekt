#include "Lewy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "Szansa.h"
#include "Zaba.h"
#include "Akcja.h"
extern Akcja * akcja;
Lewy::Lewy()  {
    //miejsce startu
    setPos(0,140);
    //rysowanie samochodu
    setPixmap(QPixmap(":/dodatki/samochod_lewy.png"));
    //polaczenie
//    QTimer *t_l = new QTimer(this);
//    connect(t_l,SIGNAL(timeout()), this, SLOT(move()));

//    t_l->start(50);
}
//w prawo
void Lewy::move()  {
     QList<QGraphicsItem *> Zaba_po_zderzeniu = collidingItems();

    // jezeli samochod zderzy sie z zaba zniszcz oba
    for (int i = 0, n = Zaba_po_zderzeniu.size(); i < n; ++i)  {
        if (typeid(*(Zaba_po_zderzeniu[i])) == typeid(Zaba))  {
            //zmniejsz zycie
            akcja->szansa->zmniejsz();

            // usun ze scey(pozostaje na stercie
            scene()->removeItem(Zaba_po_zderzeniu[i]);

        Zaba_po_zderzeniu[i]->setPos(300,300);

            scene()->addItem(Zaba_po_zderzeniu[i]);

            Zaba_po_zderzeniu[i]->setFlag(QGraphicsItem::ItemIsFocusable);
            Zaba_po_zderzeniu[i]->setFocus();


            return;
        }
    }

    int random_number = rand() % 6;
  setPos(x()+random_number,y());
  if (pos().x() + pixmap().width() > 650)  {
      scene()->removeItem(this);
      delete this;
  }

}
