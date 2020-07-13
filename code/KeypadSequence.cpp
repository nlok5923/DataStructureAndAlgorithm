#include <string>
using namespace std;

int doit(int num, string input[], string output[])
{
    /*if(num==1 ||num==0)
    {
        output[0]="";
        return 0;
    }*/
    if(num==0)
    {
        output[0]="";
        return 1;
    }
    /*if(input[num].length()==0)
    {
        output[0]="";
        return 1;
    }*/
    int lastdigit = num%10;
    string smallOutput[1000];
    int smallOP = doit(num/10, input,smallOutput);
    int i=0,j=0;
    int len = input[lastdigit].length();
    string temp = input[lastdigit];
    int k=0;
    for(i=0;i<len;i++)
    {
        for(j=0;j<smallOP;j++)
        {
            output[k] = smallOutput[j]+temp[i];
            k++;
        }
        
    }
    return k;
    
}


int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string input[10];
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
     
    int value = doit(num,input,output);
    
return value;
}

