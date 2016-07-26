#include "ledlabel.h"
#include <QLabel>
#include <QPainter>
const int Offset = 35;

LEDLabel::LEDLabel(QWidget *parent) : QLabel(parent)
{
}

LEDLabel::LEDLabel(int &LEDCount, QWidget *parent) : QLabel(parent)
{

    this->setFixedSize(32, 32);
//    this->setID(0);
    //-1 is a flag to clear the text ID
    this->setLEDColor(QColor(255,255,255), -1);
    this->move(20 + Offset*LEDCount, 70);
    this->show();
    this->setAttribute(Qt::WA_DeleteOnClose);
    LEDCount++;

}
LEDLabel::~LEDLabel()
{

}
//void LEDLabel::setID(int id)
//{
//    ID = id;
//    QPixmap *myPix = this->pixmap();
//    QPainter paint(this->pixmap());
//    paint.drawText(Qt::AlignCenter, QString("%1").arg(id));
//    setPixmap(this->pixmap());
//    show();

//}

void LEDLabel::setShade(bool shade)
{
    if (shade == true)
    {
        QPixmap pixmap = *this->pixmap();
        QPixmap tempPixmap = pixmap;
        QPainter painter;
        painter.begin(&tempPixmap);
        painter.fillRect(pixmap.rect(), QColor(127, 127, 127, 127));
        painter.end();
        this->setPixmap(tempPixmap);
    }
    else
    {
        this->setLEDColor(LEDColor, ID);
    }
    this->show();
}

void LEDLabel::setLEDColor(QColor color, int id)
{
    LEDColor = color;
    QPixmap *myPix = new QPixmap(QSize(32,32));
    myPix->fill(Qt::transparent);
    QPainter paint(myPix);
//   QColor Opp = LEDColor;
//   Opp.setHsl(Opp.hue() +180, Opp.saturation(), Opp.lightness(), Opp.alpha());

    paint.setPen(Qt::black);
    paint.setBrush(LEDColor);
    QRect r = QRect(0, 0, 31, 31);   // QRect r = rect();
    paint.drawEllipse(r);
    if (id >= 0)
    {
        ID = id;
        paint.drawText(r, Qt::AlignCenter, QString("%1").arg(id));
    }
    else
    {
        ID = id;
        paint.drawText(r, Qt::AlignCenter, QString(""));
    }
    setPixmap(*myPix);
    show();

}
//QColor LEDLabel::getIdealTextColor
//{

//}
