#include<iostream>

using namespace std ;

namespace first
{
	int x = 5 ;
}

namespace second
{
	float x = 3.1416 ;
}

int main ()
{
	{
		using namespace first ;
		cout << x << endl; 
	}
	{
		using namespace second ;
		cout << x << endl; 
	}

}
