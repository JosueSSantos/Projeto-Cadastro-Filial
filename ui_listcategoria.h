/********************************************************************************
** Form generated from reading UI file 'listcategoria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTCATEGORIA_H
#define UI_LISTCATEGORIA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listCategoria
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnFiltroCategoria;
    QPushButton *pbFiltroPesq;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbOkCategoria;
    QPushButton *pbCancelar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *listCategoria)
    {
        if (listCategoria->objectName().isEmpty())
            listCategoria->setObjectName(QString::fromUtf8("listCategoria"));
        listCategoria->resize(552, 466);
        gridLayout_2 = new QGridLayout(listCategoria);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(listCategoria);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lnFiltroCategoria = new QLineEdit(listCategoria);
        lnFiltroCategoria->setObjectName(QString::fromUtf8("lnFiltroCategoria"));

        horizontalLayout->addWidget(lnFiltroCategoria);

        pbFiltroPesq = new QPushButton(listCategoria);
        pbFiltroPesq->setObjectName(QString::fromUtf8("pbFiltroPesq"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/pesquisa_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFiltroPesq->setIcon(icon);

        horizontalLayout->addWidget(pbFiltroPesq);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(listCategoria);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbOkCategoria = new QPushButton(listCategoria);
        pbOkCategoria->setObjectName(QString::fromUtf8("pbOkCategoria"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/ok_45.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOkCategoria->setIcon(icon1);

        verticalLayout->addWidget(pbOkCategoria);

        pbCancelar = new QPushButton(listCategoria);
        pbCancelar->setObjectName(QString::fromUtf8("pbCancelar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/canceladoProjeto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancelar->setIcon(icon2);

        verticalLayout->addWidget(pbCancelar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(listCategoria);

        QMetaObject::connectSlotsByName(listCategoria);
    } // setupUi

    void retranslateUi(QWidget *listCategoria)
    {
        listCategoria->setWindowTitle(QApplication::translate("listCategoria", "Form", nullptr));
        label->setText(QApplication::translate("listCategoria", "Filtro", nullptr));
        pbFiltroPesq->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("listCategoria", "ID CATEGO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("listCategoria", "CATEGORIA", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("listCategoria", "ID SE\303\207\303\203O", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("listCategoria", "SE\303\207\303\203O", nullptr));
        pbOkCategoria->setText(QApplication::translate("listCategoria", "OK", nullptr));
        pbCancelar->setText(QApplication::translate("listCategoria", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listCategoria: public Ui_listCategoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTCATEGORIA_H
