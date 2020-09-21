//vectors : inbuilt dynamic array 
#include<bits/stdc++.h>
#include<vector>
using namespace std ;
main()
{
    //vector<int> *vp = new vector<int>();//dynamic allocation of memory to vector
    vector<int> v;
    v.push_back(10);
    v.push_back(20);//pushback me kaam chalega bhai ti chota hai ya fir saman double hai 
    v[0] = 100; //but isme kuch nahi check/kaam hoga //data store hi nahi hoga
    cout<<v[0]<<endl; //treating it as an array
    cout<<v[1]<<endl;
    v[0] = 100;//changing element
    // we will use v[i] for get and update
    //v[i] = v.at(i) gives the value of element at position i
    //at(1) function see first size and then gives element if out of indexaccessing is one then  we will get an e
    //error
    //v.pop_back()//to remove the last element
    //v.capacity() tell the size of array at the moment
    //capacity increase in order 1 2 4 8 16 32...... double hote jati hai har bar capacity jaise jaise element dalte jaoge
    
    
}

