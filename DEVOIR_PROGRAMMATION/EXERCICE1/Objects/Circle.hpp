using namespace std;
#include"Point.hpp"
class Circle
{
	public:
		Circle();
		~Circle();
		void setRayon(float r);
		float getRayon();
		Point getCenter();
		void setCenter(Point C);
	protected:
		float rayon;
		Point center;
};
