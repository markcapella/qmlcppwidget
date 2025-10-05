
cmake_minimum_required(VERSION 3.16)
project(qmlcppwidget)

find_package(ECM 6.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)

find_package(Qt6 REQUIRED COMPONENTS Core Qml Network)
find_package(KF6 REQUIRED)
find_package(Plasma 6.0 REQUIRED)

plasma_install_package(package inc.skyrmion.qmlcppwidget)

add_definitions(-DTRANSLATION_DOMAIN=\"libqmlcppwidget\")

set(qmlcppwidgetplugin_SRCS
	plugin/QmlCppHelper.cpp
	plugin/QmlCppPlugin.cpp
)

add_library(QmlCppPlugin SHARED ${qmlcppwidgetplugin_SRCS})
target_link_libraries(QmlCppPlugin Qt6::Core Qt6::Qml Qt6::Network)

install(FILES plugin/qmldir DESTINATION ${KDE_INSTALL_QMLDIR}/inc/skyrmion/qmlcppwidget)
install(TARGETS QmlCppPlugin DESTINATION ${KDE_INSTALL_QMLDIR}/inc/skyrmion/qmlcppwidget)

