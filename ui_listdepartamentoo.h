/********************************************************************************
** Form generated from reading UI file 'listdepartamentoo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTDEPARTAMENTOO_H
#define UI_LISTDEPARTAMENTOO_H

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

class Ui_listDepartamentoo
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnFiltroDepatamento;
    QPushButton *pbFiltroPesq;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbOkDepartamento;
    QPushButton *pbCancelar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *listDepartamentoo)
    {
        if (listDepartamentoo->objectName().isEmpty())
            listDepartamentoo->setObjectName(QString::fromUtf8("listDepartamentoo"));
        listDepartamentoo->resize(576, 416);
        gridLayout_2 = new QGridLayout(listDepartamentoo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(listDepartamentoo);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lnFiltroDepatamento = new QLineEdit(listDepartamentoo);
        lnFiltroDepatamento->setObjectName(QString::fromUtf8("lnFiltroDepatamento"));

        horizontalLayout->addWidget(lnFiltroDepatamento);

        pbFiltroPesq = new QPushButton(listDepartamentoo);
        pbFiltroPesq->setObjectName(QString::fromUtf8("pbFiltroPesq"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/pesquisa_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFiltroPesq->setIcon(icon);

        horizontalLayout->addWidget(pbFiltroPesq);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(listDepartamentoo);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QFont font;
        font.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbOkDepartamento = new QPushButton(listDepartamentoo);
        pbOkDepartamento->setObjectName(QString::fromUtf8("pbOkDepartamento"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/ok_45.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOkDepartamento->setIcon(icon1);

        verticalLayout->addWidget(pbOkDepartamento);

        pbCancelar = new QPushButton(listDepartamentoo);
        pbCancelar->setObjectName(QString::fromUtf8("pbCancelar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/canceladoProjeto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancelar->setIcon(icon2);

        verticalLayout->addWidget(pbCancelar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(listDepartamentoo);

        QMetaObject::connectSlotsByName(listDepartamentoo);
    } // setupUi

    void retranslateUi(QWidget *listDepartamentoo)
    {
        listDepartamentoo->setWindowTitle(QApplication::translate("listDepartamentoo", "Form", nullptr));
        label->setText(QApplication::translate("listDepartamentoo", "Filtro", nullptr));
        pbFiltroPesq->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("listDepartamentoo", "ID DEP", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("listDepartamentoo", "DEP", nullptr));
        pbOkDepartamento->setText(QApplication::translate("listDepartamentoo", "OK", nullptr));
        pbCancelar->setText(QApplication::translate("listDepartamentoo", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listDepartamentoo: public Ui_listDepartamentoo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTDEPARTAMENTOO_H
