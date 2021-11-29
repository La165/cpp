#include<iostream>
using namespace std;
class A
{
	protected:
		A()
		{
			cout<<" a constructor"<<endl;
		}
		~A()
		{
			cout<<" a destructor"<<endl;
		}
};
class B: public A
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
class C: public A
{
	public:
		C()
		{
			cout<<" c constructor"<<endl;
		}
	   ~C()
		{
			cout<<"c destructor"<<endl;
		}
};
class D : public B ,public C
{
	public:
		D()
		{
		 cout<< " d constructor"<<endl;
		}
		~D()
		{
			cout<<" d destructor"<<endl;
		}
};
int main()
{
	
	
	 D d;
	 return 0;
}
