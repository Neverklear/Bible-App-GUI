/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Welcome;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QWidget *Verse;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *chapterSpinBox;
    QLabel *label_3;
    QSpinBox *verseSpinBox;
    QComboBox *bookComboBox;
    QTextEdit *resultTextEdit;
    QLabel *label_4;
    QPushButton *searchVerseButton;
    QWidget *Word;
    QTextEdit *wordResultTextEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *prevWordButton;
    QPushButton *nextWordButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *wordLineEdit;
    QPushButton *searchWordButton;
    QWidget *Phrase;
    QTextEdit *phraseResultTextEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *phraseLineEdit;
    QPushButton *searchPhraseButton;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *prevPhraseButton;
    QPushButton *nextPhraseButton;
    QWidget *Chapter;
    QTextEdit *chapterResultTextEdit;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *prevChapterButton;
    QPushButton *nextChapterButton;
    QWidget *layoutWidget6;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QComboBox *chapterBookComboBox;
    QLabel *label_14;
    QSpinBox *chapterSearchSpinBox;
    QPushButton *searchChapterButton;
    QWidget *Book;
    QTextEdit *bookResultTextEdit;
    QPushButton *searchBookButton;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QComboBox *bookBookComboBox;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *prevBookButton;
    QPushButton *nextBookButton;
    QWidget *About;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(540, 717);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-10, 0, 521, 661));
        Welcome = new QWidget();
        Welcome->setObjectName("Welcome");
        textBrowser_2 = new QTextBrowser(Welcome);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(0, 10, 501, 51));
        textBrowser_3 = new QTextBrowser(Welcome);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(10, 90, 501, 441));
        tabWidget->addTab(Welcome, QString());
        Verse = new QWidget();
        Verse->setObjectName("Verse");
        layoutWidget = new QWidget(Verse);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 48, 461, 102));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        chapterSpinBox = new QSpinBox(layoutWidget);
        chapterSpinBox->setObjectName("chapterSpinBox");
        chapterSpinBox->setMinimum(1);
        chapterSpinBox->setMaximum(150);

        formLayout->setWidget(1, QFormLayout::FieldRole, chapterSpinBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        verseSpinBox = new QSpinBox(layoutWidget);
        verseSpinBox->setObjectName("verseSpinBox");
        verseSpinBox->setMinimum(1);
        verseSpinBox->setMaximum(176);

        formLayout->setWidget(2, QFormLayout::FieldRole, verseSpinBox);

        bookComboBox = new QComboBox(layoutWidget);
        bookComboBox->setObjectName("bookComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, bookComboBox);

        resultTextEdit = new QTextEdit(Verse);
        resultTextEdit->setObjectName("resultTextEdit");
        resultTextEdit->setGeometry(QRect(30, 190, 461, 341));
        label_4 = new QLabel(Verse);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(21, 21, 103, 20));
        searchVerseButton = new QPushButton(Verse);
        searchVerseButton->setObjectName("searchVerseButton");
        searchVerseButton->setGeometry(QRect(200, 160, 92, 29));
        tabWidget->addTab(Verse, QString());
        Word = new QWidget();
        Word->setObjectName("Word");
        wordResultTextEdit = new QTextEdit(Word);
        wordResultTextEdit->setObjectName("wordResultTextEdit");
        wordResultTextEdit->setGeometry(QRect(11, 69, 501, 411));
        layoutWidget1 = new QWidget(Word);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(170, 500, 169, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        prevWordButton = new QPushButton(layoutWidget1);
        prevWordButton->setObjectName("prevWordButton");

        horizontalLayout->addWidget(prevWordButton);

        nextWordButton = new QPushButton(layoutWidget1);
        nextWordButton->setObjectName("nextWordButton");

        horizontalLayout->addWidget(nextWordButton);

        layoutWidget2 = new QWidget(Word);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(100, 20, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        wordLineEdit = new QLineEdit(layoutWidget2);
        wordLineEdit->setObjectName("wordLineEdit");

        horizontalLayout_3->addWidget(wordLineEdit);

        searchWordButton = new QPushButton(layoutWidget2);
        searchWordButton->setObjectName("searchWordButton");

        horizontalLayout_3->addWidget(searchWordButton);

        tabWidget->addTab(Word, QString());
        Phrase = new QWidget();
        Phrase->setObjectName("Phrase");
        phraseResultTextEdit = new QTextEdit(Phrase);
        phraseResultTextEdit->setObjectName("phraseResultTextEdit");
        phraseResultTextEdit->setGeometry(QRect(21, 69, 481, 431));
        layoutWidget3 = new QWidget(Phrase);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(100, 20, 325, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName("label_11");

        horizontalLayout_5->addWidget(label_11);

        phraseLineEdit = new QLineEdit(layoutWidget3);
        phraseLineEdit->setObjectName("phraseLineEdit");

        horizontalLayout_5->addWidget(phraseLineEdit);

        searchPhraseButton = new QPushButton(layoutWidget3);
        searchPhraseButton->setObjectName("searchPhraseButton");

        horizontalLayout_5->addWidget(searchPhraseButton);

        layoutWidget4 = new QWidget(Phrase);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(170, 510, 169, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        prevPhraseButton = new QPushButton(layoutWidget4);
        prevPhraseButton->setObjectName("prevPhraseButton");

        horizontalLayout_6->addWidget(prevPhraseButton);

        nextPhraseButton = new QPushButton(layoutWidget4);
        nextPhraseButton->setObjectName("nextPhraseButton");

        horizontalLayout_6->addWidget(nextPhraseButton);

        tabWidget->addTab(Phrase, QString());
        Chapter = new QWidget();
        Chapter->setObjectName("Chapter");
        chapterResultTextEdit = new QTextEdit(Chapter);
        chapterResultTextEdit->setObjectName("chapterResultTextEdit");
        chapterResultTextEdit->setGeometry(QRect(31, 148, 471, 351));
        layoutWidget5 = new QWidget(Chapter);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(180, 510, 169, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        prevChapterButton = new QPushButton(layoutWidget5);
        prevChapterButton->setObjectName("prevChapterButton");

        horizontalLayout_4->addWidget(prevChapterButton);

        nextChapterButton = new QPushButton(layoutWidget5);
        nextChapterButton->setObjectName("nextChapterButton");

        horizontalLayout_4->addWidget(nextChapterButton);

        layoutWidget6 = new QWidget(Chapter);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(150, 20, 217, 102));
        formLayout_3 = new QFormLayout(layoutWidget6);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget6);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        chapterBookComboBox = new QComboBox(layoutWidget6);
        chapterBookComboBox->setObjectName("chapterBookComboBox");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, chapterBookComboBox);

        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName("label_14");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        chapterSearchSpinBox = new QSpinBox(layoutWidget6);
        chapterSearchSpinBox->setObjectName("chapterSearchSpinBox");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, chapterSearchSpinBox);

        searchChapterButton = new QPushButton(layoutWidget6);
        searchChapterButton->setObjectName("searchChapterButton");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, searchChapterButton);

        tabWidget->addTab(Chapter, QString());
        Book = new QWidget();
        Book->setObjectName("Book");
        bookResultTextEdit = new QTextEdit(Book);
        bookResultTextEdit->setObjectName("bookResultTextEdit");
        bookResultTextEdit->setGeometry(QRect(21, 119, 481, 391));
        searchBookButton = new QPushButton(Book);
        searchBookButton->setObjectName("searchBookButton");
        searchBookButton->setGeometry(QRect(190, 70, 91, 29));
        layoutWidget7 = new QWidget(Book);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(51, 20, 361, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget7);
        label_13->setObjectName("label_13");

        horizontalLayout_7->addWidget(label_13);

        bookBookComboBox = new QComboBox(layoutWidget7);
        bookBookComboBox->setObjectName("bookBookComboBox");

        horizontalLayout_7->addWidget(bookBookComboBox);

        layoutWidget8 = new QWidget(Book);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(170, 520, 169, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        prevBookButton = new QPushButton(layoutWidget8);
        prevBookButton->setObjectName("prevBookButton");

        horizontalLayout_8->addWidget(prevBookButton);

        nextBookButton = new QPushButton(layoutWidget8);
        nextBookButton->setObjectName("nextBookButton");

        horizontalLayout_8->addWidget(nextBookButton);

        tabWidget->addTab(Book, QString());
        About = new QWidget();
        About->setObjectName("About");
        textBrowser = new QTextBrowser(About);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 80, 491, 531));
        textBrowser_4 = new QTextBrowser(About);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(140, 20, 256, 51));
        tabWidget->addTab(About, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 540, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Simple Bible App", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700;\">Welcome to a Simple Bible App</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">We hope you find spiritual enrichment through the salvation of the Lord Jesus Christ. Peace and blessings to you and your family. He is hope and joy when there does not appear to be any.    </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> <img src=\":/images/images/Cross.png\" /></p>\n"
"<p style=\" "
                        "margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">For God so loved the world that he gave his one and only Son, that whoever believes in him shall not perish but have eternal life.</span></p>\n"
"<p align=\"right\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic;\">John 3:16 NIV</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Welcome), QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Book:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Chapter:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Verse:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Search by Verse", nullptr));
        searchVerseButton->setText(QCoreApplication::translate("MainWindow", "Search Verse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Verse), QCoreApplication::translate("MainWindow", "Verse", nullptr));
        prevWordButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        nextWordButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter Word:", nullptr));
        wordLineEdit->setText(QString());
        searchWordButton->setText(QCoreApplication::translate("MainWindow", "Search Word", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Word), QCoreApplication::translate("MainWindow", "Word", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Enter Phrase:", nullptr));
        phraseLineEdit->setText(QString());
        searchPhraseButton->setText(QCoreApplication::translate("MainWindow", "Search Phrase", nullptr));
        prevPhraseButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        nextPhraseButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Phrase), QCoreApplication::translate("MainWindow", "Phrase", nullptr));
        prevChapterButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        nextChapterButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Select Book:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Select Chapter:", nullptr));
        searchChapterButton->setText(QCoreApplication::translate("MainWindow", "Search Chapter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Chapter), QCoreApplication::translate("MainWindow", "Chapter", nullptr));
        searchBookButton->setText(QCoreApplication::translate("MainWindow", "Search Book", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Enter Book:", nullptr));
        prevBookButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        nextBookButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Book), QCoreApplication::translate("MainWindow", "Book", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">This program is written and distributed for free. Our family at Neverklear Technologies wishes peace and blessings.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">View our other applications:</span></p>\n"
"<p align"
                        "=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://neverklear.tech\"><span style=\" font-size:12pt; text-decoration: underline; color:#007af4;\">Neverklear Technologies</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Please feel free to reach out to us for custom christian business applications.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">with love,</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The Coppolettas</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"mailto:postmaster@neverklear.tech\"><span style=\" font-size:12pt; text-decoration: underline; color:#007af4;\">Postmaster@neverklear.tech</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/images/neverklear.jpg\" /></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700;\">About</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(About), QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
