#include"Circle.hpp"
using namespace std;
Circle::Circle()
{
}
Circle::~Circle()
{
}
void Circle::setRayon(float r)
{
	rayon=r;
}
float Circle::getRayon()
{
	return rayon;
}
Point Circle::getCenter()
{
	return center;
}
void Circle::setCenter(Point C)
{
	center.setX(C.getX());
	center.setY(C.getY());
}
