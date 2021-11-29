#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<" a constructor"<<endl;
		}
		~A()
		{
			cout<<" a destructor"<<endl;
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<" b constructor"<<endl;
		}
		~B()
		{
			cout<<" b destructor"<<endl;
		}
};
int main()
{ B b;
return 0; 
}
