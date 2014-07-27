#include<iostream>
#include<set>

using namespace std ;

int main ()

{

set <int> myset ;

set<int>::iterator it ;

for (int i = 0 ; i < 10 ; i++) myset.insert(i*10);

for(it = myset.begin() ; it != myset.end() ; it++)
	cout << ' ' << *it ;

cout << endl ;

it = myset.find(20);
myset.erase(it);

for(it = myset.begin() ; it != myset.end() ; it++)
	cout << ' ' << *it ;
cout << endl ;
return 0 ;
}
