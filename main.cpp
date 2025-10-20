#include "desginwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DesginWidget w;
    w.show();

    return a.exec();
}
