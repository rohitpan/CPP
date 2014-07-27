#include<iostream>

using namespace std ;

class point
{
public:
double x, y ;

};

void offset ( point &p, double x, double y)
{
	p.x += x ;
	p.y += y ;
}

int main()
{
	point p ;
	p.x = 1 ;
	p.y = 2 ;
	cout << "p.x:" << p.x <<" p.y:" << p.y << endl ; 	
	offset(p,2,2);
	cout << "p.x:" << p.x <<" p.y:" << p.y << endl ; 	

}
