#include<iostream>

using namespace std ;

class vector
{
	public:
	int x, y ;
	vector(int,int);
	vector() {};
	vector operator + (vector) ;
};

vector::vector(int a, int b)
{
	x = a; y = b; 
}

vector vector::operator + ( vector param)
{
	vector temp ;
	temp.x = x + param.x ;
	temp.y = y + param.y ;
	return temp ;
}



int main()
{
	vector a(3,5) ;
	vector b(4,4) ;
	vector c(1,1) ;
	c = a + b ;
	
	cout << c.x <<"  "<<c.y << endl;		
}

