#include "cell_main.h"
#include "ui_cell_main.h"
#include <QMouseEvent>
#include<QtDebug>


Cell_Main::Cell_Main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cell_Main)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
}

Cell_Main::~Cell_Main()
{
    delete ui;
}

void Cell_Main::mousePressEvent(QMouseEvent *event)
{
    auto rect=ui->title->geometry();
    auto p=event->pos();
    if(rect.contains(p))
    {
        m_isPressed=true;

    m_wnd = this->geometry().topLeft();

       press = this->mapToGlobal(p);
    }
}

void Cell_Main::mouseReleaseEvent(QMouseEvent *event)
{

        m_isPressed=false;

}

void Cell_Main::mouseMoveEvent(QMouseEvent *event)
{
    if(m_isPressed)
    {
        auto v =  mapToGlobal(event->pos())- press;

        auto r = m_wnd;

        this->move(r+v);
    }
}

void Cell_Main::on_btn_set_clicked()
{

}

void Cell_Main::on_btn_clear_clicked()
{
    ui->textBrowser->clear();
}
