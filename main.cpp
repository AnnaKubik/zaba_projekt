#include <QApplication>
#include "Akcja.h"
//tworzenie globalnego objektu akcja
Akcja *akcja;
int main(int argc, char *argv[])  {
    QApplication a(argc, argv);

akcja = new Akcja();
akcja->show();

return a.exec();
}
