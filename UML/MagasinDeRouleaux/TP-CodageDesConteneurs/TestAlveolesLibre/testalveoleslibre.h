#ifndef TESTALVEOLESLIBRE_H
#define TESTALVEOLESLIBRE_H

#include <QWidget>
//#include "alveoleslibres.h"

namespace Ui {
class TestAlveolesLibre;
}

class TestAlveolesLibre : public QWidget
{
    Q_OBJECT

public:
    explicit TestAlveolesLibre(QWidget *parent = nullptr);
    ~TestAlveolesLibre();

private:
    Ui::TestAlveolesLibre *ui;
    //AlveolesLibres *alveoles;

    void on_pushButtonReserver_clicked();

#endif // TESTALVEOLESLIBRE_H
