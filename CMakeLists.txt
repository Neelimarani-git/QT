cmake_minimum_required(VERSION 3.14)

project(QT_concurrent_Run LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED Concurrent COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED Concurrent COMPONENTS Core)

add_executable(QT_concurrent_Run
  main.cpp
)
target_link_libraries(QT_concurrent_Run Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Concurrent)

include(GNUInstallDirs)
install(TARGETS QT_concurrent_Run
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
