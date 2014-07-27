#include <iostream>

using namespace std ;

class square
{
	friend class rectangle ;
	int side ;
	public:
	square(int a) {side = a; }
	int area() {return side*side ; } ;

};

class rectangle
{

	int length ;
	int width ;
	public:
	rectangle(int a,int b) {length = a; width = b ;}
	rectangle () {}
	void convert (square a) ;
	int area() { return length*width ; } ;	
};

void rectangle::convert(square a)
{

	length = a.side; 
	width = a.side ;
}


int main()
{
	square a(5) ;
	rectangle rect;
	rect.convert(a);
	cout << "Area:"<< rect.area() << endl;	

	return 0 ;
}



