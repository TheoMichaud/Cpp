#include "gestionstock.h"
#include "ui_gestionstock.h"

GestionStock::GestionStock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GestionStock)
{
    ui->setupUi(this);
}

GestionStock::~GestionStock()
{
    delete ui;
}
