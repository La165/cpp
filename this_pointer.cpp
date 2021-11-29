#include<iostream>
using namespace std;
class rectangle
{
	private:
		float l,b;
		public:
			rectangle(float l,float b)
			{
				this->l=l;
				this->b=b;
			}
			void area()
			{
				cout<<"Area of rectangle"<<l*b<<endl;
			}
};
int main()
{
	rectangle r(3.4,5.6);
	r.area();
	return 0;
}
