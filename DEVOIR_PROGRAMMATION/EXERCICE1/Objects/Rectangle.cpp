#include<iostream>
#include"Rectangle.hpp"
using namespace std;
Rectangle::Rectangle()
{
}
Rectangle::~Rectangle()
{
}
float Rectangle::getWidth()
{
	return width;
}
float Rectangle::getHeight()
{
	return height;
}
void Rectangle::setDimension(float H,float W)
{
	height=H;
	width=W;
}
