// Complexity of fibonacci : two recursive call blindly till we reach base case 
// fid the case whem you repeting the same steps 
// if the same work exist then don'y repeat it 


#include<bits/stdc++.h>
using namespace std;

int fiboHelper(int n , int *ans){
	if(n<=1)
	return n;
	
	//check if output already exists
	if(ans[n]!=-1){
		return ans[n];
	}
	 int a  =  fiboHelper(n-1,ans);
	 int b =  fiboHelper(n-1,ans);
	 
	 ans[n] =  a+b;
	 return ans[n];
	
}


int fib(int n){
	int *ans = new int[n+1];
	for(int i=0;i<=n;i++)
	arr[i] = -1;
	return fiboHelper(n, ans)
}

int main(){
	
}
