#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float breadth;
    public:
    	void get()
        {
	    cout<<"enter the length and breadth:"<<endl;
	    cin>>length>>breadth;
        }
        void area()
        {
        	cout<<" area of the rectangle is "<<length*breadth;
		}
};
int main()
{
Rectangle R;
R.get();
R.area();
return 0;
}
