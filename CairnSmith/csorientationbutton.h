#ifndef CSORIENTATIONBUTTON_H
#define CSORIENTATIONBUTTON_H

#include <QPushButton>
#include <QStyleOptionButton>
class CSOrientationButton : public QPushButton
{
	Q_OBJECT

public:
    CSOrientationButton(QWidget* parent = 0);
    CSOrientationButton(const QString& text, QWidget* parent = 0);
    CSOrientationButton(const QIcon& icon, const QString& text, QWidget* parent = 0);
    ~CSOrientationButton();
    
    Qt::Orientation orientation() const;
    void setOrientation(Qt::Orientation orientation);
    
    bool mirrored() const;
    void setMirrored(bool mirrored);
    
    QSize sizeHint() const;
    
protected:
    void paintEvent(QPaintEvent* event);
    
private:
    QStyleOptionButton getStyleOption() const;
    void init();
    
    Qt::Orientation orientation_;
    bool mirrored_;
	
};

#endif // CSORIENTATIONBUTTON_H
