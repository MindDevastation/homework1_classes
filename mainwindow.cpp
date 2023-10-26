#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "persons.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_groupSizeEditButton_clicked()
{
    int newGroupSize = ui->groupSizeEdit->text().toInt();
    this->person.setGroupSize(newGroupSize);
    this->person.resize();
    ui->groupSizeEdit->setEnabled(false);
    ui->groupSizeEditButton->setEnabled(false);
    ui->label->setText("------------------------------------------------------ " + QString::number(this->person.getIndex()) + " / " + QString::number(this->person.getGroupSize()) + " ------------------------------------------------------");
    ui->tabWidget->setEnabled(true);
}


void MainWindow::on_addStudent_clicked()
{
    int index = 0;

    this->person.setID(ui->idEdit->text().toInt(), this->person.getIndex());
        this->person.setSurname(this->person.getIndex(), ui->surnameEdit->text());
        this->person.setPassport(ui->passportEdit->text(), this->person.getIndex());
        this->person.setDate(ui->dateEdit->date(), this->person.getIndex());
        this->person.setUniversity(this->person.getIndex(), ui->universityEdit->text());
        this->person.setSpeciality(this->person.getIndex(),ui->specEdit->text());
        this->person.setGroup(this->person.getIndex(),ui->groupEdit->text());
        this->person.setInfo(ui->infoEdit->text(), this->person.getIndex());
        ui->comboBox->addItem("Student " + QString::number(this->person.getIndex() + 1));
        ui->comboBox_2->addItem("Student " + QString::number(this->person.getIndex() + 1));
        this->person.indexIncr();

        ui->idEdit->clear();
        ui->surnameEdit->clear();
        ui->passportEdit->clear();
        //ui->dateEdit->clear();
        ui->universityEdit->clear();
        ui->specEdit->clear();
        ui->groupEdit->clear();
        ui->infoEdit->clear();
        if(this->person.getIndex() == this->person.getGroupSize()){
            ui->addStudent->setEnabled(false);
        }

        ui->label->setText("------------------------------------------------------" + QString::number(this->person.getIndex()) + "/" + QString::number(this->person.getGroupSize()) + "------------------------------------------------------");


}

void MainWindow::on_comboBox_activated(int index)
{
        this->person.setIndex(index - 1);
        ui->IdLabel_3->setNum(this->person.getID(this->person.getIndex()));
        ui->surnameLabel_3->setText(this->person.getSurname(this->person.getIndex()));
        ui->pasportLabel_3->setText(this->person.getPassport(this->person.getIndex()));
        ui->dateLabel_3->setText(this->person.getDate(this->person.getIndex()).toString());
        ui->universityLabel_3->setText(this->person.getUniversity(this->person.getIndex()));
        ui->specLabel_3->setText(this->person.getSpeciality(this->person.getIndex()));
        ui->groupLabel_3->setText(this->person.getGroup(this->person.getIndex()));
        ui->infoLabel_3->setText(this->person.getInfo(this->person.getIndex()));
}


void MainWindow::on_editStudent_clicked()
{
        this->person.setIndex(ui->comboBox_2->currentIndex() - 1);
        this->person.setID(ui->idEdit_2->text().toInt(), this->person.getIndex());
        this->person.setSurname(this->person.getIndex(), ui->surnameEdit_2->text());
        this->person.setPassport(ui->passportEdit_2->text(), this->person.getIndex());
        this->person.setDate(ui->dateEdit_2->date(), this->person.getIndex());
        this->person.setUniversity(this->person.getIndex(), ui->universityEdit_2->text());
        this->person.setSpeciality(this->person.getIndex(),ui->specEdit_2->text());
        this->person.setGroup(this->person.getIndex(),ui->groupEdit_2->text());
        this->person.setInfo(ui->infoEdit_2->text(), this->person.getIndex());

        ui->idEdit_2->clear();
        ui->surnameEdit_2->clear();
        ui->passportEdit_2->clear();
        ui->universityEdit_2->clear();
        ui->specEdit_2->clear();
        ui->groupEdit_2->clear();
        ui->infoEdit_2->clear();
}



void MainWindow::on_comboBox_2_activated(int index)
{
    this->person.setIndex(index - 1);
    ui->idEdit_2->setText(QString::number(this->person.getID(this->person.getIndex())));
    ui->surnameEdit_2->setText(this->person.getSurname(this->person.getIndex()));
    ui->passportEdit_2->setText(this->person.getPassport(this->person.getIndex()));
    ui->dateEdit_2->dateChanged(this->person.getDate(this->person.getIndex()));
    ui->universityEdit_2->setText(this->person.getUniversity(this->person.getIndex()));
    ui->specEdit_2->setText(this->person.getSpeciality(this->person.getIndex()));
    ui->groupEdit_2->setText(this->person.getGroup(this->person.getIndex()));
    ui->infoEdit_2->setText(this->person.getInfo(this->person.getIndex()));

}

