/*Print all Codes - String
Send Feedback
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
Input format :
A numeric string S
Output Format :
All possible codes in different lines
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


void helper(string input, string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    int k = input[0]-'0';
    char c = k +'a'-1;
    string output1 = output;
    output1 =  output1+c;
    
    helper(input.substr(1),output1);
    
    if(input.size()>1)
    {
        int k1 = input[0]-'0';
        int k2 = input[1]-'0';
        
        k2 = k1*10+k2;
        
        if(k2>=10 && k2<=26)
        {
            char d = k2 +'a'-1;
            string output2 = output;
            output2 =  output2+d;
            helper(input.substr(2),output2);
            
        }
        
        
    }
    
}
void printAllPossibleCodes(string input)
{
    string output="";
    helper(input,output);
  
}
int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}

