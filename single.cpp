#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
			void get()
			{
				cout<<"enter x:";
				cin>>x;
			}
};
class B:public A
{
	public:
		void cube()
		{
			cout<<"cube of x:"<<x*x*x<<endl;
		}
};
int main()
{
	B b;
	b.get();
	b.cube();
	return 0;
}
