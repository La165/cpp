#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<int,string>m;
	m.insert(make_pair(2805,"james"));
	m.insert(make_pair(2802,"smith"));
	m.insert(make_pair(2801,"scott"));
	m.insert(make_pair(2807,"miller"));
	m.insert(make_pair(2804,"joy"));
	m.insert(make_pair(2806,"john"));
	m.insert(make_pair(2801,"sam"));
	m.insert(make_pair(2803,"bob"));
	map<int,string>::iterator pos;
	cout<<" empid"<<"\t"<<"name"<<endl;
	for(pos=m.begin();pos!=m.end();++pos)
	cout<<pos->first<<" "<<pos->second<<endl;
	pos=m.find(2803);
	cout<<"value at key 2803 is"<<pos->second<<endl;
	m.erase(2805);
	cout<<"map after deletion"<<endl;
	for(pos=m.begin();pos!=m.end();++pos)
	cout<<pos->first<<" "<<pos->second<<endl;
	return 0;
}
