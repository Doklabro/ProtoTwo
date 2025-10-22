#include "ProtoTwo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ProtoTwo window;
    window.show();
    return app.exec();
}
