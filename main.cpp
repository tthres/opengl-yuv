#include "TestQTOpengl.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestQTOpengl w;
    w.show();
    return a.exec();
}
