#include "mainwindow.h"

// writes element in listofaffairs.xml \/
void _addElement(QString _text, QTime _time) {
    QFile _listOfAffairs("/home/almaz/build-motivation-Desktop_Qt_5_14_1_GCC_64bit-Debug/meme.txt");
    if(!_listOfAffairs.open(QIODevice::Append)){
        qDebug("error: file doesn't opened");
    }
    else
    {
        QTextStream out(&_listOfAffairs);
        out << _text << " " << _time.toString() << "\n";
    }
    /* Description to file arch:
    On every line _addElement writes _text " " _time
    */
}
