#include <iostream>

using namespace std ;

int main ()
{

	try
	{

	throw 20 ;
	}
	catch (int e )
	{
		cout << " caught int expt#" << e << endl ;
	}

}
