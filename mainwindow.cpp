#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->QF = new QFile();
    this->QTS = new QTextStream(QF);
    this->local_arquivo = new QString();
    this->filtro = new QString("Arquivos de texto (*.txt)");
    this->setCentralWidget(this->ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete QF;
    delete QTS;
    delete filtro;
    delete local_arquivo;
}

QString MainWindow::pegaLocalArquivo()
{
    return QFileDialog::getOpenFileName(this, "Abrir Arquivo", QDir::homePath(), *this->filtro);
}

QString MainWindow::pegaLocalNovoArquivo()
{
    return QFileDialog::getSaveFileName(this, "Novo Arquivo", QDir::homePath(), *this->filtro);
}

void MainWindow::fecharArquivo()
{
    this->QF->close();
}

void MainWindow::verificarSalvamento()
{
    if ((!this->local_arquivo->isEmpty()) and (!this->comparaArquivo())) {

        QMessageBox::StandardButton Qbtt = QMessageBox::question(this, "ARQUIVO NÃO SALVO", "Deseja salvar o arquivo antes de fechá-lo?");

        if (Qbtt == QMessageBox::StandardButton::Yes) {

            if (!this->salvar()) QMessageBox::information(this, "ARQUIVO", "Arquivo pode estar comprometido!");

        }

    }
}

bool MainWindow::salvar()
{
    if (this->local_arquivo->isEmpty()) return true;

    if (!this->QF->open(QFile::WriteOnly|QFile::Text)) {

        QMessageBox::critical(this, "ERRO", "Não foi possível abrir o arquivo!");
        return false;

    }

    *this->QTS << this->ui->textEdit->toHtml();
    this->QTS->flush();

    this->fecharArquivo();
    return true;
}

bool MainWindow::lerArquivo()
{
    if (!this->QF->open(QFile::ReadOnly|QFile::Text)) {

        QMessageBox::critical(this, "ERRO", "Não foi possível abrir o arquivo!");
        return false;

    }

    this->ui->textEdit->insertHtml(QTS->readAll());

    this->fecharArquivo();
    return true;
}

bool MainWindow::comparaArquivo() {

    if (!this->QF->open(QFile::ReadOnly|QFile::Text)) {

        QMessageBox::critical(this, "ERRO", "Não foi possível abrir o arquivo!");
        return false;

    }

    if (this->QTS->readAll().compare(this->ui->textEdit->toHtml()) != 0) {

        this->fecharArquivo();
        return false;

    } else {

        this->fecharArquivo();
        return true;

    }

}

void MainWindow::on_actionNovo_triggered()
{
    this->verificarSalvamento();

    QString* novoLocal = new QString();

    try {

        novoLocal->append(this->pegaLocalNovoArquivo());

    } catch (...) {

        delete novoLocal;
        return;

    }

    if(novoLocal->isEmpty()) {

        delete novoLocal;
        return;

    }

    this->local_arquivo->clear();
    this->ui->textEdit->clear();
    this->local_arquivo->append(*novoLocal);

    this->QF->setFileName(*local_arquivo);

    if (this->salvar()) {

        QMessageBox::information(this, "Sucesso!", "Novo arquivo aberto com sucesso!");

    }

    this->ui->textEdit->setFocus();

    delete novoLocal;
}


void MainWindow::on_actionSalvar_triggered()
{
    this->salvar();
}

void MainWindow::on_actionAbrir_triggered()
{
    this->verificarSalvamento();

    QString* novoLocal = new QString();

    try {

        novoLocal->append(this->pegaLocalArquivo());

    } catch (...) {

        delete novoLocal;
        return;

    }

    if(novoLocal->isEmpty()) {

        delete novoLocal;
        return;

    }

    this->local_arquivo->clear();
    this->local_arquivo->append(*novoLocal);

    this->ui->textEdit->clear();

    this->QF->setFileName(*local_arquivo);

    if (this->lerArquivo()) {

        QMessageBox::information(this, "Sucesso!", "Arquivo aberto com sucesso!");

    }

    this->ui->textEdit->setFocus();

    delete novoLocal;
}


void MainWindow::on_actionFechar_triggered()
{
    this->verificarSalvamento();
    this->close();
}


void MainWindow::on_actionCopiar_triggered()
{
    this->ui->textEdit->selectAll();
    this->ui->textEdit->copy();
}


void MainWindow::on_actionRecortar_triggered()
{
    this->ui->textEdit->selectAll();
    this->ui->textEdit->cut();
}


void MainWindow::on_actionColar_triggered()
{
    this->ui->textEdit->paste();
}


void MainWindow::on_actionRefazer_triggered()
{
    this->ui->textEdit->redo();
}


void MainWindow::on_actionDesfazer_triggered()
{
    this->ui->textEdit->undo();
}


void MainWindow::on_actionSobre_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}


void MainWindow::on_actionSobre_triggered()
{
    QMessageBox::about(this, "Sobre", "Programa teste feito com o intuito de aprender mais sobre o QT");
}


void MainWindow::on_actionSalvar_como_triggered()
{
    this->verificarSalvamento();

    QString* novoLocal = new QString();

    try {

        novoLocal->append(this->pegaLocalNovoArquivo());

    } catch (...) {

        delete novoLocal;
        return;

    }

    if(novoLocal->isEmpty()) {

        delete novoLocal;
        return;

    }

    this->local_arquivo->clear();
    this->local_arquivo->append(*novoLocal);

    this->QF->setFileName(*local_arquivo);

    if (this->salvar()) {

        QMessageBox::information(this, "Sucesso!", "Novo arquivo aberto com sucesso!");

    }

    this->ui->textEdit->setFocus();

    delete novoLocal;
}


void MainWindow::on_actionFonte_triggered()
{
    bool* fonte_ok = new bool(false);
    QFont* QFt = new QFont(QFontDialog::getFont(fonte_ok, this));

    if (*fonte_ok) this->ui->textEdit->setFont(*QFt);

    delete QFt;
    delete fonte_ok;
}


void MainWindow::on_actionCor_do_Texto_triggered()
{
    QColor* cor = new QColor(QColorDialog::getColor(Qt::black, this, "Escolhar cor"));

    if (cor->isValid()) this->ui->textEdit->setTextColor(*cor);

    delete cor;
}


void MainWindow::on_actionImprimir_triggered()
{
    QPrinter* printer = new QPrinter();
    printer->setPrinterName("IMPRESSORA");
    QPrintDialog* printD = new QPrintDialog(printer, this);

    if (printD->exec() != QDialog::Rejected) this->ui->textEdit->print(printer);

    delete printer;
    delete printD;
}

