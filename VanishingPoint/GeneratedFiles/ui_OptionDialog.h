/********************************************************************************
** Form generated from reading UI file 'OptionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONDIALOG_H
#define UI_OPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OptionDialog
{
public:
    QLabel *label;
    QLineEdit *lineEditContourLineWidth;
    QLabel *label_2;
    QLineEdit *lineEditHorizontalLeftRed;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditHorizontalLeftGreen;
    QLabel *label_5;
    QLineEdit *lineEditHorizontalLeftBlue;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditHorizontalRightGreen;
    QLabel *label_9;
    QLineEdit *lineEditHorizontalRightRed;
    QLineEdit *lineEditHorizontalRightBlue;
    QLabel *label_10;
    QLineEdit *lineEditVerticalGreen;
    QLabel *label_11;
    QLineEdit *lineEditVerticalRed;
    QLabel *label_12;
    QLineEdit *lineEditVerticalBlue;
    QLabel *label_13;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *OptionDialog)
    {
        if (OptionDialog->objectName().isEmpty())
            OptionDialog->setObjectName(QStringLiteral("OptionDialog"));
        OptionDialog->resize(323, 201);
        label = new QLabel(OptionDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 101, 16));
        lineEditContourLineWidth = new QLineEdit(OptionDialog);
        lineEditContourLineWidth->setObjectName(QStringLiteral("lineEditContourLineWidth"));
        lineEditContourLineWidth->setGeometry(QRect(160, 20, 71, 20));
        label_2 = new QLabel(OptionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 121, 16));
        lineEditHorizontalLeftRed = new QLineEdit(OptionDialog);
        lineEditHorizontalLeftRed->setObjectName(QStringLiteral("lineEditHorizontalLeftRed"));
        lineEditHorizontalLeftRed->setGeometry(QRect(170, 50, 31, 20));
        label_3 = new QLabel(OptionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 50, 16, 16));
        label_4 = new QLabel(OptionDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 50, 16, 16));
        lineEditHorizontalLeftGreen = new QLineEdit(OptionDialog);
        lineEditHorizontalLeftGreen->setObjectName(QStringLiteral("lineEditHorizontalLeftGreen"));
        lineEditHorizontalLeftGreen->setGeometry(QRect(220, 50, 31, 20));
        label_5 = new QLabel(OptionDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 50, 16, 16));
        lineEditHorizontalLeftBlue = new QLineEdit(OptionDialog);
        lineEditHorizontalLeftBlue->setObjectName(QStringLiteral("lineEditHorizontalLeftBlue"));
        lineEditHorizontalLeftBlue->setGeometry(QRect(270, 50, 31, 20));
        label_6 = new QLabel(OptionDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 121, 16));
        label_7 = new QLabel(OptionDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 80, 16, 16));
        label_8 = new QLabel(OptionDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 80, 16, 16));
        lineEditHorizontalRightGreen = new QLineEdit(OptionDialog);
        lineEditHorizontalRightGreen->setObjectName(QStringLiteral("lineEditHorizontalRightGreen"));
        lineEditHorizontalRightGreen->setGeometry(QRect(220, 80, 31, 20));
        label_9 = new QLabel(OptionDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 80, 16, 16));
        lineEditHorizontalRightRed = new QLineEdit(OptionDialog);
        lineEditHorizontalRightRed->setObjectName(QStringLiteral("lineEditHorizontalRightRed"));
        lineEditHorizontalRightRed->setGeometry(QRect(170, 80, 31, 20));
        lineEditHorizontalRightBlue = new QLineEdit(OptionDialog);
        lineEditHorizontalRightBlue->setObjectName(QStringLiteral("lineEditHorizontalRightBlue"));
        lineEditHorizontalRightBlue->setGeometry(QRect(270, 80, 31, 20));
        label_10 = new QLabel(OptionDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 110, 121, 16));
        lineEditVerticalGreen = new QLineEdit(OptionDialog);
        lineEditVerticalGreen->setObjectName(QStringLiteral("lineEditVerticalGreen"));
        lineEditVerticalGreen->setGeometry(QRect(220, 110, 31, 20));
        label_11 = new QLabel(OptionDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(210, 110, 16, 16));
        lineEditVerticalRed = new QLineEdit(OptionDialog);
        lineEditVerticalRed->setObjectName(QStringLiteral("lineEditVerticalRed"));
        lineEditVerticalRed->setGeometry(QRect(170, 110, 31, 20));
        label_12 = new QLabel(OptionDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 110, 16, 16));
        lineEditVerticalBlue = new QLineEdit(OptionDialog);
        lineEditVerticalBlue->setObjectName(QStringLiteral("lineEditVerticalBlue"));
        lineEditVerticalBlue->setGeometry(QRect(270, 110, 31, 20));
        label_13 = new QLabel(OptionDialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(260, 110, 16, 16));
        pushButtonOK = new QPushButton(OptionDialog);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(50, 160, 91, 31));
        pushButtonCancel = new QPushButton(OptionDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(190, 160, 91, 31));
        QWidget::setTabOrder(lineEditContourLineWidth, lineEditHorizontalLeftRed);
        QWidget::setTabOrder(lineEditHorizontalLeftRed, lineEditHorizontalLeftGreen);
        QWidget::setTabOrder(lineEditHorizontalLeftGreen, lineEditHorizontalLeftBlue);
        QWidget::setTabOrder(lineEditHorizontalLeftBlue, lineEditHorizontalRightRed);
        QWidget::setTabOrder(lineEditHorizontalRightRed, lineEditHorizontalRightGreen);
        QWidget::setTabOrder(lineEditHorizontalRightGreen, lineEditHorizontalRightBlue);
        QWidget::setTabOrder(lineEditHorizontalRightBlue, lineEditVerticalRed);
        QWidget::setTabOrder(lineEditVerticalRed, lineEditVerticalGreen);
        QWidget::setTabOrder(lineEditVerticalGreen, lineEditVerticalBlue);
        QWidget::setTabOrder(lineEditVerticalBlue, pushButtonOK);
        QWidget::setTabOrder(pushButtonOK, pushButtonCancel);

        retranslateUi(OptionDialog);

        QMetaObject::connectSlotsByName(OptionDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionDialog)
    {
        OptionDialog->setWindowTitle(QApplication::translate("OptionDialog", "OptionDialog", 0));
        label->setText(QApplication::translate("OptionDialog", "Contour line width:", 0));
        label_2->setText(QApplication::translate("OptionDialog", "Horizontal left line color:", 0));
        label_3->setText(QApplication::translate("OptionDialog", "R", 0));
        label_4->setText(QApplication::translate("OptionDialog", "G", 0));
        label_5->setText(QApplication::translate("OptionDialog", "B", 0));
        label_6->setText(QApplication::translate("OptionDialog", "Horizontal right line color:", 0));
        label_7->setText(QApplication::translate("OptionDialog", "B", 0));
        label_8->setText(QApplication::translate("OptionDialog", "G", 0));
        label_9->setText(QApplication::translate("OptionDialog", "R", 0));
        label_10->setText(QApplication::translate("OptionDialog", "Vertical line color:", 0));
        label_11->setText(QApplication::translate("OptionDialog", "G", 0));
        label_12->setText(QApplication::translate("OptionDialog", "R", 0));
        label_13->setText(QApplication::translate("OptionDialog", "B", 0));
        pushButtonOK->setText(QApplication::translate("OptionDialog", "OK", 0));
        pushButtonCancel->setText(QApplication::translate("OptionDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OptionDialog: public Ui_OptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONDIALOG_H
