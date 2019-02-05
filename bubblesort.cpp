#include<iostream>
#include<vector>
#include<fstream>
#include<time.h>

using namespace std;

class Bubblesort
{
private:
	vector<int> data;
public:
	Bubblesort(){}
	void getcount();
	int sort()
	{ 
		int count=0,temp;
		for(int i=0;i<data.size();i++)
		{
			for(int j=0;j<data.size()-i-1;j++,count++)
			{
				if(data[j]>data[j+1])
				{
				temp=data[j+1];
				data[j+1]=data[j];
				data[j]=temp;
				}

			}
		}
		return count;
	}

};

void Bubblesort::getcount(){
		ifstream input("number.txt");
		ofstream timefile("bsorttime.txt");
		int temp,t;
		
		for(int i=10;i<501;i=i+10)
		{
			
			for(int j=0;j<=i;j++)
			{
				input>>temp;
				data.push_back(temp);
			}
			
			t=sort();
			timefile<<i<<" "<<t<<"\n";
			data.clear();
			
		}

	}


int main(){
Bubblesort obj;
obj.getcount();

return 0;
}
