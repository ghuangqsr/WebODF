#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QMdiSubWindow>

namespace Ui {
    class MainWindow;
}

class OdfView;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void open();
    OdfView *createOdfView();

private:
    QMdiSubWindow *findMdiChild(const QString &fileName);
    void createActions();
    void createToolBars();
    QToolBar *fileToolBar;
    QAction *openAct;
protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
