#ifndef PYRAMID_H
#define PYRAMID_H

#include <QObject>
#include <QStack>

class Pyramid : public QObject
{
    Q_OBJECT
public:
    explicit Pyramid(QPixmap, QObject *parent = nullptr);

private:
    QStack<QPixmap> stackOfImages;

signals:

public slots:
};

#endif // PYRAMID_H
