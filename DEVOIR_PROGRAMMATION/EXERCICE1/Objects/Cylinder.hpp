class Cylinder
{
	public:
		Cylinder();
		~Cylinder();
		float getBase();
		float getHeight();
		void setBase(float b);
		void setHeight(float h);

	private:
		float base;
		float height;
};
