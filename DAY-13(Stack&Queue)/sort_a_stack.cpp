/*
given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.

*/

void sortStack(stack<int> &input)
{
	// Write your code here
	stack<int> tmpStack;
 
    while (!input.empty())
    {
        // pop out the first element
        int tmp = input.top();
        input.pop();
 
        // while temporary stack is not empty and top
        // of stack is greater than temp
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            // pop from temporary stack and push
            // it to the input stack
            input.push(tmpStack.top());
            tmpStack.pop();
        }
 
        // push temp in temporary of stack
        tmpStack.push(tmp);
    }
 
    input=tmpStack;
}