#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#include <QMainWindow>
#include <vector>
#include "renderscene.h"
#include <QGraphicsView>
#include <QVBoxLayout>
#include <QStandardItemModel>


namespace Ui {
class EditorWindow;
}

class EditorWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit EditorWindow(QWidget *parent = 0);
    ~EditorWindow();
    
private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_checkBox_clicked(bool checked);

    void on_pushButton_13_clicked();

private:
    Ui::EditorWindow *ui;   
    RenderScene *scene;
    QGraphicsView *view;
    QVBoxLayout* vlayout;

};

#endif // EDITORWINDOW_H
