/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QWebEngineView *webView;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *cityNameEdit;
    QPushButton *setCityBt;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *curCityLb;
    QLineEdit *postionSreachEdit;
    QListWidget *positionListWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *startPostionEdit;
    QPushButton *setStartPostionBt;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *endPostionEdit;
    QPushButton *setEndPostionBt;
    QPushButton *startNavBt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1223, 839);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        webView = new QWebEngineView(centralwidget);
        webView->setObjectName("webView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(webView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cityNameEdit = new QLineEdit(centralwidget);
        cityNameEdit->setObjectName("cityNameEdit");
        sizePolicy.setHeightForWidth(cityNameEdit->sizePolicy().hasHeightForWidth());
        cityNameEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        cityNameEdit->setFont(font);

        horizontalLayout_2->addWidget(cityNameEdit);

        setCityBt = new QPushButton(centralwidget);
        setCityBt->setObjectName("setCityBt");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setCityBt->sizePolicy().hasHeightForWidth());
        setCityBt->setSizePolicy(sizePolicy1);
        setCityBt->setFont(font);

        horizontalLayout_2->addWidget(setCityBt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        curCityLb = new QLabel(centralwidget);
        curCityLb->setObjectName("curCityLb");
        curCityLb->setFont(font);

        horizontalLayout->addWidget(curCityLb);


        verticalLayout->addLayout(horizontalLayout);

        postionSreachEdit = new QLineEdit(centralwidget);
        postionSreachEdit->setObjectName("postionSreachEdit");
        sizePolicy.setHeightForWidth(postionSreachEdit->sizePolicy().hasHeightForWidth());
        postionSreachEdit->setSizePolicy(sizePolicy);
        postionSreachEdit->setFont(font);

        verticalLayout->addWidget(postionSreachEdit);

        positionListWidget = new QListWidget(centralwidget);
        positionListWidget->setObjectName("positionListWidget");
        positionListWidget->setFont(font);

        verticalLayout->addWidget(positionListWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startPostionEdit = new QLineEdit(centralwidget);
        startPostionEdit->setObjectName("startPostionEdit");
        sizePolicy.setHeightForWidth(startPostionEdit->sizePolicy().hasHeightForWidth());
        startPostionEdit->setSizePolicy(sizePolicy);
        startPostionEdit->setFont(font);

        horizontalLayout_3->addWidget(startPostionEdit);

        setStartPostionBt = new QPushButton(centralwidget);
        setStartPostionBt->setObjectName("setStartPostionBt");
        sizePolicy1.setHeightForWidth(setStartPostionBt->sizePolicy().hasHeightForWidth());
        setStartPostionBt->setSizePolicy(sizePolicy1);
        setStartPostionBt->setFont(font);

        horizontalLayout_3->addWidget(setStartPostionBt);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        endPostionEdit = new QLineEdit(centralwidget);
        endPostionEdit->setObjectName("endPostionEdit");
        sizePolicy.setHeightForWidth(endPostionEdit->sizePolicy().hasHeightForWidth());
        endPostionEdit->setSizePolicy(sizePolicy);
        endPostionEdit->setFont(font);

        horizontalLayout_4->addWidget(endPostionEdit);

        setEndPostionBt = new QPushButton(centralwidget);
        setEndPostionBt->setObjectName("setEndPostionBt");
        sizePolicy.setHeightForWidth(setEndPostionBt->sizePolicy().hasHeightForWidth());
        setEndPostionBt->setSizePolicy(sizePolicy);
        setEndPostionBt->setFont(font);

        horizontalLayout_4->addWidget(setEndPostionBt);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        startNavBt = new QPushButton(centralwidget);
        startNavBt->setObjectName("startNavBt");
        startNavBt->setFont(font);

        verticalLayout->addWidget(startNavBt);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 5);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);

        horizontalLayout_5->addLayout(verticalLayout);

        horizontalLayout_5->setStretch(0, 5);
        horizontalLayout_5->setStretch(1, 2);

        horizontalLayout_6->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1223, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        setCityBt->setText(QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\345\237\216\345\270\202\357\274\232", nullptr));
        curCityLb->setText(QString());
        postionSreachEdit->setText(QString());
        postionSreachEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        setStartPostionBt->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\265\267\347\202\271", nullptr));
        setEndPostionBt->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\273\210\347\202\271", nullptr));
        startNavBt->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\274\350\210\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
