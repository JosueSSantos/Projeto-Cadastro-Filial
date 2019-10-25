/********************************************************************************
** Form generated from reading UI file 'listrelatoriobase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTRELATORIOBASE_H
#define UI_LISTRELATORIOBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listRelatorioBase
{
public:

    void setupUi(QWidget *listRelatorioBase)
    {
        if (listRelatorioBase->objectName().isEmpty())
            listRelatorioBase->setObjectName(QString::fromUtf8("listRelatorioBase"));
        listRelatorioBase->resize(400, 300);

        retranslateUi(listRelatorioBase);

        QMetaObject::connectSlotsByName(listRelatorioBase);
    } // setupUi

    void retranslateUi(QWidget *listRelatorioBase)
    {
        listRelatorioBase->setWindowTitle(QApplication::translate("listRelatorioBase", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listRelatorioBase: public Ui_listRelatorioBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTRELATORIOBASE_H
