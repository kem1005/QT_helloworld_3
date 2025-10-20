#ifndef DESGINWIDGET_H
#define DESGINWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class DesginWidget;
}
QT_END_NAMESPACE

class DesginWidget : public QWidget
{
    Q_OBJECT

public:
    DesginWidget(QWidget *parent = nullptr);
    ~DesginWidget();

private:
    Ui::DesginWidget *ui;
};
#endif // DESGINWIDGET_H
