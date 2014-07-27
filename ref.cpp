#include <iostream>

using namespace std ;

void square ( int & a, int & b)
{
	a = a*a ;
	b = b*b ;
}

int main ()

{
  int X = 2 ;
  int Y = 3 ;
	square( X, Y) ;
	cout << "X = "<< X << endl ;
	cout << "Y = "<< Y << endl ;
}
