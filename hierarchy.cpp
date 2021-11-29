#include<iostream>
#include<cstring>
using namespace std;
class person
{
	protected :
		int id;
		string name;
		char gender;
		void getp()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<" enter id";
			cin>>id;
			cout<<"enter gender:";
			cin>>gender;
		}
		void showp()
		{
			cout<<"name:"<<name<<endl;
			cout<<"id:"<<id<<endl;
			cout<<"gender:"<<gender<<endl;
		}
};
class student : public person
{
	private:
		int pinno;
		string college;
		float percentage;
		public:
			void getst()
			{
				getp();
				cout<<"enter pinno:";
				cin>>pinno;
				cout<<"enter college:";
				cin>>college;
				cout<<"enter percentage:";
				cin>>percentage;
			}
			void showst()
			{
				showp();
				cout<<"pinno : "<<pinno<<endl;
				cout<<" college : "<<college<<endl;
				cout<<" percentage : "<<percentage<<endl;
			}
};
class employee : public person
{
	private:
		int eid;
		float esal;
		public:
			void gete()
			{
				getp();
				cout<<" enter employee id:";
				cin>>eid;
				cout<<" enter employee salary:";
				cin>>esal;
			}
			void showe()
			{
				showp();
				cout<<"employee id :"<<eid<<endl;
				cout<<"employee salary : "<<esal<<endl;
			}
		
};
int main()
{
	student s;
	s.getst();
	s.showst();
	employee e;
	e.gete();
	e.showe();
	return 0;
}
