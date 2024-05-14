using namespace std;
class Rectangle
{
	public:
		Rectangle();
		~Rectangle();
		float getWidth();
		float getHeight();
		void setDimension(float H, float W);
	protected:
		float width;
		float height; 	
};
