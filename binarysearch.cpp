#include<iostream>
#include<vector>
#include<fstream>
#include<time.h>

using namespace std;

class BinarySearch
{
private:
	vector<int> data;
public:
	BinarySearch(){}
	void getcount();
	int search(int);
	
	
};

void BinarySearch::getcount(){
		ifstream input("sortednumber.txt");
		ifstream inputkey("key.txt");
		ofstream timefile("bsearchtime.txt");
		int temp,t;
		
		for(int i=10;i<100001;i=i+1000)
		{
			
			for(int j=0;j<=i;j++)
			{
				input>>temp;
				data.push_back(temp);
			}
			//getting key element to search
			inputkey>>temp;
			
			
			t=search(temp);
			
			timefile<<i<<" "<<t<<"\n";
			data.clear();
			
		}

	}

int BinarySearch::search(int key){
		
		int index=0,start=0,end;

		int size=data.size();
		for(index=0,start=0,end=size;start<end-1;index++)
		{
			
			
			if(data[size]==key){break;}

			else if(data[size]<key)
			{
				start+=size/2;
				
			}
			else
			{
				end=size;
			}
			
			size=end-start;
			

		}
	return index;		
}

int main(){

BinarySearch obj;
obj.getcount();

return 0;
}
