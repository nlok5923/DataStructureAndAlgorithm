// given an array 
// and need to remove duplicates 
// return an vector with unique elements in the same order 
// we will map for the same problem 

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicate(int arr[], int size){
	vector<int> output;
	unordered_map<int,boolean> seen;
	for(int i=0;i<size;i++){ 
	//count can only be 0 or 1
		if(seen.count(arr[i])>0){
			continue;
		}
		seen[arr[i]]=true;
		output.push_back(arr[i]);
	}
	return output;
}

main(){
	int arr[] = {1,2,3,4,5,6,7,1,2,3};
	vector<int> temp = removeDuplicates(arr,10);
	for(int i=0;i<10;i++){
		cout<<temp[i]<<" ";
	}
}
