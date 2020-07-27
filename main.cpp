#include "mainwindow.hpp"
#include <iostream>
#include <QtWidgets/QApplication>


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();

    int returnCode = 1;
    try
    {
        returnCode = QApplication::exec();
    }
    catch(std::exception& e)
    {
        std::cerr << "An unhandled std::exception has escaped the main event loop: {}", e.what();
    }
    catch(...)
    {
        std::cerr << "An unhandled exception, of unknown type, has escaped the main event loop";
    }

    return returnCode;
}
