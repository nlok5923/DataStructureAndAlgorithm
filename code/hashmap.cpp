// hashmaps
// what exactly and why do we need them
// in hashmap we will decide the type of key and the type of value
// a["dsds"] = "sdsds" 
// we want to do like find max occuring word
// function in map we want 
// insert(key,value) value inserted correspond to key
// getValue get vvalue correspond to key 
// delete key 

// we will maintain a linked list for the same

// time complexity is O(n) agar pehle se exist karega to usko update karenge na ki new add hoga 
// goal to get element in O(1) 

// using BST search insertion and deletion all are O(logn)
// for insertion and deletion to be in O(1) we will use hashtable
 
//implementing hashmaps using linked list 

// two type of maps 
// inbuilt map this will do using BST all function in O(logn) time
// unordered map built using hashtable time complexity for all function will be O(1)
#include<bits/stdc++.h>
using namespace std;
main(){
	//unordered_map<string,int> ourMap;
	//inserting elements 
	//saves value as pair 
	pair<string,int> p("abc",1);
	ourMap.insert(p);
	//another way to insert 
	ourMap["abc"] =2;
	
	//find or access
	int a = ourMap["abc"];
	cout<<a<<endl;
	cout<<ourMap.at("abc")<<endl;
	cout<<ourMap.at("sd")<<endl; //will give key not found exception
	cout<<ourMap["sd"]<<endl; //insert 0 and gives out 0 as well as "sd"  key do not exist 
	//for key present or not
	//count gives the count of key in map  it can only return 0 or 1 in map 
	//	if(ourMap.count("dfd"))
	// to access size use ourMap.size();
	//erase 
	 //to erase an value corresponding to the key
	//ourMap.erase("abc")
	  

	
	
	
}

