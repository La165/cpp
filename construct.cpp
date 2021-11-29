#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			cout<<"enter the length and breadth:";
			cin>>length>>breadth;
		}
		void area()
		{
			cout<<"area of rectangle is "<<length*breadth;
		}
};
int main()
{
	Rectangle r;
	r.area();
	return 0;
}
