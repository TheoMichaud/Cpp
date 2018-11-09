/********************************************************************************
** Form generated from reading UI file 'testalveoleslibre.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTALVEOLESLIBRE_H
#define UI_TESTALVEOLESLIBRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAlveolesLibre
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelNumeroAlveole;
    QListWidget *listWidgetNumeroAlveole;
    QPushButton *pushButtonLiberer;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonReserver;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelRangeeOccupe;
    QListWidget *listWidgetRangeeOccupe;

    void setupUi(QWidget *TestAlveolesLibre)
    {
        if (TestAlveolesLibre->objectName().isEmpty())
            TestAlveolesLibre->setObjectName(QStringLiteral("TestAlveolesLibre"));
        TestAlveolesLibre->resize(538, 405);
        layoutWidget = new QWidget(TestAlveolesLibre);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 171, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelNumeroAlveole = new QLabel(layoutWidget);
        labelNumeroAlveole->setObjectName(QStringLiteral("labelNumeroAlveole"));

        verticalLayout->addWidget(labelNumeroAlveole);

        listWidgetNumeroAlveole = new QListWidget(layoutWidget);
        listWidgetNumeroAlveole->setObjectName(QStringLiteral("listWidgetNumeroAlveole"));

        verticalLayout->addWidget(listWidgetNumeroAlveole);

        pushButtonLiberer = new QPushButton(TestAlveolesLibre);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(220, 190, 80, 25));
        pushButtonQuitter = new QPushButton(TestAlveolesLibre);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(120, 310, 311, 71));
        pushButtonReserver = new QPushButton(TestAlveolesLibre);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(220, 130, 80, 25));
        layoutWidget_2 = new QWidget(TestAlveolesLibre);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(330, 20, 172, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelRangeeOccupe = new QLabel(layoutWidget_2);
        labelRangeeOccupe->setObjectName(QStringLiteral("labelRangeeOccupe"));

        verticalLayout_2->addWidget(labelRangeeOccupe);

        listWidgetRangeeOccupe = new QListWidget(layoutWidget_2);
        listWidgetRangeeOccupe->setObjectName(QStringLiteral("listWidgetRangeeOccupe"));

        verticalLayout_2->addWidget(listWidgetRangeeOccupe);


        retranslateUi(TestAlveolesLibre);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), TestAlveolesLibre, SLOT(close()));

        QMetaObject::connectSlotsByName(TestAlveolesLibre);
    } // setupUi

    void retranslateUi(QWidget *TestAlveolesLibre)
    {
        TestAlveolesLibre->setWindowTitle(QApplication::translate("TestAlveolesLibre", "TestAlveolesLibre", nullptr));
        labelNumeroAlveole->setText(QApplication::translate("TestAlveolesLibre", "Num\303\251ro d'alv\303\251oles libres", nullptr));
        pushButtonLiberer->setText(QApplication::translate("TestAlveolesLibre", "<< Lib\303\251rer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("TestAlveolesLibre", "Quitter", nullptr));
        pushButtonReserver->setText(QApplication::translate("TestAlveolesLibre", "R\303\251server >>", nullptr));
        labelRangeeOccupe->setText(QApplication::translate("TestAlveolesLibre", "Rang\303\251es & colonnes occup\303\251es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAlveolesLibre: public Ui_TestAlveolesLibre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTALVEOLESLIBRE_H
