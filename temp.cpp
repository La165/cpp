#include<iostream>
using namespace std;
template<typename T>
void sort( T a[], int n)
{
	T temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
}
template <typename T>
void print( T a[],int n)
{
	int i;
    cout<<"	\n sorted order:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
		
	}
}
int main()
{
	int a[5]={ 12,97,34,56,78};
	char c[5]={ 'l','a','k','p','c'};
	char b[7]={ 'm','a','d','h','u','r','i'};
	float f[5]={ 2.3,4.5,6.7,1.2,2.5};
	sort(a,5);
	print(a,5);
	sort(c,5);
	print(c,5);
	sort(b,7);
	print(b,7);
    sort(f,5);
	print(f,5);
	return 0;

}
