#ifndef QGISFORMDESIGNER_H
#define QGISFORMDESIGNER_H

#include <QMainWindow>

namespace Ui {
  class QgisFormDesigner;
}

class QDesignerFormEditorInterface;

class QgisFormDesigner : public QMainWindow
{
    Q_OBJECT

  public:
    explicit QgisFormDesigner(QWidget *parent = 0);
    ~QgisFormDesigner();

  private:
    Ui::QgisFormDesigner *ui;
};

#endif // QGISFORMDESIGNER_H
