#-------------------------------------------------
#
# Project created by QtCreator 2013-09-21T00:46:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TP_LAB1_GraphEditor_BMS
TEMPLATE = app


SOURCES += main.cpp\
        editorwindow.cpp \
    Figures/Figure.cpp \
    renderscene.cpp \
    Figures/Triangle.cpp \
    Figures/Square.cpp \
    Figures/Segment.cpp \
    Figures/Rhombus.cpp \
    Figures/Rectangle.cpp \
    Figures/Ray.cpp \
    Figures/Polygon.cpp \
    Figures/Parallelogram.cpp \
    Figures/Line.cpp \
    Figures/Figure2D.cpp \
    Figures/Ellipse.cpp \
    Figures/Circle.cpp

HEADERS  += editorwindow.h \
    Figures/Figure.h \
    renderscene.h \
    Figures/Triangle.h \
    Figures/Square.h \
    Figures/Segment.h \
    Figures/Rhombus.h \
    Figures/Rectangle.h \
    Figures/Ray.h \
    Figures/Polygon.h \
    Figures/Parallelogram.h \
    Figures/Line.h \
    Figures/Figure2D.h \
    Figures/Ellipse.h \
    Figures/Circle.h

FORMS    += editorwindow.ui
