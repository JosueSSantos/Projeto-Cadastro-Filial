/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QGridLayout *gridLayout_4;
    QStackedWidget *stRelatorio;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lnCategoria;
    QPushButton *btDepartamento;
    QLabel *lbProduto;
    QLabel *lbFilial;
    QLabel *lbCategoria;
    QLabel *lbDepartamento;
    QLineEdit *lnBase;
    QLineEdit *lnProduto;
    QLineEdit *lnFilial;
    QPushButton *btCategoria;
    QPushButton *btFilial;
    QLabel *lbBase;
    QLineEdit *lnDepartamento;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *btSalvar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btLimpar;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QString::fromUtf8("Cadastro"));
        Cadastro->resize(843, 439);
        gridLayout_4 = new QGridLayout(Cadastro);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stRelatorio = new QStackedWidget(Cadastro);
        stRelatorio->setObjectName(QString::fromUtf8("stRelatorio"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lnCategoria = new QLineEdit(page);
        lnCategoria->setObjectName(QString::fromUtf8("lnCategoria"));

        gridLayout->addWidget(lnCategoria, 2, 1, 1, 1);

        btDepartamento = new QPushButton(page);
        btDepartamento->setObjectName(QString::fromUtf8("btDepartamento"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/pesquisa.png"), QSize(), QIcon::Normal, QIcon::Off);
        btDepartamento->setIcon(icon);

        gridLayout->addWidget(btDepartamento, 1, 2, 1, 1);

        lbProduto = new QLabel(page);
        lbProduto->setObjectName(QString::fromUtf8("lbProduto"));

        gridLayout->addWidget(lbProduto, 3, 0, 1, 1);

        lbFilial = new QLabel(page);
        lbFilial->setObjectName(QString::fromUtf8("lbFilial"));

        gridLayout->addWidget(lbFilial, 0, 0, 1, 1);

        lbCategoria = new QLabel(page);
        lbCategoria->setObjectName(QString::fromUtf8("lbCategoria"));

        gridLayout->addWidget(lbCategoria, 2, 0, 1, 1);

        lbDepartamento = new QLabel(page);
        lbDepartamento->setObjectName(QString::fromUtf8("lbDepartamento"));

        gridLayout->addWidget(lbDepartamento, 1, 0, 1, 1);

        lnBase = new QLineEdit(page);
        lnBase->setObjectName(QString::fromUtf8("lnBase"));

        gridLayout->addWidget(lnBase, 4, 1, 1, 1);

        lnProduto = new QLineEdit(page);
        lnProduto->setObjectName(QString::fromUtf8("lnProduto"));

        gridLayout->addWidget(lnProduto, 3, 1, 1, 1);

        lnFilial = new QLineEdit(page);
        lnFilial->setObjectName(QString::fromUtf8("lnFilial"));

        gridLayout->addWidget(lnFilial, 0, 1, 1, 1);

        btCategoria = new QPushButton(page);
        btCategoria->setObjectName(QString::fromUtf8("btCategoria"));
        btCategoria->setIcon(icon);

        gridLayout->addWidget(btCategoria, 2, 2, 1, 1);

        btFilial = new QPushButton(page);
        btFilial->setObjectName(QString::fromUtf8("btFilial"));
        btFilial->setIcon(icon);

        gridLayout->addWidget(btFilial, 0, 2, 1, 1);

        lbBase = new QLabel(page);
        lbBase->setObjectName(QString::fromUtf8("lbBase"));

        gridLayout->addWidget(lbBase, 4, 0, 1, 1);

        lnDepartamento = new QLineEdit(page);
        lnDepartamento->setObjectName(QString::fromUtf8("lnDepartamento"));

        gridLayout->addWidget(lnDepartamento, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(478, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        btSalvar = new QPushButton(page);
        btSalvar->setObjectName(QString::fromUtf8("btSalvar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        btSalvar->setIcon(icon1);

        gridLayout_2->addWidget(btSalvar, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        btLimpar = new QPushButton(page);
        btLimpar->setObjectName(QString::fromUtf8("btLimpar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Projeto_ cadastro/recursos/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btLimpar->setIcon(icon2);

        gridLayout_2->addWidget(btLimpar, 1, 3, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        stRelatorio->addWidget(page);

        gridLayout_4->addWidget(stRelatorio, 0, 0, 1, 1);


        retranslateUi(Cadastro);
        QObject::connect(btLimpar, SIGNAL(clicked()), lnFilial, SLOT(clear()));
        QObject::connect(btLimpar, SIGNAL(clicked()), lnDepartamento, SLOT(clear()));
        QObject::connect(btLimpar, SIGNAL(clicked()), lnProduto, SLOT(clear()));
        QObject::connect(btLimpar, SIGNAL(clicked()), lnBase, SLOT(clear()));
        QObject::connect(btLimpar, SIGNAL(clicked()), lnCategoria, SLOT(clear()));
        QObject::connect(lnFilial, SIGNAL(returnPressed()), btFilial, SLOT(click()));
        QObject::connect(lnDepartamento, SIGNAL(returnPressed()), btDepartamento, SLOT(click()));
        QObject::connect(lnCategoria, SIGNAL(returnPressed()), btCategoria, SLOT(click()));

        stRelatorio->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QWidget *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "Form", nullptr));
        lnCategoria->setInputMask(QString());
        btDepartamento->setText(QString());
        lbProduto->setText(QApplication::translate("Cadastro", "<html><head/><body><p><span style=\" font-weight:600;\">Produto:</span></p></body></html>", nullptr));
        lbFilial->setText(QApplication::translate("Cadastro", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Filial</span><span style=\" font-weight:600;\">:</span></p></body></html>", nullptr));
        lbCategoria->setText(QApplication::translate("Cadastro", "<html><head/><body><p><span style=\" font-weight:600;\">Categoria:</span></p></body></html>", nullptr));
        lbDepartamento->setText(QApplication::translate("Cadastro", "<html><head/><body><p><span style=\" font-weight:600;\">Departamento:</span></p></body></html>", nullptr));
        lnBase->setInputMask(QString());
        lnProduto->setInputMask(QString());
        lnFilial->setInputMask(QString());
        btCategoria->setText(QString());
        btFilial->setText(QString());
        lbBase->setText(QApplication::translate("Cadastro", "<html><head/><body><p><span style=\" font-weight:600;\">Base</span></p></body></html>", nullptr));
        lnDepartamento->setInputMask(QString());
        label->setText(QApplication::translate("Cadastro", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Cadastro Base/Margem Cliente</span></p></body></html>", nullptr));
        btSalvar->setText(QApplication::translate("Cadastro", "Salvar", nullptr));
        btLimpar->setText(QApplication::translate("Cadastro", "  Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
