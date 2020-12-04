//k sorted array : data sorted hone ke baad element almost k position right or left ja sakte hai
//every element must be k distance from it's correct position 
// referral link https://dscwow.tech?ref=o5Vl3r
//sorted in decreasing order bade se chota
//we will use max priority queue here 
// we need to maintain a priority queue of size k

//10 11 9 7 6
 //1: 10 11 9 max: 11 [0] = 10
 //2: 10 9 7   max: [1] = 10

#include<bits/stdc++.h>
using namespace std;
void kSortedArray(int input[],int size ,int k){
	  priority_queue<int> pq;
	  for(int i=0;i<k;i++){
	  	pq.push(input[i]);
	  }
	  int j=0;//sorted array ka index
	  int n = size;
	  for(int i=k;i<n;i++){
	  	input[j] = pq.top();
	  	pq.pop();
	  	pq.push(input[i]);
	  }
	  while(!pq.empty()){
	  	input[j] = pq.top();
	  	pq.pop();
	  }
}
int main(){
	int input[] ={10,12,6,7,9};
	int k = 3;
	kSortedArray(input,5,k);
	for(int i=0;i<5;i++){
		cout<<input[i]<<endl;
	}
 	return 0;
}

