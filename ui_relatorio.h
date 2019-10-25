/********************************************************************************
** Form generated from reading UI file 'relatorio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATORIO_H
#define UI_RELATORIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Relatorio
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pbFiltrar;
    QPushButton *pbCadastrar;
    QSpacerItem *verticalSpacer;
    QPushButton *pbLimpar;
    QStackedWidget *stCadastro;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QLabel *lbRelatorio;

    void setupUi(QWidget *Relatorio)
    {
        if (Relatorio->objectName().isEmpty())
            Relatorio->setObjectName(QString::fromUtf8("Relatorio"));
        Relatorio->resize(866, 515);
        gridLayout_2 = new QGridLayout(Relatorio);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbFiltrar = new QPushButton(Relatorio);
        pbFiltrar->setObjectName(QString::fromUtf8("pbFiltrar"));
        QFont font;
        font.setPointSize(12);
        pbFiltrar->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/filtro.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFiltrar->setIcon(icon);

        gridLayout->addWidget(pbFiltrar, 1, 0, 1, 1);

        pbCadastrar = new QPushButton(Relatorio);
        pbCadastrar->setObjectName(QString::fromUtf8("pbCadastrar"));
        pbCadastrar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCadastrar->setIcon(icon1);

        gridLayout->addWidget(pbCadastrar, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        pbLimpar = new QPushButton(Relatorio);
        pbLimpar->setObjectName(QString::fromUtf8("pbLimpar"));
        pbLimpar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLimpar->setIcon(icon2);

        gridLayout->addWidget(pbLimpar, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        stCadastro = new QStackedWidget(Relatorio);
        stCadastro->setObjectName(QString::fromUtf8("stCadastro"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QFont font1;
        font1.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 1);

        stCadastro->addWidget(page_3);

        gridLayout_2->addWidget(stCadastro, 1, 1, 1, 1);

        lbRelatorio = new QLabel(Relatorio);
        lbRelatorio->setObjectName(QString::fromUtf8("lbRelatorio"));

        gridLayout_2->addWidget(lbRelatorio, 0, 0, 1, 2);


        retranslateUi(Relatorio);

        stCadastro->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Relatorio);
    } // setupUi

    void retranslateUi(QWidget *Relatorio)
    {
        Relatorio->setWindowTitle(QApplication::translate("Relatorio", "Relat\303\263rio de Produtos", nullptr));
        pbFiltrar->setText(QApplication::translate("Relatorio", "  Pesquisa", nullptr));
        pbCadastrar->setText(QApplication::translate("Relatorio", "  Cadastrar", nullptr));
        pbLimpar->setText(QApplication::translate("Relatorio", "  Limpar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Relatorio", "  Categoria   ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Relatorio", "  Produto   ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Relatorio", "  Base   ", nullptr));
        lbRelatorio->setText(QApplication::translate("Relatorio", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Relat\303\263rio</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Relatorio: public Ui_Relatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATORIO_H
