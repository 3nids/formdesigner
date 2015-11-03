#include "qgisformdesigner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QgisFormDesigner w;
  w.show();

  return a.exec();
}
