#include <iostream>

using namespace std ;

int main ()

{
	int x = 6;
	
	switch (x)
	{
		case 1 :
			cout << "X is 1 \n";
			break; 
		case 2 :
		case 3 :
			cout << "X is either 2 or 3" << endl;
			break;
		default :
			cout << "X is not 1, 2, 3 " << endl;
	}
	return 0 ;
}
