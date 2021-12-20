#include<iostream>
using namespace std;
template<typename T>
void swapping(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=100, b=4785;
	float x=23.435,y=324.676;
	cout<<" before swapping of a& b:"<<a<<"\t"<<b<<endl;
	swapping(a,b);
	cout<<"after swapping of a&b: "<<a<<"\t"<<b<<endl;
	swapping(a,b);
	cout<<" before swapping of x& y:"<<x<<"\t"<<y<<endl;
	swapping(x,y);
	cout<<"after swapping of x&y: "<<x<<"\t"<<y<<endl;
	swapping(x,y);
	return 0;

	
}
