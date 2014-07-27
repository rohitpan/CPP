#include<iostream>

using namespace std ;

int add(int a, int b) ;
float add(float a, float b) ;
int main()
{
	int a = 2 , b = 3 ;
	float c = 2.1, d = 3.2 ;
	cout << add(a,b) << endl ;
	cout << add(c,d) << endl ;
}

int add( int a, int b)
{
	cout << "INT" << endl ;	
	return a + b ;
}
float add( float a, float b)
{
	cout << "FLOAT" << endl ;	
	return a + b ;
}
