/********************************************************************************
** Form generated from reading UI file 'pekillerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEKILLERWIN_H
#define UI_PEKILLERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeKillerWin
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_6;
    QPushButton *pb_open_struct_file;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pb_open_file;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *PeKillerWin)
    {
        if (PeKillerWin->objectName().isEmpty())
            PeKillerWin->setObjectName(QStringLiteral("PeKillerWin"));
        PeKillerWin->resize(805, 614);
        centralWidget = new QWidget(PeKillerWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_7->addWidget(lineEdit_6);

        pb_open_struct_file = new QPushButton(centralWidget);
        pb_open_struct_file->setObjectName(QStringLiteral("pb_open_struct_file"));

        horizontalLayout_7->addWidget(pb_open_struct_file);


        verticalLayout->addLayout(horizontalLayout_7);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pb_open_file = new QPushButton(centralWidget);
        pb_open_file->setObjectName(QStringLiteral("pb_open_file"));

        horizontalLayout->addWidget(pb_open_file);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeWidget = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(treeWidget);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(97, 0));
        label->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_4->addWidget(label);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(97, 0));
        label_2->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_5->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(97, 0));
        label_3->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(97, 0));
        label_4->setMaximumSize(QSize(97, 16777215));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);


        horizontalLayout_2->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout_2);

        PeKillerWin->setCentralWidget(centralWidget);

        retranslateUi(PeKillerWin);

        QMetaObject::connectSlotsByName(PeKillerWin);
    } // setupUi

    void retranslateUi(QMainWindow *PeKillerWin)
    {
        PeKillerWin->setWindowTitle(QApplication::translate("PeKillerWin", "PeKillerWin", 0));
        label_8->setText(QApplication::translate("PeKillerWin", "<html><head/><body><p><span style=\" font-weight:600;\">\320\244\320\260\320\271\320\273 \320\270\321\201\321\201\320\273\320\265\320\264\321\203\320\265\320\274\320\276\320\271 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213</span></p></body></html>", 0));
        lineEdit_6->setText(QApplication::translate("PeKillerWin", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\260", 0));
        pb_open_struct_file->setText(QApplication::translate("PeKillerWin", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        label_7->setText(QApplication::translate("PeKillerWin", "<html><head/><body><p><span style=\" font-weight:600;\">\320\244\320\260\320\271\320\273 \320\264\320\273\321\217 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217</span></p></body></html>", 0));
        lineEdit->setText(QApplication::translate("PeKillerWin", "\320\244\320\260\320\271\320\273 \320\275\320\265 \320\264\320\273\321\217 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275", 0));
        pb_open_file->setText(QApplication::translate("PeKillerWin", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PeKillerWin", "\320\222\321\213\320\261\320\276\321\200 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("PeKillerWin", "dos_head", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("PeKillerWin", "dos_stub", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("PeKillerWin", "pe_head", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label_5->setText(QApplication::translate("PeKillerWin", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\320\237\320\276\320\273\320\265: \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\276</span></p></body></html>", 0));
        label->setText(QApplication::translate("PeKillerWin", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\273\321\217", 0));
        label_2->setText(QApplication::translate("PeKillerWin", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265", 0));
        label_3->setText(QApplication::translate("PeKillerWin", "\320\240\320\260\320\267\320\274\320\265\321\200", 0));
        label_4->setText(QApplication::translate("PeKillerWin", "\320\242\320\270\320\277", 0));
        label_6->setText(QApplication::translate("PeKillerWin", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265</span></p></body></html>", 0));
        radioButton_2->setText(QApplication::translate("PeKillerWin", "&Hex", 0));
        radioButton->setText(QApplication::translate("PeKillerWin", "&ASCII", 0));
    } // retranslateUi

};

namespace Ui {
    class PeKillerWin: public Ui_PeKillerWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEKILLERWIN_H
