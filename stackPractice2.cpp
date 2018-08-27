#include<iostream>
using namespace std; 
#include"node.h"
#include"stack.h"
int main()
{

	//input numbers and have numbers with no remainder(even) be pushed & (odd) be displayed 
	int x;
	stackb stack1;

	cout << "Input your numbers, stop input of numbers when you enter -999" << endl; 
	cin >> x;

	while (x != -999)
	{
		if (x % 2 == 0)
			stack1.push(x);
		else
			cout << "x=" << x << endl;
		cin >> x;
	}

	cout << "Stack Elements:" << endl;
	while (!stack1.isempty())
	{
		cout << " " << stack1.peek();
		stack1.pop();
	}
	cout << endl;

	system("pause");
	return 0; 
}