#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque <int>deq;
	for(int i=0;i<=5;i++)
	{
		deq.push_back(i);
	}
	deque <int>::iterator d;
	for(d=deq.begin();d!=deq.end();++d)
	{
		cout<<*d<<" ";
	}
	cout<<endl;
}
