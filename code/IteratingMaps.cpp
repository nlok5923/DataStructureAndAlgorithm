#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> map1;
	map1["ab1"]=1;
	map1["ab2"]=2;
	map1["ab3"]=3;
	map1["ab4"]=4;
	map1["ab5"]=5;
	
	unordered_map<string,int>::iterator it;
	for(it=map1.begin();it!=map1.end();it++){
		cout<<it->second<<endl;
	}
	//similarly we use iterator for vector too 
	
	
	
}
