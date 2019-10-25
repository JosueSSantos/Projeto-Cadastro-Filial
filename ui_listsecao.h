/********************************************************************************
** Form generated from reading UI file 'listsecao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTSECAO_H
#define UI_LISTSECAO_H

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

class Ui_listSecao
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leFiltroPesqSecao;
    QPushButton *pbFiltroSecao;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbOkSecao;
    QPushButton *pbCancelar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *listSecao)
    {
        if (listSecao->objectName().isEmpty())
            listSecao->setObjectName(QString::fromUtf8("listSecao"));
        listSecao->resize(530, 447);
        gridLayout_2 = new QGridLayout(listSecao);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(listSecao);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leFiltroPesqSecao = new QLineEdit(listSecao);
        leFiltroPesqSecao->setObjectName(QString::fromUtf8("leFiltroPesqSecao"));

        horizontalLayout->addWidget(leFiltroPesqSecao);

        pbFiltroSecao = new QPushButton(listSecao);
        pbFiltroSecao->setObjectName(QString::fromUtf8("pbFiltroSecao"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/pesquisa_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFiltroSecao->setIcon(icon);

        horizontalLayout->addWidget(pbFiltroSecao);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(listSecao);
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
        pbOkSecao = new QPushButton(listSecao);
        pbOkSecao->setObjectName(QString::fromUtf8("pbOkSecao"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/ok_45.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOkSecao->setIcon(icon1);

        verticalLayout->addWidget(pbOkSecao);

        pbCancelar = new QPushButton(listSecao);
        pbCancelar->setObjectName(QString::fromUtf8("pbCancelar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/canceladoProjeto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancelar->setIcon(icon2);

        verticalLayout->addWidget(pbCancelar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 2);


        retranslateUi(listSecao);

        QMetaObject::connectSlotsByName(listSecao);
    } // setupUi

    void retranslateUi(QWidget *listSecao)
    {
        listSecao->setWindowTitle(QApplication::translate("listSecao", "Form", nullptr));
        label->setText(QApplication::translate("listSecao", "Filtro", nullptr));
        pbFiltroSecao->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("listSecao", "ID ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("listSecao", "SE\303\207\303\203O", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("listSecao", "ID DEP", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("listSecao", "DEP", nullptr));
        pbOkSecao->setText(QApplication::translate("listSecao", "OK", nullptr));
        pbCancelar->setText(QApplication::translate("listSecao", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listSecao: public Ui_listSecao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTSECAO_H
