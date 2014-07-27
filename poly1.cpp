#include <iostream>

using namespace std ;

class polygon
{
	protected:
	 int length ;
	 int width ;
	public:
	polygon (int a, int b) { width = b; length = a ;}	
	virtual int area() =0 ;
	void printarea() { cout<< this->area() << endl ;}
};

class triangle : public polygon
{
	public:
		triangle(int a, int b) : polygon(a,b) {}
		int area() {return 0.5*length*width ; }		
};

class rectangle : public polygon
{
	public:
		rectangle(int a, int b) : polygon(a,b) {}
		int area() {return length*width ;}
};

int main()
{
	polygon *poly1 = new triangle(3,2) ;
	polygon *poly2 = new rectangle(4,4) ;
	poly1->printarea();
	poly2->printarea();

	return 0 ;
}
