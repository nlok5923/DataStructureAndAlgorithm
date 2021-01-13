//haspath using DFS but now we need to return the path which is get path we need to return the DFS wala path
vector<int> getDFS(int **arr , int v , int v1, int v2 , bool *visited){
	if(arr[v1][v2]){
		vector<int> v1;
		return v1;
	}
	int temp = v1;
	vector<int> v2;
	for(int i=0;i<v1;i++){
		if(!visited[i]){
		int got = getDFS(arr, i,v2, visited);
		if(got){
			visited[i] = true;
			v1.push_back(i);
		}
		else{
			visited[i] = true;
		}
	    }
		
	}
}
