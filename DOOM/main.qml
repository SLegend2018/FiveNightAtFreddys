import QtQuick 2.15
import QtQml 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Universal 2.15
import QtQuick.Layouts 1.15
import QtQuick.Dialogs 1.2

Window {
    width: 256
    minimumWidth: 256
    maximumWidth: 256
    height: 100
    minimumHeight: 100
    maximumHeight: 100
    visible: true
    color: "#1e1e1e"
    title: qsTr("Doom Launcher")

    Universal.theme: Universal.Dark
    Universal.accent: Universal.Cobalt

    Component.onCompleted: gameInitialize.setArgsByIndex(comboBox_API.currentIndex)

    Connections {
        target: gameInitialize
        onApplicationCrashes: messageDialog.open()
    }

    MessageDialog {
        id: messageDialog
        icon: StandardIcon.Critical
        title: "Error code: "+ gameInitialize.errorCode
        text: gameInitialize.messageError
        onAccepted: {
            Qt.quit()
        }
    }

    ColumnLayout {
        id: columnLayout
        anchors.fill: parent
        anchors.rightMargin: 5
        anchors.leftMargin: 5
        anchors.bottomMargin: 5
        anchors.topMargin: 5

        RowLayout {
            id: rowLayout
            width: 100
            height: 100

            Text {
                id: text1
                color: "#ffffff"
                text: qsTr("GRAPHICS API:")
                font.pixelSize: 16
                Layout.fillWidth: true
                styleColor: "#fbfbfb"
                font.bold: false
                font.family: "Burbank Big Condensed"
            }

            ComboBox {
                id: comboBox_API
                height: 40
                property int property0: 0
                font.family: "Burbank Big Condensed"
                Layout.maximumHeight: 32
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                font.pointSize: 12
                model: ["DirectX11", "DirectX12", "Vulkan"]
                onCurrentIndexChanged: {
                    gameInitialize.setArgsByIndex(currentIndex)
                }
            }
        }

        Button {
            id: button_Lauch
            text: qsTr("Launch")
            font.pointSize: 16
            font.family: "Burbank Big Condensed"
            Layout.maximumHeight: 32
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            onClicked: {
                gameInitialize.launchGame()
            }
        }
    }


}

/*##^##
Designer {
    D{i:0;formeditorZoom:3}
}
##^##*/
