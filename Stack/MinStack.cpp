#include <bits/stdc++.h> 
// Implement class for minStack.
class MinStack
{
	// Write your code here.
	stack<int> stk,minst;
	int m;
	public:
		
		// Constructor
		MinStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.			
            stk.push(num);			
            if (minst.empty() || num <= minst.top()) {
                minst.push(num);
            }			
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if (stk.empty()) {
                return -1; 
            }
			int topElement = stk.top();
            stk.pop();
            if(minst.top()==topElement){
                minst.pop();
            } 
            return topElement; 
		}
		
		
		int top()
		{
			// Write your code here.
			if (stk.empty()) {
                return -1;
            }
			return stk.top();
		}
		
		
		int getMin()
		{
			// Write your code here.
			if (minst.empty()) {
                return -1; 
            }
			return minst.top();
		}
};
