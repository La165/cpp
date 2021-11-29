#include<iostream>
using namespace std;
class Student
{
	private:
		int id;
		char name[10];
		char branch[10];
	public:
		Student()
		{
			cout<<"entner name:";
			cin>>name;
			cout<<"enter id:";
			cin>>id;
			cout<<"enter branch:";
			cin>>branch;
		}
		void show()
		{
			cout<<"name is"<<name<<endl<<"id is"<<id<<endl<<"branch is"<<branch<<endl;
		}
};
int main()
{
	Student s;
	s.show();
	return 0 ;
}
