#include<iostream>
using namespace std;
class student
{
	protected:
		string branch;
		string name;
		char gender;
		void getst()
		{
			cout<<"enter name ";
			cin>>name;
			cout<<"enter branch ";
			cin>>branch;
			cout<<" enter gender:";
			cin>>gender;
		}
};
class marks : public student
{
	protected:
		int m1,m2,m3,m4,m5,m6;
		int pinno;
		public:
			void getm()
			{
				getst();
				cout<<"enter marks:";
				cin>>m1>>m2>>m3>>m4>>m5>>m6;
				cout<<" enter pinno:";
				cin>>pinno;
			}
};
class project
{
	protected:
		int ep,ip;
		void getp()
		{
			cout<<" enter ip &ep :";
			cin>>ip>>ep;
		}
};
class percentage : public marks ,public project
{
	private:
		float per;
		public:
			
				void getper()
				{
				getm();
				getp();
				per=(float)( m1+m2+m3+m4+m5+m6+ip+ep)/8;
				}
				void show()
				{
					cout<<" name is "<<name<<endl;
					cout<<" branch is "<< branch<<endl;
					cout<<" gender is "<<gender<<endl;
					cout<<"pinno is"<<pinno<<endl;
					cout<<"percentege is"<<per<<endl;
				}
			
};
int main()
{
	percentage p;
	p.getper();
	p.show();
	return 0;
}
