#include<iostream>

using namespace std;

class Graph{
	int **ar;
	int size;
	int *flg;

	public:
	Graph(int);
	int getadj(int);
	void dfs1();
	void dfs2(int );
	void getData();

};
void Graph::getData()
{
for(int i=0;i<size;i++){
	for(int j=0;j<size;j++){
		ar[i][j]=0;
		
	}
	flg[i]=0;
}
ar[2][1]=1;
ar[1][2]=1;
ar[2][0]=1;
ar[0][2]=1;
}
void Graph::dfs1()
{
	for(int i=0;i<size;i++)
	{
		if(flg[i]!=1) dfs2(i);
	
	}

}

void Graph::dfs2(int w)
{
int adj;
	while(1)
	{	
		if(flg[w]!=1)cout<<w<<endl;
		flg[w]=1;
		adj=getadj(w);
		if(adj==-1) break;
		w=adj;
		dfs2(w);
	}

}

Graph::Graph(int n){

	ar=new int*[n];
	size=n;
	for(int i=0;i<n;i++)
		*(ar+i)=new int[n];
	flg=new int[n];


}

int Graph::getadj(int v)
{
int i;
	for(i=0;i<size;i++)
	{
		if(ar[v][i]==1&&flg[i]==0) 
		{
			
			return i;
		}

	}
return -1;

}

int main()
{

Graph g(3);
g.getData();
g.dfs1();

return 0;
}
