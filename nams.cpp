#include<iostream>
using namespace std;
namespace one
{
	int a=10;
}
namespace two
{
	float a=234.5667;
}
int main()
{
	cout<<one::a<<endl;
	cout<<two::a;
	return 0;
}
