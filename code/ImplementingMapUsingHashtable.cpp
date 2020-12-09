//implmenting map using hashtable 
//map using array 
// hash function : to parts :
// 1) hashcode : convert key into integer 
// 2) compression function % bucket size

// via hashcode distribution should be uniform


// finding hashcode :
// taking any p asprime no 
// hashcode(abcd) =  a*p^3+b*p^2+c*p+d

// key -> hashfunction -> hash 

// collision  : basically two key having same value after extracted from compression function
// mutilple keys at same index
// key ->(hashfunction)->integer ->bucket(integer)=value

// collision handling :do cheese same bucket mai jana chahti hai 
//two ways to do this : 
// 1) closed addressing/closed hashing/seperate chaining : array ki har entry ek link list ka head 
// 2) Open addressing : jagah khali hai to daldo nahi to hame ek alternate jagah par bhejna padega
// finding alternate place 
// hi(a) = hf(a) = f(i)
//i th attempt of a 
// f(0) = 0
// all diff technique takes all diff kind of f(i)
// ex: linear probing f(i) = i
// ex: Quadratic probing f(i) =i^2
// ex: double hashing f(i) = i*h'(a)(some other hash function h'())

// no fight in seperate chaining as in open addressing

// implementing map using seperate chaining 

// key ->string nahi to har type ke liye hashcode define karna hoga 
// value ->template 

//array ki har ele =  head of a linked list 
// array will be double pointer :  bucket array
// int size() to know size 
#include<bits/stdc++.h>
using namespace std;
template<Typename V>
class MapNode{
  public:
	string key;
	V value;
	MapNode* next;
	MapNode(string key,V value){
		this->key =  key;
		this->value = value;
		next = NULL;
	}
	~MapNode(){
		delete next;
	}
		
};

template <Typename V>
class ourmap{
	MapNode<V>* buckets;
	int size;
	int numOfBuckets;
	
	public:
		ourmap(){
			count = 0;
			numOfBuckets = 5;
			buckets = new MapNode<V>*(numOfBuckets);
			for(int i=0;i<numOfBuckets;i++)
			 buckets[i]= NULL;
		}
		~ourmap(){
			for(int i=0;i<numOfBuckets;i++)
			 delete buckets[i];
			 delete [] buckets;
		}
		int size(){
			return count;
		}
		V getValue(string key){
			int bucketIndex = buckets[bucketIndex];
			MapNode<V>* head= buckets[bucketIndex];
			while(head!=NULL){
				if(head->key ==key){
					return head->value;
				}
				head = head->next;
			}
			// key do not exists
			return 0;
		}
		
		private:
			void rehash(){
				MapNode>V>* temp;
				temp = buckets;
				buckets new MapNode<V>*(2*numOfBuckets);
				for(int i=0;i<2*numOfBuckets;i++){
					buckets[i]= NULL;
				}
				int oldBucketsCount = noOfBuckets;
				noOfBuckets*=2;
				count =0 ;
				for(int i=0;i<oldBucketCount;i++){
					MapNode<V>* head = temp[i];
					while(head!=NULL){
						string key = head->key;
						V value = head->value;
						insert(key,value);
						head = head->next;
					}
				}
				//deleting temp array 
				for(int i=0;i<oldBucketsCount;i++){
					MapNode<V>* head = temp[i];
					//recursively delete all linkedlist
					delete head;
				}
				delete [] temp;
			}
			int getBucketIndex(string key){
				//hashcode by base p method ex abc = a*p^2+b*p+c
			    // taking p as 37
				int hashcode=0;
				int currentCoeff = 1;
				for(int i=key.length-1;i>=0;i--){
					hashcode += key[i]*currentCooeff;
					//keeping this under range
					hashcode =  hashcode%noOfBuckets;
					currentCoeff*= 37;
					currentCoeff = currentCoeff%noOfBuckets;
				}
				//compression function (just %) 
				return hashcode%noOfBuckets;
			}
		public:
			double getLoadFactor(){
				return (1.0*count)/noOfBuckets;
			}
		int insert(string key, V value){
			//first thing to get bucket index from hash function
			int bucketIndex = getBucketIndex(key);
			MapNode<V>* head = buckets[bucketIndex];
			while(head!=NULL){
				if(head->key == key){
					//kyoki map mai same value thodi na jaati hai 
					head->value = value;
					return;
				}
				head = head->next;
			}
			head = buckets[bucketIndex];
			MapNode<V>* node = new MapNode<V>(key,value);
			node->next = head;
			buckets[bucketIndex] = node;
			count++;	
			double loadFactor =  (1.0*count)/noOfBuckets;
			if(loadFactor>0/7){
				rehash();
			}
		}
		V remove(string key){
			int bucketIndex = getBucketIndex( key);
			MapNode<V>* head = buckets[bucketIndex];
			MapNode<V>* prev = NULL;
			while(head!=NULL){
				if(head->key == key){
					if(prev==NULL){
						buckets[bucketIndex]= head->next;
					}
					else
					{
				       prev->next	=  head->next;
					}
					//nahi to recursively aage waloko le jayega 
					V value = head->value;
					head->next=NULL;
					delete head; 
					count--;
					return value;
				}
				prev = head;
				head= head->next;
			}
			//invalid value key do not exist
			return 0;
		}
};

// let's talk on time complexity 
// n : no of entries in our map 
// l: length of word
// hashcomputation  time O(l)  if n is large then we can assume O(l) to be negligible
// worst case length of list O(n)
// b boxes and n entry each box has almost n/b entry on an avg 
// n/b is called load factor 
// we will ensure (n/b)<0.7
// we can assume box mai jyada entry nahi hogi to fir assume karte hai ki insert mai constant time hi legega 
// Rehashing : 
// buckets array ko double karna(basically a deep copy) +   

// doing rehashing 





