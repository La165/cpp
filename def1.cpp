#include<iostream>
using namespace std;
void simple(int,int,int);
void simple(int p=5,int t=10,int r=15)
{
	float si;
	si=(p*t*r)/100;
	cout<<"simpleinterest is"<<si<<endl;
}
int main()
{
	int p,t,r;
	cout<<"enter the p,t,r values:";
	cin>>p>>t>>r;
	simple(p,t,r);
	simple(p,t);
	simple();
	return 0;
}
