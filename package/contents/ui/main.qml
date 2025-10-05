
import QtQuick
import QtQuick.Controls as QQC2
import QtQuick.Layouts
import QtQuick.Templates as Templates

import org.kde.kirigami as Kirigami
import org.kde.plasma.core as PlasmaCore
import org.kde.plasma.components as PlasmaComponents
import org.kde.plasma.extras as PlasmaExtras
import org.kde.plasma.plasmoid

import inc.skyrmion.qmlcppwidget as QmlCppWidget


PlasmoidItem {
    width: 600
    height: 150

    readonly property var mCFG: plasmoid.configuration;

    QmlCppWidget.QmlCppHelper {
        id: pluginHelper;
        helloMessage: mCFG.helloText;
    }

    Text {
        anchors.centerIn: parent;
        font.pixelSize: 40;
        text: pluginHelper.getMessageAndLog();
    }
}
