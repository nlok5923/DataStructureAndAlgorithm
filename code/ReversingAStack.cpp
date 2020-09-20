// You have been given two stacks that can store integers
// as the data. Out of the two given stacks, one is populated
// and the other one is empty. You are required to write a
// function that reverses the populated stack using the one 
// which is empty.
void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.size()==0 || input.size()==1 )
        return;
    int x = input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty())
     {
         extra.push(input.top());
         input.pop();
     }
    input.push(x);
     while(!extra.empty())
      {
          input.push(extra.top());
          extra.pop();
      }    
}