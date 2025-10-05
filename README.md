
# qmlcppwidget
!['install'](https://github.com/markcapella/qmlcppwidget/blob/main/qmlcppwidget.png)

## Description.
Plasma 6 Hello World desktop widget with Qml, & a Cpp Plugin.
&nbsp;

## Installation.

### Clone qmlcppwidget and change into working source folder.
    git clone https://github.com/markcapella/qmlcppwidget
    cd qmlcppwidget

### Build & install widget into Plasmas Widget Explorer.
    mkdir build && cd build
    cmake ..

    make
    sudo make install

### Then, mouse to the Add or Manage Widgets panel, & drop qmlcppwidget onto your desktop.
!['installExplorer']()https://github.com/markcapella/qmlcppwidget/blob/main/qmlcppwidgetExplorer.png

### Uninstall the widget from Plasmas Widget Explorer.
    sudo make uninstall
    cd .. && rm -rf build

&nbsp;
## Acknowledgements.

### markjamescapella@proton.me Rocks !

#### Yeah I do.
&nbsp;

