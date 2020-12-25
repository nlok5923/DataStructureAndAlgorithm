//  Min cost path problem memoization solution :
// max no of unique call will be (m*n) 
// but in brute force we ae making 3^(approx n) calls
// we will use a 2d array to save my ans 
// value at a  particular cell of output matrix will be : min cst from cell(i,j) to (n-1,m-1) 
// (0,0) ->(m-1,n-1) ka ans output[0][0] mai saved hoga


int minCost(int **input , int m, int n,int i, int j, int **output){
	if(i==(m-1)&&j==(n-1))
	return output[i][j];
	if(i>=m || j>=n)
	return INT_MAX;
	
	//check if ans is already there
	if(output[i][j]!=-1){
		return output[i][j];
	}
	//recursive calls
	int x = minCost(input,m,n,i+1,j,output);
	int y = minCost(input,m,n,i,j+1,output);
	int x = minCost(input, m,n,i+1,j+1,output);
	
	int ans  = min(x,min(y,z)) + input[i][j];
	output[i][j] = ans;
	return ans;
	
}
// dp solution of mincost path
// we will get final ans at output[0][0]
// sabke ans iteratively save karo 
int minCost_dp(int **input,int m,int n, int **output){
	int *output = new int*[m];
	for(int i=0;i<m;i++){
		output[i] = new int[n];
	}
	
	output[m-1][n-1] = input[m-1][n-1];
	
	//filling last row right ot left 
	//row no fix which is m-1
	
		//row fix has n-1
	for(int j=n-2;j>=0;j--)
		output[m-1][j] = output[m-1][j+1] + input[m-1][j];
		
	//fill last column from bottom to top
	//kyoki iski bhi ek hi dependency hai  
	for(int i=m-1;i>=0;i--){
		output[i][n-1] = output[i+1][n-1] +input[i][n-1]; 
	}
	
	// fill remaining cells	
	for(int i=m-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			output[i][j] = min(output[i][j+1],min(output[i+1][j+1]+output[j+1][i])) + input[i][j];			
		}
	}
	return output[0][0];
	}

#include<bits/stdc++.h>
using namespace std;
int main(){
	minCost(input,m,n,0,0,output);
	
}
