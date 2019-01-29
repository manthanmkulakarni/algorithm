#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
	ofstream file("number.txt");
	for (int i=0;i<10000;i++)
	{
		file<<rand()<<"\n";
	
	}
	file.close();
	return 0;
}
