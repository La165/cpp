#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int pinno;
		void getst()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"enter pinno:";
			cin>>pinno;
		}
};
class marks : public student
{
	protected:
		int m1,m2,m3,m4,m5,m6;
		string branch;
		void getm()
		{
			getst();
			cout<<"enter six subject marks:";
			cin>>m1>>m2>>m3>>m4>>m5>>m6;
			cout<<"enter branch:";
			cin>>branch;
		}
		void showm()
		{
			cout<<"name "<<name<<endl;
			cout<<"pinno  "<<pinno<<endl;
			cout<<"branch "<<branch<<endl;
		}
};
class percentage: public marks
{
	private:
		float per;
		public:
			void result()
			{
				getm();
				per=(float)(m1+m2+m3+m4+m5+m6)/6;
				showm();
				cout<<"percentege of the student : "<<per<<endl;
			}
};
int main()
{
	percentage p;
	p.result();
	return 0;
}
