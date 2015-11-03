#-------------------------------------------------
#
# Project created by QtCreator 2015-11-03T13:42:48
#
#-------------------------------------------------

QT       += core gui designer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = formdesigner
TEMPLATE = app


SOURCES += main.cpp\
        qgisformdesigner.cpp

HEADERS  += qgisformdesigner.h

FORMS    += qgisformdesigner.ui


#not the best way to handle this, but it should do
mac:!static:contains(QT_CONFIG, qt_framework) {
  LIBS += -framework QtDesignerComponents
} else {
  LIBS += -lQtDesignerComponents
}
