/********************************************************************************
** Form generated from reading UI file 'listproduto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTPRODUTO_H
#define UI_LISTPRODUTO_H

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

class Ui_listProduto
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnFiltroProduto;
    QPushButton *pbFiltroPesq;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbOkProduto;
    QPushButton *pbCancelar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *listProduto)
    {
        if (listProduto->objectName().isEmpty())
            listProduto->setObjectName(QString::fromUtf8("listProduto"));
        listProduto->resize(731, 475);
        gridLayout_2 = new QGridLayout(listProduto);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(listProduto);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lnFiltroProduto = new QLineEdit(listProduto);
        lnFiltroProduto->setObjectName(QString::fromUtf8("lnFiltroProduto"));

        horizontalLayout->addWidget(lnFiltroProduto);

        pbFiltroPesq = new QPushButton(listProduto);
        pbFiltroPesq->setObjectName(QString::fromUtf8("pbFiltroPesq"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/pesquisa_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFiltroPesq->setIcon(icon);

        horizontalLayout->addWidget(pbFiltroPesq);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(listProduto);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbOkProduto = new QPushButton(listProduto);
        pbOkProduto->setObjectName(QString::fromUtf8("pbOkProduto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/ok_45.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOkProduto->setIcon(icon1);

        verticalLayout->addWidget(pbOkProduto);

        pbCancelar = new QPushButton(listProduto);
        pbCancelar->setObjectName(QString::fromUtf8("pbCancelar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/canceladoProjeto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancelar->setIcon(icon2);

        verticalLayout->addWidget(pbCancelar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(listProduto);

        QMetaObject::connectSlotsByName(listProduto);
    } // setupUi

    void retranslateUi(QWidget *listProduto)
    {
        listProduto->setWindowTitle(QApplication::translate("listProduto", "Form", nullptr));
        label->setText(QApplication::translate("listProduto", "Filtro", nullptr));
        pbFiltroPesq->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("listProduto", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("listProduto", "PRODUTO", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("listProduto", "BASE", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("listProduto", "VALOR", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("listProduto", "ID CAT", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("listProduto", "CATEGORIA", nullptr));
        pbOkProduto->setText(QApplication::translate("listProduto", "OK", nullptr));
        pbCancelar->setText(QApplication::translate("listProduto", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listProduto: public Ui_listProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTPRODUTO_H
