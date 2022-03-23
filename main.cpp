#include <QApplication>
#include "Zaba.h"
#include <QGraphicsScene>
#include <QGraphicsView>


int main(int argc, char *argv[])  {
    QApplication a(argc, argv);


    // tworzenie sceny
    QGraphicsScene * scene = new QGraphicsScene();

    //tworzenie przedmiotu w scenie - poznieij bedzie to zaba
    Zaba * rect = new Zaba();
    //ustawianie wielkosci kwadratu - pozniej zaby
    // pierwsze dwa -lolalizacja lewego gornego rogu x,y, kolejne dwa szerokosc i wysokosc
    rect->setRect(0,0,50,50);


    //dodawanie przedmiotu do sceny
    scene->addItem(rect);

    // skupienie na obiekcie- zaba
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    //dod widoku zbey zobaczyc nasza scene
    QGraphicsView * view = new QGraphicsView(scene);

    // widget wizualizujacy scene (oraz jej zawartość)
    view->show();

    return a.exec();
}
