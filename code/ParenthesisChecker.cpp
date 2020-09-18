#include<bits/stdc++.h>
#include<stack>
bool isBalanced(string expression) 
{
    int len = expression.length();
    int i=0;
    stack<char> s;

    for(i=0;i<len;i++)
    {
        if(expression[i] =='(')
        {
            s.push('(');
        }
        else
        {
            if(!s.empty())
            s.pop();
            
        }
    }
    if(s.empty())
        return true;
    else
        return false;
    // Write your code here
    
};