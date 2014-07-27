#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>         // std::mutex
#include <string>
using namespace std;

mutex mu;
void shared_print( string msg, int id)
{
	lock_guard<mutex> lock(mu) ;
//	mu.lock();
	cout << msg << id << endl;
//	mu.unlock() ;
}
void foo() 
{
  // do stuff...
	for(int i = 0 ; i < 100 ; i++)
		shared_print(string("Inside foo: "),i);
}
void bar()
{
  // do stuff...
	for(int j = 0 ; j < 100 ; j++)
		shared_print(string("Inside bar: "),j);
}
int main() 
{
  cout << "main, foo and bar now execute concurrently...\n";
  thread first (foo);     // spawn new thread that calls foo()
  thread second (bar);  // spawn new thread that calls bar(0)
  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes
  cout << "foo and bar completed.\n";
  return 0;
}
