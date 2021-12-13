#include<iostream>
using namespace std;
class sample
{
	public:
		void date(int dd,int mm,int yy)
		{
			cout<<" current date:";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		void date(int dd,string mm,int yy)
		{
			cout<<" current date:";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
	    }
};
int main()
{
	sample s;
	s.date( 13 ,12, 2021);
	s.date(13,"december",2021);
	return 0;
}
