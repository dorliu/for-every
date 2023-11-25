#ifndef CELL_MAIN_H
#define CELL_MAIN_H

#include <QWidget>

namespace Ui {
class Cell_Main;
}

class Cell_Main : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Main(QWidget *parent = nullptr);
    ~Cell_Main();

    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);

private slots:
    void on_btn_set_clicked();

    void on_btn_clear_clicked();

private:
    Ui::Cell_Main *ui;
    bool m_isPressed = false;
    QPoint m_wnd;
    QPoint press;
};

#endif // CELL_MAIN_H
