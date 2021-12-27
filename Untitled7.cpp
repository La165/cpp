#include<iostream>
using namespace std;
template <class T>
class sample
{
private:
T x;
T y;
public:
void get()
{
cout<<" enter x,y values:";
cin>>x>>y;
}
void add()
{
cout<<"addition is"<<x+y<<endl;
}
};
int main()
{
sample<int> s1;
s1.get();
s1.add();
sample<float> s2;
s2.get();
s2.add();
return 0;
}
