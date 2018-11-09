/**
  @file testalveoleslibres.h
  @brief Déclaration de la classe testalveoleslibres
  @version 1.0
  @author Théo MICHAUD
  @date 16/10/2018
  */

#ifndef TESTALVEOLESLIBRES_H
#define TESTALVEOLESLIBRES_H

#include <QWidget>
#include <alveoleslibres.h>
namespace Ui {
class TestAlveolesLibres;
}

class TestAlveolesLibres : public QWidget
{
    Q_OBJECT

public:
    explicit TestAlveolesLibres(QWidget *parent = nullptr);
    ~TestAlveolesLibres();

private:
    Ui::TestAlveolesLibres *ui;
    AlveolesLibres *alveoles;
};

#endif // TESTALVEOLESLIBRES_H
