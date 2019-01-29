#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v;
	ofstream file("number.txt");
	for (int i=0;i<10000;i++)
	{
		v.push_back(rand());
	
	}
	sort(v.begin(),v.end());
	vector<int>::iterattor i=v.begin();
	for(;i!=v.end();i++)
	{
		file<<(*i)<<"\n";
	}
	file.close();
	return 0;
}
