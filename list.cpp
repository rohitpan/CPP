#include<iostream>
#include<list>
using namespace std ;

int main()
{
	list<int> L ;

	L.push_back(0);
	L.push_back(1);
	L.push_front(2);	
	list<int>::iterator it ;

	it = L.begin();
	advance(it,2);
	it = L.erase(it);
	
	for(it = L.begin(); it != L.end(); it++)
	{
		cout << *it << endl;
	}

}
