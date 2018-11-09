/********************************************************************************
** Form generated from reading UI file 'alveoleslibres.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALVEOLESLIBRES_H
#define UI_ALVEOLESLIBRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlveolesLibres
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QListWidget *listWidgetNumAlveolesLibres;
    QListWidget *listWidgetRangeeColonnesOccup;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *AlveolesLibres)
    {
        if (AlveolesLibres->objectName().isEmpty())
            AlveolesLibres->setObjectName(QStringLiteral("AlveolesLibres"));
        AlveolesLibres->resize(477, 461);
        label = new QLabel(AlveolesLibres);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 151, 17));
        label_2 = new QLabel(AlveolesLibres);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 50, 171, 17));
        pushButtonReserver = new QPushButton(AlveolesLibres);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(190, 150, 80, 25));
        pushButtonLiberer = new QPushButton(AlveolesLibres);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(190, 210, 80, 25));
        listWidgetNumAlveolesLibres = new QListWidget(AlveolesLibres);
        listWidgetNumAlveolesLibres->setObjectName(QStringLiteral("listWidgetNumAlveolesLibres"));
        listWidgetNumAlveolesLibres->setGeometry(QRect(10, 80, 151, 261));
        listWidgetRangeeColonnesOccup = new QListWidget(AlveolesLibres);
        listWidgetRangeeColonnesOccup->setObjectName(QStringLiteral("listWidgetRangeeColonnesOccup"));
        listWidgetRangeeColonnesOccup->setGeometry(QRect(300, 80, 151, 261));
        pushButtonQuitter = new QPushButton(AlveolesLibres);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(80, 360, 281, 81));

        retranslateUi(AlveolesLibres);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), AlveolesLibres, SLOT(close()));

        QMetaObject::connectSlotsByName(AlveolesLibres);
    } // setupUi

    void retranslateUi(QWidget *AlveolesLibres)
    {
        AlveolesLibres->setWindowTitle(QApplication::translate("AlveolesLibres", "AlveolesLibres", nullptr));
        label->setText(QApplication::translate("AlveolesLibres", "Num\303\251ro d'alv\303\251oles libres", nullptr));
        label_2->setText(QApplication::translate("AlveolesLibres", "Rang\303\251es & colonnes occup\303\251es", nullptr));
        pushButtonReserver->setText(QApplication::translate("AlveolesLibres", "R\303\251server >>", nullptr));
        pushButtonLiberer->setText(QApplication::translate("AlveolesLibres", "<< Lib\303\251rer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("AlveolesLibres", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlveolesLibres: public Ui_AlveolesLibres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALVEOLESLIBRES_H
