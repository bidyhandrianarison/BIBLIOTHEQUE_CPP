#include<iostream>
#include"Objects/header.hpp"
using namespace std;
int main()
{
	Point O=Point(2,3);
	Circle C;
	C.setCenter(O);
	cout<<"Création d'un cercle C de centre O de cordonnee x="<<O.getX()<<" et de y= "<<O.getY()<<endl;
	return 0;
}
