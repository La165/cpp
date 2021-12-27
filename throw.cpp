#include<iostream>
using namespace std;
 int main()
 {
 	int studentage;
 	cout<<" enter age:";
 	cin>>studentage;
 	try
 	{
 		if(studentage < 0)
 		throw"positive number required";
 		else 
 		cout<<" age="<<studentage;
	 }
	 catch( const char * e)
	 {
	 	cout<<e;
	 }
 }
