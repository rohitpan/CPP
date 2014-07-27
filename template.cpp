#include<iostream>

using namespace std ;

template <class T>
class mypair
{
	T a, b ;
	public:
	mypair(T first,T second) {a = first ; b = second;}	
	T bigger() ;

};

template <class T>
T mypair<T>::bigger()
{
	T ret ;
	ret = (a>b) ? a : b ;
	return ret ;
}


int main()
{
	mypair <int> obj (10,15) ;
	cout << obj.bigger() << endl ;
 return 0 ;
}

