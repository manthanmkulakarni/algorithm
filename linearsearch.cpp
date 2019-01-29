#include<iostream>
#include<vector>
#include<fstream>
#include<time.h>

using namespace std;

class LinearSearch
{
private:
	vector<int> data;
public:
	LinearSearch();
	
	int search(int key){
		vector<int>::iterator i=data.begin();
		int index;
		for(index=0;i!=data.end();i++,index++)
		{
			if((*i)==key)
			{
				break;
			}
		}
		if(i!=data.end())
		return index;
		
		else
		return -1;
	}

};

LinearSearch::LinearSearch(){
		ifstream input("number.txt");
		ofstream timefile("lsearchtime.txt");
		int temp,t;
		
		for(int i=10;i<10001;i=i+100)
		{
			
			for(int j=0;j<=i;j++)
			{
				input>>temp;
				data.push_back(temp);
			}
			t=clock();
			search(temp);
			t=clock()-t;
			timefile<<i<<" "<<t<<"\n";
			data.clear();
			
		}

	}


int main(){
LinearSearch obj;


return 0;
}
