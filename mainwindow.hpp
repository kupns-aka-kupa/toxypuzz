#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QFile>
#include <QList>
#include <QDebug>
#include <QAbstractItemView>
#include <QFontDatabase>
#include <QStandardItemModel>
#include "tableviewitemdelegate.hpp"
#include "tablemodel.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QStandardItemModel *model;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_HPP
