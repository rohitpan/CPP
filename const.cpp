#include<iostream>

using namespace std ;

class con
{
public:
	static int c ;
	
	con() {c++ ;};
	~con() {c-- ;};
};

int con::c = 0 ;

int main()
{
	con a ;
	con b[2] ;
	con *p = new con ;
	cout << a.c << endl ;
	delete p ;
	cout << a.c << endl ;
	return 0 ;
}

