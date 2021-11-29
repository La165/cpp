#include<iostream>
using namespace std;

namespace first_space
{
	void func()
	{
		cout <<"Inside first_space";
	}
}

namespace second_space
{
	void func()
	{
		cout <<"Inside second_space";
	}
}

int main()
{
	first_space::func(); //calls name from first space
	
	second_space::func(); //callls name from second space
	return 0;
}

