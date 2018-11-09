/**
    @file alveolesWidget.cpp
    @brief Implémentation de la classe alveolesWidget
    @version 1.0
    @author MICHAUD Théo
    @date 16/10/2018
*/

#include "alveoleswidget.h"
#include "ui_alveoleswidget.h"
#include "alveoleslibres.h"
#include <list>

using namespace std;

AlveolesWidget::AlveolesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlveolesWidget),
    mesAlveoles(10, 20)
{
    ui->setupUi(this);


    for(const int & str : mesAlveoles)
    {
        ui->listWidgetAlveolesLibres->addItem(QString::number(str));

    }
}


AlveolesWidget::~AlveolesWidget()
{
    delete ui;
}

void AlveolesWidget::on_pushButtonReserver_clicked()
{
    int rangee, colonne;

    mesAlveoles.Reserver(rangee, colonne);
    QString item = QString::number(rangee) + "-" + QString::number(colonne);
    ui->listWidgetAlveolesLibres->clear();
    for(const int & str : mesAlveoles)
    {
        ui->listWidgetAlveolesLibres->addItem(QString::number(str));

    }
    ui->listWidgetOccupee->addItem(item);
}

void AlveolesWidget::on_pushButtonLiberer_clicked()
{
    int rangee, colonne;
}
