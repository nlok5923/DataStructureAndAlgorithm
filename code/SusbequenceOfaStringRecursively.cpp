#include<bits/stdc++.h>
using namespace std;

int subsequence(string input,string output[])
{
	if(input.empty())
	{
		output[0]="";
		return 1;
	}
	
	string smallString = input.substr(1);
	// will return a substring from index 1 untill it end
	int smallOP = subsequence(smallString, output);
	int i=0;
	for(i=0;i<smallOP;i++)
	{
		output[i+smallOP] = input[0]+output[i];
	}
	return 2*smallOP;
	
	
}


main()
{
	string input;
	cin>>input;
	string output[1000];
	int sizeOfString = subsequence(input,output);
	int i=0;
	for(i=0;i<sizeOfString;i++)
	{
		cout<<output[i]<<endl;
	}
	
}
