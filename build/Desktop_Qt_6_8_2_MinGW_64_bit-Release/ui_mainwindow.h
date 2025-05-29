/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionFechar;
    QAction *actionCopiar;
    QAction *actionRecortar;
    QAction *actionColar;
    QAction *actionRefazer;
    QAction *actionDesfazer;
    QAction *actionSobre_Qt;
    QAction *actionSobre;
    QAction *actionFonte;
    QAction *actionCor_do_Texto;
    QAction *actionImprimir;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre;
    QMenu *menuEditar_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(500, 500));
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName("actionNovo");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        actionNovo->setIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName("actionSalvar");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        actionSalvar->setIcon(icon2);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName("actionSalvar_como");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        actionSalvar_como->setIcon(icon3);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName("actionFechar");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::WindowClose));
        actionFechar->setIcon(icon4);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName("actionCopiar");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        actionCopiar->setIcon(icon5);
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName("actionRecortar");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        actionRecortar->setIcon(icon6);
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName("actionColar");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        actionColar->setIcon(icon7);
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName("actionRefazer");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        actionRefazer->setIcon(icon8);
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName("actionDesfazer");
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::EditUndo));
        actionDesfazer->setIcon(icon9);
        actionSobre_Qt = new QAction(MainWindow);
        actionSobre_Qt->setObjectName("actionSobre_Qt");
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::DialogInformation));
        actionSobre_Qt->setIcon(icon10);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName("actionSobre");
        actionSobre->setIcon(icon10);
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName("actionFonte");
        actionCor_do_Texto = new QAction(MainWindow);
        actionCor_do_Texto->setObjectName("actionCor_do_Texto");
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName("actionImprimir");
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        actionImprimir->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 30, 771, 481));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName("menuEditar");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        menuEditar_2 = new QMenu(menubar);
        menuEditar_2->setObjectName("menuEditar_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuEditar_2->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionFechar);
        menuEditar->addAction(actionRefazer);
        menuEditar->addAction(actionDesfazer);
        menuEditar->addSeparator();
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionColar);
        menuSobre->addAction(actionSobre);
        menuSobre->addAction(actionSobre_Qt);
        menuEditar_2->addAction(actionFonte);
        menuEditar_2->addAction(actionCor_do_Texto);
        toolBar->addAction(actionNovo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionSalvar_como);
        toolBar->addSeparator();
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionRecortar);
        toolBar->addAction(actionColar);
        toolBar->addSeparator();
        toolBar->addAction(actionDesfazer);
        toolBar->addAction(actionRefazer);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSalvar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalvar_como->setText(QCoreApplication::translate("MainWindow", "Salvar como", nullptr));
        actionFechar->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionRecortar->setText(QCoreApplication::translate("MainWindow", "Recortar", nullptr));
        actionColar->setText(QCoreApplication::translate("MainWindow", "Colar", nullptr));
        actionRefazer->setText(QCoreApplication::translate("MainWindow", "Refazer", nullptr));
#if QT_CONFIG(shortcut)
        actionRefazer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDesfazer->setText(QCoreApplication::translate("MainWindow", "Desfazer", nullptr));
#if QT_CONFIG(shortcut)
        actionDesfazer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSobre_Qt->setText(QCoreApplication::translate("MainWindow", "Sobre Qt", nullptr));
        actionSobre->setText(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        actionFonte->setText(QCoreApplication::translate("MainWindow", "Fonte", nullptr));
        actionCor_do_Texto->setText(QCoreApplication::translate("MainWindow", "Cor do Texto", nullptr));
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        menuEditar_2->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
