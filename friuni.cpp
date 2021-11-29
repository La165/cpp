#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y;
		public:
			sample()
			{
				x=12;
				y=34;
			}
			void show()
			{
				cout<<"x="<<x<<endl;
				cout<<"y="<<y<<endl;
			}
			friend void operator -(sample &m);
};
void operator -(sample &m)
{ 
	m.x=-m.x;
	m.y=-m.y;
}
int main()
{
	sample s;
    operator -(s);
	s.show();
	return 0;
}
