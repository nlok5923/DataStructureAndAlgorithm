// min steps to reduce a number to 1 via this three steps 

// find no of steps needed to do this 
// decrement the no by 1 
// divide by 2 if n%2 == 0
// divide by 3 if n%3 == 0

//simple recursive technique
#include<bits/stdc++.h>
using namespace std;
//
//int dhundkela(int n){
//	//base case
//	if(n<=1)
//	return 0;
//	
//	// recursive call 
//	int x = dhundkela(n-1);
//	
//	int y = INT_MAX;
//	if(n%2==0)
//	y = dhundkela(n/2);
//	
//	int z = INT_MAX;
//	if(n%3==0)
//	z = dhundkela(n/3);
//	
//	return min(x,min(y,z))+1; 
//}

// using memoization 
// our moto now to reduce the overlapping subproblem 
// max no of unique calls may be n 
// we will make an n+1 array 
// ans[i] = min steps require to reach from i to 1 
// then our ans will be ans[n]
int anslabhai(int n, int *arr) {
	if(n<=1)
	return 0;
	
	// check if o/p already exist 
	if(arr[n]!=-1){
		return arr[n];
	}
	
	//calculate o/p
	int x = anslabhai(n-1,arr);
	int y = INT_MAX;
	int z = INT_MAX;
	
	if(n%2==0)
	y = anslabhai(n/2,arr);
	if(n%3==0)
	z = anslabhai(n/3,arr);
	
	int output = min(x,min(y,z))+1;
	
	//save output for future use 
	arr[n] = output ;
	
	return output;
}

int dhundkela(int n) {
	int *ans =  new int[n+1];
	
	for(int i=0;i<=n;i++) {
		ans[i] = -1;
	}
	
	return anslabhai(n, ans);
}

//dp solution 

int ansla(int n, int *arr) {
    
    arr[1]=0;
    arr[0] = 0 ;
    //let n=7
    for(int i=2;i<=n;i++) { //a[2] = 1 , a[3] =1, 
        int x =  arr[i-1]; 
        int y= INT_MAX;
        int z = INT_MAX;
        if(i%2==0)
        y = arr[i/2];
        if(i%3==0)
        z = arr[i/3];
        
        arr[i] = min(x,min(y,z))+1;
       // cout<<arr[i]<<" "<<i<<endl;
    }
   // cout<<n<<"n"<<endl;
   return  arr[n];
}


int countStepsToOne(int n)
{
    int *arr = new int[n+1];
	return ansla(n, arr);
}


int main() {
	int n ;
	cin>>n;
	int coun =  dhundkela(n);
	cout<<coun<<endl;
}
