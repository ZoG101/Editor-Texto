#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QPrintDialog>
#include <QShortcut>
#include <QPrinter>
#include <QtDebug>
#include <QColor>
#include <QFile>
#include <QFont>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void saidaProcedimento();

private slots:
    void on_actionNovo_triggered();

    void on_actionSalvar_triggered();

    void on_actionAbrir_triggered();

    void on_actionFechar_triggered();

    void on_actionCopiar_triggered();

    void on_actionRecortar_triggered();

    void on_actionColar_triggered();

    void on_actionRefazer_triggered();

    void on_actionDesfazer_triggered();

    void on_actionSobre_Qt_triggered();

    void on_actionSobre_triggered();

    void on_actionSalvar_como_triggered();

    void on_actionFonte_triggered();

    void on_actionCor_do_Texto_triggered();

    void on_actionImprimir_triggered();

private:
    Ui::MainWindow *ui;
    QFile* QF;
    QTextStream* QTS;
    QString* local_arquivo;
    QString* filtro;

    QString pegaLocalNovoArquivo();
    QString pegaLocalArquivo();
    bool lerArquivo();
    bool salvar();
    bool comparaArquivo();
    void fecharArquivo();
    void verificarSalvamento();
};
#endif // MAINWINDOW_H
