#include<iostream>
using namespace std;
class sample
{
	private:
		static int x;
		int y;
		public:
		void get()
		{ y=98;
			cout<<"x="<<x<<endl;
			cout<<"address of x= "<<&x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"address of y= "<<&y<<endl;
		}
};
int sample::x=45;
int main()
{
	sample s1,s2,s3;
	s1.get();
	s2.get();
	s3.get();
	return 0;
}

