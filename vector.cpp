#include<iostream>
#include<vector>

using namespace std ;

int main ()

{

	vector <int> i(3,100) ;

	cout << " Vector size" << i.size() << endl; 
	cout << " Vector at 0" << i.at(0) << endl; 

	for(int x=0 ; x < 10 ; x++)
	{
		i.push_back(x);

	}

	vector<int>::iterator it ;
		
	for ( it = i.begin() ; it != i.end() ; it++)
	{
		cout << *it << endl ;
	}	

}
