#include<iostream>
using namespace std;
class sample
{
	private:
		static int x;		
		public:
		 static void show()
		{
			cout<<"x="<<x<<endl;
		}
};
int sample::x=45;
int main()
{
sample::show();
return 0;
}
