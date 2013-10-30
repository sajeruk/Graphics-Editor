#ifndef RENDERSCENE_H
#define RENDERSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QColor>
#include "Figures/Figure.h"


class RenderScene : public QGraphicsScene
{
    Q_OBJECT    
public:

    enum FigureName {
        Cir, Ell, Lin, Ray, Seg,
        Rec, Rho, Pol, Squ, Tri, None
    };

    explicit RenderScene(QObject *parent = 0);
    ~RenderScene();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

    void setDrawingFigure(FigureName name);
    void setFillColor(QColor color, bool fill);
    void setLineColor(QColor color);

    void moveAllFigures();

signals:
    
public slots:

private:
    bool _isDrawing;
    FigureName figureName;
    Figure* drawingFigure;
    std::vector<Figure*> figures;

    QColor fillColor;
    QColor lineColor;
    bool withFill;


    inline bool isDrawing();
    inline void startDrawing();
    inline void endDrawing();

    Figure* getDrawingFigure(FigureName newFigure, const QPointF& startPosition);
};




#endif // RENDERSCENE_H
