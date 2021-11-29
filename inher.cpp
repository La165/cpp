#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
			A(int m)
			{
				x=m;
				cout<<"x value is"<<x<<endl;
			}
};
class B:public A
{
	protected:
		int y;
		public:
			B(int n):A(32)
			{
				y=n;
				cout<<" y value is"<<y<<endl;
			}
};
int main()
{
	B b(50);
	return 0;
}
