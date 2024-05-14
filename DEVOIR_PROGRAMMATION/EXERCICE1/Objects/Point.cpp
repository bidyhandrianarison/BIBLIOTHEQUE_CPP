#include"Point.hpp"
Point::Point()
{
}

Point::Point(float a, float b)
{
	X=a;
	Y=b;
}
Point::~Point()
{
}
float Point::getX()
{
	return X;
}
float Point::getY()
{
	return Y;
}
void Point::setX(float xv)
{
	X=xv;
}
void Point::setY(float yv)
{
	Y=yv;
}
