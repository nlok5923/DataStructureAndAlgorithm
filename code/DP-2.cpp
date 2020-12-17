// solving fibonacci problem iteratively 
// for f(5) =  f(4) + f(3)
// we know  f(0) = 0 and f(1) = 1

#include<bits/stdc++.h>
using namespace std;

int main(){
	//DP approach 
	int n;
	cin>>n;
	int *arr = new int[n+1];
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2;i<=n;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	cout<<arr[n]<<endl;
}


