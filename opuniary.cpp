#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y;
    public:
	sample()
	{
	   x=10;
	   y=20;
	}
	void show()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}	
	void operator -()	
	{
		x=-x;
		y=-y;
	}
};
int main()
{
sample s;
s.operator -();
s.show();
return 0;
}
