#include "editorwindow.h"
#include "ui_editorwindow.h"
#include <QPainter>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QStandardItem>
#include <QColorDialog>
#include "renderscene.h"

EditorWindow::EditorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditorWindow)
{
    ui->setupUi(this);
    scene = new RenderScene(this);
    scene->setSceneRect(ui->frame->rect());
    view = new QGraphicsView(scene);
    view->viewport()->setMouseTracking(true);
    vlayout = new QVBoxLayout(ui->frame);
    vlayout->addWidget(view);
    ui->pushButton_3->hide();
    ui->pushButton_5->hide();
    ui->pushButton_10->hide();
    ui->listView->hide();

}

EditorWindow::~EditorWindow()
{
    delete view;
    delete vlayout;
    delete scene;
    delete ui;
}


void EditorWindow::on_pushButton_clicked()
{
    scene->setDrawingFigure(RenderScene::Seg);
}

void EditorWindow::on_pushButton_2_clicked()
{
    scene->setDrawingFigure(RenderScene::Ell);
}

void EditorWindow::on_pushButton_4_clicked()
{
    scene->setDrawingFigure(RenderScene::Cir);
}

void EditorWindow::on_pushButton_6_clicked()
{
    scene->setDrawingFigure(RenderScene::Pol);
}

void EditorWindow::on_pushButton_7_clicked()
{
    scene->setDrawingFigure(RenderScene::Tri);
}

void EditorWindow::on_pushButton_8_clicked()
{
    scene->setDrawingFigure(RenderScene::Rec);
}

void EditorWindow::on_pushButton_9_clicked()
{
    scene->setDrawingFigure(RenderScene::Squ);
}

void EditorWindow::on_pushButton_11_clicked()
{
    //Возможно тут утечка
    QColorDialog q(this);
    QColor color = q.getColor();
    if(color.isValid()) {
        scene->setLineColor(color);
        ui->checkBox->setChecked(true);
    }
}

void EditorWindow::on_pushButton_12_clicked()
{
    //Возможно тут утечка
    QColorDialog q(this);
    QColor color = q.getColor();
    if(color.isValid()) {
        scene->setFillColor(color, true);
        ui->checkBox->setChecked(true);
    }
}

void EditorWindow::on_checkBox_clicked(bool checked)
{
    scene->setFillColor(QColor(0,0,0), checked);
}

void EditorWindow::on_pushButton_13_clicked()
{
    scene->moveAllFigures();
}
