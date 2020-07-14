#include <iostream>
#include <string>
using namespace std;

void doit(int num ,string output, string input[])
{
    if(num==0)
    {
        cout<<output<<endl;
        
    }
    int t=0;
    t= num%10;
    int no = num/10;
    string temp = input[t];
    if(t>=2 && t<=6 || t==8)
    {
    doit(no ,temp[0]+output,input);
    doit(no ,temp[1]+output,input);
    doit(no ,temp[2]+output,input);
    }
    else
    {
      if(t==7 || t==9)
      {
    doit(no ,temp[0]+output,input);
    doit(no ,temp[1]+output,input);
    doit(no ,temp[2]+output,input);
    doit(no ,temp[3]+output,input);
          
      }
    }
    
    
}




void printKeypad(int num)
{
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string input[10];
    string output="";
    input[0] = "";
    input[1] = "";
    input[2] = "abc";
    input[3] = "def";
    input[4] = "ghi";
    input[5] = "jkl";
    input[6] = "mno";
    input[7] = "pqrs";
    input[8] = "tuv";
    input[9] = "wxyz";
     
     doit(num,output,input);
}

