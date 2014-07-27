#include <iostream>
using namespace std ;

class polygon 
{
	protected :
   	int length ;
	int height ;	
};

class triangle: public polygon
{
	public:
	triangle(int a,int b) {length = a; height = b ;}

	float area(){ return 0.5*length*height ; }
};

class rectangle: public polygon
{
	public:
	rectangle(int a,int b) {length = a; height = b ;}
	float area(){ return length*height ; }
};

int main()
{
	triangle tri(4,5) ;
	rectangle rect(4,5) ;
	cout << "Rectangle area:"<< rect.area()<<endl ;
	cout << "Triangle area:"<< tri.area()<<endl ;
  return 0 ;
}
