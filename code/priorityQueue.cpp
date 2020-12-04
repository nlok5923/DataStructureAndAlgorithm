#include<bits/stdc++.h>
using namespace std;
//will create
//isEmpty()
//getSize()
//getMin()

//developing min priority queue 
class priorityQueue{
	vector<int>pq;
	public:
	priorityQueue(){
		
	}
	bool isEmpty(){
		return pq.size()==0;
	}
	int getSize(){
		return pq.size();
	}
	int getMin(){
		if(!isEmpty())
		return pq[0];
		else
		return -1;
	}
	//insert function
	void insert(int ele){
		pq.push_back(ele);
		//i->2*i+1,2*i-1
		//child-1/2
		int childindex = pq.size()-1;
		int parentIndex = (childindex-1)/2;
		while(childindex>0){
		if(pq[childindex]<pq[parentIndex]){
			int temp = pq[childindex];
			pq[childindex] = pq[parentIndex];
			pq[parentIndex] = temp;
		}
		else
		break;
		childindex = parentIndex;
		parentIndex = (childindex-1)/2;
	}
	}
	void removeMin(){
		int ans = pq[0];
		pq[0] = pq[pq.size()-1];
		pq.pop_back();
		int minIndex = 0;
		int parentIndex  =0 ;
		int leftChildIndex = 2*parentIndex+1;
		int rightChildIndex = 2*parentIndex+2;
		
		while(leftChildIndex<pq.size()){		
		
		int minIndex = parentIndex;
		if(pq[minIndex]>pq[leftChildIndex]){
			minIndex = leftChildIndex;
		}
		if(rightChildIndex<pq.size()){
		if(pq[minIndex]>pq[rightChildIndex]){
			minIndex = rightChildIndex;
		}}
		if(minIndex == parentIndex)
		break;
		int temp = pq[minIndex];
		pq[minIndex] = pq[parentIndex];
		pq[parentIndex]= pq[minIndex];
		leftChildIndex 2*parentIndex+1;
		rightChildIndex = 2*parentIndex+2;
		
    	}
		return ans;
	
		}
		
	}
	
	
};


