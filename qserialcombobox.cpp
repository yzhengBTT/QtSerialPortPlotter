#include "qserialcombobox.h"
#include <QSerialPortInfo>

QSerialComboBox::QSerialComboBox(QWidget *parent) : QComboBox(parent)
{

}

void QSerialComboBox::showPopup()
{
    int index = 0;
    QString currText = currentText();

    // 清除显示
    clear();

    // 扫描显示可用串口列表
    QList<QSerialPortInfo> serials = QSerialPortInfo::availablePorts();
    foreach (QSerialPortInfo info, serials) {
        addItem(info.portName());
    }

    // 定位显示项
    index = findText(currText);
    if(index < 0)
    {
        index = 0;
    }
    setCurrentIndex(index);

    // 调用父类显示列表
    QComboBox::showPopup();
}
