#include<iostream>
using namespace std;
template<typename T>
void addition(T x, T y)
{
	cout<<" addition is"<<x+y<<endl;
}
int main()
{
	addition(3,5);
	addition(22.22,456.6567);
	return 0;
}
