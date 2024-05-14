#ifndef POINT_HPP
#define POINT_HPP
using namespace std;
class Point
{
	public:
		Point();
		Point(float a, float b);
		~Point();
		float getX();
		float getY();
		void setX(float xv);
		void setY(float yv);
	private:
		float X;
		float Y;
};
#endif
