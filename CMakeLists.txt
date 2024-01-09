cmake_minimum_required(VERSION 3.14)

<<<<<<< HEAD
project(first LANGUAGES CXX)
=======
project(mycode2 LANGUAGES CXX)
>>>>>>> 7103f812a8df75608c3f579f17c24ad426ec6e7c

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

<<<<<<< HEAD
add_executable(first
  main.cpp
  firstcode.h firstcode.cpp
)
target_link_libraries(first Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS first
=======

target_link_libraries(mycode2 Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS mycode2
>>>>>>> 7103f812a8df75608c3f579f17c24ad426ec6e7c
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
