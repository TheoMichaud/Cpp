#ifndef GESTIONSTOCK_H
#define GESTIONSTOCK_H

#include <QWidget>

namespace Ui {
class GestionStock;
}

class GestionStock : public QWidget
{
    Q_OBJECT

public:
    explicit GestionStock(QWidget *parent = nullptr);
    ~GestionStock();

private:
    Ui::GestionStock *ui;
};

#endif // GESTIONSTOCK_H
