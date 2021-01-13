//has path 
// given two vertices starting and ending just check if path is there between them or no
//doing it using BFS

bool BFS(int **arr , int v1, int v2 , int n){
	bool * visited = new bool[n];
	for(int i=0;i<n;i++)
	visited[i] = false;
	// v1 staet vertex
	// v2 end vertex
	queue<int> q1;
	q1.push(v1);
	while(!q1.empty()){
		int temp = q1.front();
		q1.pop();
		visited[temp] = true;
		for(int  i=0;i<n;i++){
			if(arr[temp][i]){
				if(i==v2)
				return true;
				else{
					if(!visited[i]){
						q1.push(i);
					}
				}
			}
		}
	}
	return false;
}
