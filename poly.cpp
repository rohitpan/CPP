#include <iostream>
using namespace std ;

class polygon 
{
	protected :
   	int length ;
	int height ;	
	public:
	void set_value( int a, int b)
	{ length = a; height = b; }
	 float area()
	{ return 0 ;}
};

class triangle: public polygon
{
	public:
	triangle() {}
	float area(){ return 0.5*length*height ; }
};

class rectangle: public polygon
{
	public:
	rectangle() {}
	float area(){ return length*height ; }
};

int main()
{

	triangle tri ;
	rectangle rect ;
	polygon *poly1, *poly2 ;
	poly1 = &tri ;
	poly2 = &rect ;
	poly1->set_value(2,2) ;
	poly2->set_value(3,3) ;
	cout << "Rectangle area:"<< poly2->area()<<endl ;
	cout << "Triangle area:"<< poly1->area()<<endl ;
  return 0 ;
}
