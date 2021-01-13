//implementing graph using adjancency matruix and also implementing the dfs algorthm
// the printing is itself a depth first search
#include<bits/stdc++.h>
using namespace std; 
void print(int **arr , int nv, int sv, bool * visited){
	cout<<sv<<endl;
	visited[sv] = true;
	for(int i=0;i<nv;i++){
		if(i==sv){
			continue;
		}
		if(arr[sv][i]){
			if(visited[i]){
				continue;
			}
			print(arr,n,i);
		}
	}
}
// ask user  how many vertice(0..n-1) 
// ask how many edges 
int main(){
	int n;
	int e;
	cuin>n>>e;
	//two d array of all edges 
	int ** edges  = new int*[n];
	for(int i=0 ;i<n;i++){
		edges[i] = new int[n];
		for(j=0;j<n;j++)
		edges[i][j] =0;
	}
    //1 edge
	//0 no edge 	
	for(int i=0;i<e;i++){
		int fv,sv;
		cin>>fv>>sv;
		edges[fv][sv] = 1;
		edges[sv][fv] = 1;
	}
	//starting vertex to start printing 
	bool * visited =  new bool[n];
	for(int i=0;i<n;i++)
	visited[i]=false;
	print(edges,n,0,visited);
	// delete all the memory 
	for(int i=0;i<n;i++){
		delete [] edges[i];
	}
}
