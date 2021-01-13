#include<bits/stdc++.h>
using namespace std;

//using recursion 
//break problem 
// taking one from s1
//taking one from s2
// teking nnone from s1 and s2


//recursive approach bekar wali
//iski complexity almost 2^n(without third call)
//with third call it will be 3^n
int lcs(string s, string t){
	//base case
	if(s.size()==0||t.size()==0)
	return 0;
	//recusive call
	if(s[0]==t[0]){
		return 1+lcs(s.substr(1),t.substr(1));
	}
	else{
	int a  =  lcs(s.substr(1),t);
	int b = lcs(s,t.substr(1));
	int c = lcs(s.substr(1),t.substr(1));
	
	return max(a,max(b,c));
}
}

//doing it using memoization 
// we will just remove the redundant work from the above implementation 
// no of unique ans in this question total m*n unique call will be there
//totol m+1*n+1 unique combinations will be there
// is arrya ke ek cell mai ham kya store karenge 
// ans[i][j] = lcs of (s(len=i) and length of t will be j
// final ans will be at ans[m][n]
// memoization approach
int lcs(int **output,string s, string t){
	int m= s.size();
	int n = t.size();
	
	//base case
	if(s.size()==0||t.size()==0)
	return 0;
	//check if ans already exist
	if(output[m][n]!=-1)
	return output[m][n];
	//recusive call
	int ans;
	if(s[0]==t[0]){
	 ans = 1+lcs(output,s.substr(1),t.substr(1));
	}
	else{
	int a  =  lcs(output,s.substr(1),t);
	int b = lcs(output,s,t.substr(1));
	
	 ans= max(a,c);
}
    output[m][n] = ans;
    return ans;
}
//dp approach
//output is of dimension m+1 and n+1
int lcm(int **output , string s, string t ){
	int m = s.size();
	int n = t.size();
	//fill first row and first column
	for(int i=0;i<=m;i++){
		output[i][0] = 0;  
	}
	for(int j=0;j<=n;j++){
		output[0][j] = 0;
	}
	// here i and j repqresent the i : length of s 
	// j: length of t
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			//check if first character matches
			if(s[m-i]==t[n-j])
			output[i][j] = 1 + output[i-1][j-1];
			else{
				output[i][j] = max(output[i-1][j],output[i][j-1]);
			}
		}
	}
	return output[m][n];
}

int main() {
	
}
