#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
	Rectangle(int length,int breadth)
	{
		this->length=length;
		this->breadth=breadth;
	}
	void area()
	{
		cout<<"area is"<< length*breadth;
	}	
};
int main()
{
	Rectangle  r(10,50);
	r.area();
	return 0;
}

