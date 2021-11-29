#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
	Rectangle()
	{
		length=30;
		breadth=80;
	}
	Rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	Rectangle(int x)
	{
		length=x;
		breadth=x;
	}
	void area()
	{
		cout<<" area is"<<length*breadth<<endl;
	}
};
int main()
{
	Rectangle r1;
	Rectangle r2(68,98);
	Rectangle r3(56);
    r1.area();	
	r2.area();	
	r3.area(); 
	return 0;
}
