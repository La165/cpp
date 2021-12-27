Program:
#include<iostream>
using namespace std;
template<class T1, class T2>
class sample
{
private:
T1 x;
T2 y;
public:
void get()
{
cout<<" enter x,y values:";
cin>>x>>y;
}
void display()
{
cout<<"x="<<x<<endl;
cout<<"y= "<<y<<endl;
}
};
int main()
}
 sample<int,int> s1;
cout<<" both are integers"<<endl;
s1.get();
s1.display();
sample<float,float>s2;
cout<<" both are floating values"<<endl;
s2.get();
s2.display();
sample< int,float>s3;
cout<<" integer and float values"<<endl;
s3.get();
s3.display();
return 0;
}
