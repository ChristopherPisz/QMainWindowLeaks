cmake_minimum_required(VERSION 3.0)
project(qtproblems)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 5.14 REQUIRED COMPONENTS Core Widgets)

set(MOC_HEADERS
    mainwindow.hpp
    )

set(UI_FORMS
    mainwindow.ui
    )


add_executable(qtproblems
        ${MOC_HEADERS}
        ${UI_FORMS}
        mainwindow.cpp
        main.cpp
        )

target_link_libraries(qtproblems PRIVATE
        Qt5::Core
        Qt5::Widgets
        )