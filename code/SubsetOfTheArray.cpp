int subset(int input[],int length,int output[][20])
{
    int i,j;
    if(length==0)
    {
        output[0][0]=0;
            return 1;
    }
    int size1=subset(input+1,length-1,output);
    for(i=0;i<size1;i++)
    {
output[i+size1][0]=1+output[i][0];
        output[i+size1][1]=input[0];
        for(j=2;j<2+output[i][0];j++)
            output[i+size1][j]=output[i][j-1];
        
    }
    return 2*size1;
        
}
