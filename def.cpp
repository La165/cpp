#include<iostream>
using namespace std;
void sum(int ,int );
void sum(int a=5,int b=10)
{ 
cout<<"addition is"<<a+b<<endl;
}
int main()
{
int a,b;
cout<<"enter a,b values:";
cin>>a>>b;
sum(a,b);
sum(a);
sum();
return 0;
}

