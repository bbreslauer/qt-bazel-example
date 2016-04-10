#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qt/QtCore/QObject>
#include <qt/QtWidgets/QMainWindow>

#include "hello_world/ui_mainwindow.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);

private:
  Ui::MainWindow ui;
};

#endif // MAINWINDOW_H
