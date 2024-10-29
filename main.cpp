#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    app.setWindowIcon(QIcon(":/new/prefix1/app_icon.ico"));

    Widget w;
    w.show();
    return app.exec();
}
