#ifndef QTPROBLEMS_MAINWINDOW_HPP
#define QTPROBLEMS_MAINWINDOW_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE


class MainWindow final : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow* m_ui;  ///< Qt generated object that is the main window
};
#endif
