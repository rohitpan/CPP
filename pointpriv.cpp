#include<iostream>

using namespace std ;

class point {

private:
	double x ;
	double y ;

public:
	point(double ix, double iy){ x = ix ; y = iy ;}

	double getX() {return x ;}
	double getY() {return y ;}

};

int main()
{
	point a (1.0,2.0);
	
	cout << a.getX() << endl ;
	cout << a.getY() << endl ;

}

