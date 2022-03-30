#include "Szansa.h"
#include <QFont>
#include "Zaba.h"

Szansa::Szansa(QGraphicsItem *parent): QGraphicsTextItem(parent)  {
    // ustaw poczatek zycia jako 2
    ilosc_szans = 2;

    //wyswietlanie zycia
    setPlainText(QString("Ilosc szans: ") + QString::number(ilosc_szans));
    // ust koloru
    setDefaultTextColor(Qt::green);
    // ust czcionki
    setFont(QFont("",20));
}
void Szansa::gameOver()  {
    //policz ile zyci i daj wynik
    /*if (ilosc_szans > 0) {

    } else*/ if (ilosc_szans == 0)  {
        setPlainText(QString("Koniec gry") );
       setDefaultTextColor(Qt::red);
       setFont(QFont("",80));
    }
    else if(ilosc_szans < 0) {
        exit(0);
    }

}

// funkcja odbierajaca ilosc szans po kazdym uderzeniu w samochod
void Szansa::zmniejsz()  {
    ilosc_szans--;
    //wyswietlanie zycia po zmianie (po uderzeniu w samochod)
     setPlainText(QString("Ilosc szans: ") + QString::number(ilosc_szans));
//     if (ilosc_szans ==1) {
//       setPlainText(QString("Ostatnia szansa") );
//      setDefaultTextColor(Qt::red);
//      setFont(QFont("",40));
//     }
     if (ilosc_szans <= 0) {
      gameOver();
     }
}
//int Szansa::podaj_zycie()  {
//    return ilosc_szans;
//}


