#include "testalveoleslibre.h"
#include "ui_testalveoleslibre.h"
#include "alveoleslibres.h"

TestAlveolesLibre::TestAlveolesLibre(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestAlveolesLibre)
{
    ui->setupUi(this);

    ui->pushButtonLiberer->setDisabled(true);
       //alveoles = new AlveolesLibres(4,5);

        //for(const int & entier : *alveoles)
        {
          //  ui->listWidgetNumeroAlveole->addItem(QString::number(entier));
        }
}

TestAlveolesLibre::~TestAlveolesLibre()
{
    delete ui;
}

void TestAlveolesLibre::on_pushButtonReserver_clicked()
{

}
