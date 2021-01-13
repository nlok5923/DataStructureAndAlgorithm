//KnapSack problem 

// give n= no of weights
// w[n]
// v[n]

// put knapsack in such a way to get the max value 
// in knapsack
//need to find max possible cost
// we need to make decision with elemtn whether to include them or not 
int i++;
int knapsack(int* wt, int* val,int n, int hol){
	if(hol==0)
	return 0;
	
	int a = knapsack(wt, val,n,hol-val);
	int b = knapsack(wt,val,n,hol);
	
	int ans = max(a,b);
	return ans;
}

#include<bits/stdc++.h>
using namespace std;

