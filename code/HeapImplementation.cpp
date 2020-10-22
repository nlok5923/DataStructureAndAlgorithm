// we wil use Heaps for implementing priority queue
// heap is compe=lete binary tree
// heap order property 
// meaning of CBT is all levels are filled rather than last level
// must be filled left to right 
// CBT and it's implementation 

// BST must be balanced 
// to store the BST it is complicated 
// min amd max no of nodes in a CBT with height h
// min no of nodes in CBT with height h is 2^(h-1)
// max no of nodes in CBT with height h is 2^(h)-1
// n total no of nodes in CBT is 2^(h-1) <= n <= 2^(h)-1
// log(n+1)<=h <=log(n)+1
// log is log base 2
// CBT ki height hamesha log(n) rehti hai 

// heap order property 
// heap types min heap and max heap 

//implementation of priority queue using heap
//storing CBT in array 
#include<bits/stdc++.h>
using namespace std;
class PriorityQueue {
    vector<int> pq;
    //abhi int use kar rahe hai to jo no hai wahi uski Priority hai
    public :
    PriorityQueue(){
        
    }
    bool isEmpty(){
        return pq.size()==0;
    }
    //return no of element in Priority Queue
    int getSize(){
        return pq.size();
    }
    int getMin(){
        if(!isEmpty())
        return pq[0];
        else
        return 0;
    }
    void insert(int data){
        pq.push_back(data);
        int childIndex = pq.size()-1;
        while(childIndex>0){
        int parentIndex =(childIndex -1)/2;
        if(pq[childIndex]<pq[parentIndex])
        {
            //swap(pq[childIndex],pq[parentIndex]);
            int temp = pq[childIndex];
            pq[childIndex] = pq[parentIndex];
            pq[parentIndex] = temp;
        }
        else
        break;
        childIndex = parentIndex;
        parentIndex = (childIndex-1)/2;
        }
    }
    //remove min code 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}