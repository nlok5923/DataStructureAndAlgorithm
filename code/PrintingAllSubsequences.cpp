#include<bits/stdc++.h>
using namespace std;

void printSubs(string input,string output)
{
	if(input.empty())
	{
		cout<<output<<endl;
		return;
	}
	printSubs(input.substr(1),output);
	printSubs(input.substr(1),output+input[0]);
}

main()
{
	
	string input;
	cin>>input;
	string output ="";
	printSubs(input,output);
}
