/*Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw*/
#include <iostream>
#include "solution.h"
using namespace std;


#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
   
    if(input.empty())
    {
        output[0]="";
        return 1;
    }


    int size1,size2;
    string output1[10000];
   
   
    size1 = getCodes(input.substr(1) , output1);
  
    int i=0;
    int k = (input[0]-'0');
    char f = k +'a'-1;
    for(i=0;i<size1;i++)
    {
        output[i]  = f + output1[i]; 
    }
    int j=0;
    int k1,k2;
    if(input.size()>1)
    { 
        string output2[10000];
        string bigString = input.substr(2);
    size2 = getCodes(input.substr(2) , output2);
    k1 = (input[0]-'0');
    k2 = (input[1]-'0');
    k2 = k1*10+k2;
    char g = k2 + 'a'-1;
    if(k2<=26 && k2>=10)
    {
    for(j=0;j<size2;j++)
    {
        output[j+size1] = g + output2[j];
    }
         return size1+size2;
    }
    }
    return size1;
   
    
    
}


int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}

