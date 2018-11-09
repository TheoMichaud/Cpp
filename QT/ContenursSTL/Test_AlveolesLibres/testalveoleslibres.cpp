/**
  @file alveoleslibres.h
  @brief Implémentation du header alveolesLibres
  @version 1.0
  @author Michaud Théo
  @date 16/10/18
*/
#include "testalveoleslibres.h"

#include "ui_testalveoleslibres.h"
#include "alveoleslibres.h"

TestAlveolesLibres::TestAlveolesLibres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestAlveolesLibres)
{
    ui->setupUi(this);

    ui->pushButtonLiberer->setDisabled(true);
           alveoles = new AlveolesLibres(4,5);

            for(const int & entier : *alveoles)
            {
                ui->listWidgetNumeroAlveole->addItem(QString::number(entier));
            }
}

TestAlveolesLibres::~TestAlveolesLibres()
{
    delete ui;
}
