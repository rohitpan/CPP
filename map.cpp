#include<iostream>
#include<map>
using namespace std ;
int main()
{

map <string,int> Employees ;
map <string,int>::iterator it ;
Employees["rohit"] = 1;
Employees["sh"] = 2;

cout << Employees.size() << endl ;

for(it = Employees.begin() ; it != Employees.end() ; it++)
{
	cout << it->first << " " << it->second << endl ;
}

}
