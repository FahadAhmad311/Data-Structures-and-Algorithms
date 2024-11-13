#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> stack;
	stack.push(2);
	stack.push(3);
	stack.push(4);
	int num=0;
	stack.push(num);
	
	while(!stack.empty()){
		cout << stack.top() <<" ";
		stack.pop();
	}
}
