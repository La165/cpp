#include<iostream>
using namespace std;
int a=100;
int main()
{
	int a=50;
	cout<<"local variable= "<<a<<endl;
	cout<<"global variable= "<<::a;
	return 0;
}
