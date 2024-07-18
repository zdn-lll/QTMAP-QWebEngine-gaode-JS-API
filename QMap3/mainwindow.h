#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QWebChannel>
#include "webclass.h"

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

    void setPositionList(const QJsonObject &searchResult);

private slots:
    void on_setCityBt_clicked();

    void on_startNavBt_clicked();

    void on_setStartPostionBt_clicked();

    void on_setEndPostionBt_clicked();

private:
    Ui::MainWindow *ui;
    WebClass *webObj;
    QWebEngineView *webView;
    QWebChannel *webChannel;
    QPair<float, float> startPoint{-1.f, -1.f};
    QPair<float, float> endPoint{-1.f, -1.f};
};
#endif // MAINWINDOW_H
