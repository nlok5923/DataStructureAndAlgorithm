// For a given expression in the form of a string, find if there exist any redundant brackets or not. It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.
// A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.
// Example:
// Expression: (a+b)+c
// Since there are no needless brackets, hence, the output must be 'false'.

// Expression: ((a+b))
// The expression can be reduced to (a+b). Hence the expression has redundant brackets and the output will be 'true'.
#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s1;
    int len = expression.length();
    int i=0;
    
    for(i=0;i<len;i++)
    {
        if(expression[i]!=')')
        {
            s1.push(expression[i]);
        }
        else
        {
            int co =0 ;
            while(s1.top()!='(')
            {
                co++;
                s1.pop();
            }
            s1.pop();
            if(co <= 1)
            {
                return true;
            }
            
        }
    }
    return false;    
}