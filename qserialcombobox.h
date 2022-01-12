#ifndef QSERIALCOMBOBOX_H
#define QSERIALCOMBOBOX_H

#include <QObject>
#include <QComboBox>

class QSerialComboBox : public QComboBox
{
    Q_OBJECT

public:
    QSerialComboBox(QWidget *parent = nullptr);

protected:
    void showPopup();
};

#endif // QSERIALCOMBOBOX_H
