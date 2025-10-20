#include "desginwidget.h"
#include "ui_desginwidget.h"

DesginWidget::DesginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DesginWidget)
{
    ui->setupUi(this);
}

DesginWidget::~DesginWidget()
{
    delete ui;
}
