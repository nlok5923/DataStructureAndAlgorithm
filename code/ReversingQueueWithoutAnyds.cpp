//reversing queue without using any data structures 

#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.size()==0 || input.size()==1)
    {
        return;
    }
    int x = input.front();
    
    input.pop();
    
    reverseQueue(input);
    
    input.push(x);
}