#include<iostream>
#include<vector>
#include<fstream>
#include<time.h>
#include<algorithm>

using namespace std;

class BinarySearch
{
private:
	vector<int> data;
public:
	BinarySearch();
	
	int search(int key){
		vector<int>::iterator i=data.begin();
		int index;
		for(index=0;i!=data.end();i++,index++)
		{
			
		}
		if(i!=data.end())
		return index;
		
		else
		return -1;
	}

};

BinarySearch::BinarySearch(){
		ifstream input("sortednumber.txt");
		ofstream timefile("bsearchtime.txt");
		int temp,t;
		
		for(int i=10;i<10001;i=i+100)
		{
			int j=0;
			
			for(;j<=i;j++)
			{
				input>>temp;
				data.push_back(temp);
				
				
			}
			t=search(temp);
			timefile<<i<<" "<<j<<"\n";
			data.clear();
			
		}

	}


int main(){
BinarySearch obj;


return 0;
}
