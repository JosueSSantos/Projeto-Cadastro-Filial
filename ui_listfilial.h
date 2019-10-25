/********************************************************************************
** Form generated from reading UI file 'listfilial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFILIAL_H
#define UI_LISTFILIAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ListFilial
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnFiltroPesquisa;
    QPushButton *pbFiltroPesquisa;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbOK;
    QPushButton *pbCancelar;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ListFilial)
    {
        if (ListFilial->objectName().isEmpty())
            ListFilial->setObjectName(QString::fromUtf8("ListFilial"));
        ListFilial->resize(601, 547);
        gridLayout_3 = new QGridLayout(ListFilial);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ListFilial);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lnFiltroPesquisa = new QLineEdit(ListFilial);
        lnFiltroPesquisa->setObjectName(QString::fromUtf8("lnFiltroPesquisa"));

        horizontalLayout->addWidget(lnFiltroPesquisa);

        pbFiltroPesquisa = new QPushButton(ListFilial);
        pbFiltroPesquisa->setObjectName(QString::fromUtf8("pbFiltroPesquisa"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/pesquisa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFiltroPesquisa->setIcon(icon);

        horizontalLayout->addWidget(pbFiltroPesquisa);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(ListFilial);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QFont font;
        font.setPointSize(14);
        font.setStyleStrategy(QFont::NoAntialias);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbOK = new QPushButton(ListFilial);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOK->setIcon(icon1);

        verticalLayout->addWidget(pbOK);

        pbCancelar = new QPushButton(ListFilial);
        pbCancelar->setObjectName(QString::fromUtf8("pbCancelar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/cancelado2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancelar->setIcon(icon2);

        verticalLayout->addWidget(pbCancelar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(ListFilial);
        QObject::connect(pbOK, SIGNAL(clicked()), ListFilial, SLOT(close()));
        QObject::connect(pbCancelar, SIGNAL(clicked()), ListFilial, SLOT(close()));

        QMetaObject::connectSlotsByName(ListFilial);
    } // setupUi

    void retranslateUi(QDialog *ListFilial)
    {
        ListFilial->setWindowTitle(QApplication::translate("ListFilial", "Dialog", nullptr));
        label->setText(QApplication::translate("ListFilial", "Filtro", nullptr));
        pbFiltroPesquisa->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ListFilial", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ListFilial", "Nome", nullptr));
        pbOK->setText(QApplication::translate("ListFilial", "OK", nullptr));
        pbCancelar->setText(QApplication::translate("ListFilial", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListFilial: public Ui_ListFilial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFILIAL_H
