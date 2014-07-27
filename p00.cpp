#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main()
{

ifstream input("in.txt");


while ( true)
{
	string value ;
	input >> value;

	if ( input.eof() && input.fail() )
		break ;

	if( input.fail())
	{
		input.clear() ;
		int dummy ;
		input >> dummy ;
	}
	else
	{
		cout << value << ' ' ;
	}

}
	cout << endl ;


}

