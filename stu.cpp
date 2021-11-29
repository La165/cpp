#include<iostream>
using namespace std;
class student
{
	private:
		int regno;
		char name[23];
		int age;
	public:
		void get();
		void show();
};
void student:: get()
{
	cout<<" enter student details:"<<endl;
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter regno:"<<endl;
	cin>> regno;
	cout<<"enter age:"<<endl;
	cin>>age;
}
void student::show()
{
	cout<<"name is"<<name<<endl;
	cout<<"regno is "<<regno<<endl;
	cout<<" age is "<<age;
}
int main()
{
	student s;
	s.get();
	s.show();
	return 0;
}
