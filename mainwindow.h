#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "persons.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Student person;

private slots:
    void on_groupSizeEditButton_clicked();

    void on_addStudent_clicked();

    void on_comboBox_activated(int index);

    void on_editStudent_clicked();

    void on_comboBox_2_activated(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
