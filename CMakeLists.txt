cmake_minimum_required(VERSION 3.14)

project(QT_Concurrent LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5  COMPONENTS Core Concurrent REQUIRED)
find_package(Qt${QT_VERSION_MAJOR}  COMPONENTS Core Concurrent REQUIRED)

add_executable(QT_Concurrent
  main.cpp
)
target_link_libraries(QT_Concurrent Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Concurrent)

include(GNUInstallDirs)
install(TARGETS QT_Concurrent
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
