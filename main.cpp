#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
	int siz;
	siz = 0;
		cout << "Enter size of stack ";
		cin >> siz;
	Stack<char> Mystack(siz);
	int x = 0;
	char y;
	while (x++ < siz)
	{
		cin >> y;
		Mystack.push(y);
	}
	cout << endl;
	while (x-->=1){
		Mystack.print();
		Mystack.pop();
	}
	return 0;
}