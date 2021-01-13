//bfs and dfs for a disconnected graph
//simply check which vertex is not visted using visted array and starting from unvisted array 

void BFS(int **arr , inr n){
	
}
void DFS(int **arr , int n){
	bool 8 visited = new bool[n];
	for(int i=0;i<n;i++)
	visited[i]= false;
	for(int i=0;i<n;i++){
	if(!visited[i])
	printDFS(arr , n,i, visited);
	}
	// similar approach for BFS
}
