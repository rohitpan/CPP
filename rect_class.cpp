#include<iostream>

using namespace std ;

class rectangle
{

	int x, y ;
	public:
	rectangle (int, int) ;
	rectangle () ;
	void set_value(int, int) ;
	int area() { return x*y ;}
};

rectangle::rectangle()
{
	x = 0 ;
	y = 0 ;
}
rectangle::rectangle(int a, int b)
{
	x = a;
	y = b;
}
void rectangle::set_value(int a, int b)
{
	x = a;
	y = b;
}

int main()
{
	rectangle i1 ;
	rectangle *p ;
	
	p = &i1 ;	

	p->set_value(7,7) ;
	//i1.set_value(3,5);
	cout << "Area: " << p->area() << endl ;

}
