#include<iostream>
#include<stack>

using namespace std ;

int main()

{

stack <int> mystack ;

mystack.push(0);
mystack.push(1);
mystack.push(2);
mystack.push(3);

while(!mystack.empty())
{
	cout << mystack.top()<< endl;
	mystack.pop() ;
}
return 0 ;
}
