// For a given expression in the form of a string, find the minimum number of brackets that can be reversed in order to make the expression balanced. The expression will only contain curly brackets.
// If the expression can't be balanced, return -1.
// Example:
// Expression: {{{{
// If we reverse the second and the fourth opening brackets, the whole expression will get balanced. Since we have to reverse two brackets to make the expression balanced, the expected output will be 2.

// Expression: {{{
// In this example, even if we reverse the last opening bracket, we would be left with the first opening bracket and hence will not be able to make the expression balanced and the output will be -1
#include<bits/stdc++.h>
using namespace std;
#include<stack>

int countBracketReversals(string input) 
{
	// Write your code here
   stack<char> s1;
   int len = input.length();
   if(len%2!=0)
   {
   return -1;
   }
   else
   {
   int i=0;
   int j=0;
   for(i=0;i<len;i++)
   {
    if(input[i]=='{')
        s1.push('{');
    else
    {
        if(!s1.empty())
        {
            if(s1.top()=='{')
            {
                s1.pop();
            }
            else
            {
                s1.push('}');
            }
        }
        else
        {
            s1.push('}');
        }
    }
    
    }
     int cou =0 ;
     int k = s1.size();
     for(i=0;i<k/2;i++)
    {
    char c1,c2;
    c1 = s1.top();
    s1.pop();
    c2 = s1.top();
    s1.pop();
    if(int(c1) ==int(c2))
    cou++;
    else
    cou =cou + 2;
    if(s1.empty())
    break;
    }
    return cou;

}
}
