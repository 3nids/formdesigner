#include "qgisformdesigner.h"
#include "ui_qgisformdesigner.h"

#include <QtDesigner>
#include <QDesignerComponents>
#include <QDesignerFormEditorInterface>
#include <QDesignerPropertyEditorInterface>

QgisFormDesigner::QgisFormDesigner(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::QgisFormDesigner)
{
  ui->setupUi(this);

  QDockWidget *PropertyWidget = new QDockWidget("Test", this);
  QDesignerFormEditorInterface *core = QDesignerComponents::createFormEditor(PropertyWidget);

  //Q_ASSERT(this && core);
/*
  QDesignerPropertyEditorInterface* mPropertyInterface = QDesignerComponents::createPropertyEditor( core, PropertyWidget);
  PropertyWidget->setWidget(mPropertyInterface);
  PropertyWidget->setProperty("property", 0);

  core->setPropertyEditor( mPropertyInterface );
  addDockWidget(Qt::RightDockWidgetArea, PropertyWidget);

  QDockWidget *BoxWidget = new QDockWidget("Test", this);
  QDesignerWidgetBoxInterface* mBoxInterface = QDesignerComponents::createWidgetBox( core, BoxWidget);
  BoxWidget->setWidget(mBoxInterface);
  core->setWidgetBox(mBoxInterface);
  addDockWidget(Qt::RightDockWidgetArea, BoxWidget);
*/
}

QgisFormDesigner::~QgisFormDesigner()
{
  delete ui;
}
