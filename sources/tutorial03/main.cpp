#include <QtWidgets/qapplication.h>

#include "oglwidget.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    OGLWidget widget;
    widget.resize(800, 600);
    widget.show();

    return app.exec();
}