#include<iostream>
using namespace std;
class counter
{
	int count;
public:
	counter()
	{
		count=0;
	}
	counter (int c)
	{
		count=c;
	}
	int get_count()
	{
		return count;
	}
	counter operator++()
	{
		return counter( ++count);
	}
	counter operator++(int)
	{
		return counter (count++);
	}
};
int main()
{
	counter c1,c2,c3;
	cout<<"C1:"<<c1.get_count()<<endl;
	cout<<"C2:"<<c2.get_count()<<endl;
	++c1;
	++c2;
	cout<<"C1:"<<c1.get_count()<<endl;
	cout<<"C2:"<<c2.get_count()<<endl;
	c3 = ++c2;
	cout<<"C3:"<<c3.get_count()<<endl;
	c3 = c2++;
	cout<<"C2:"<<c2.get_count()<<endl;
	cout<<"C3:"<<c3.get_count()<<endl;
	return 0;
}
