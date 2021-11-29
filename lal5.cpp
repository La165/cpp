#include<iostream>
using namespace std;
int main()
{
	int a,b ,temp;
	cout<<" enter the values of a,b:";
	cin>>a>>b;
	temp=a;a=b;b=temp;
	cout<<" swap numbers is "<<a<<" "<<b;
	return 0;
}

