#include <iostream>
template <class T>
class Stack
{
private:
	T *newstack;
	int size;
	int top;
public:
	Stack(int);
	~Stack();
	void push(T);
	void pop();
	void print();
};
template <class T>
	Stack<T>::Stack(int maxSize) :
size(maxSize)
{
	newstack = new T[size];
	top = 0;
}
template <class T>
	Stack<T>::~Stack()
{
	delete[] newstack;
}
template <class T>
	void Stack<T>::push(T value)
{
	if(top < size)
	newstack[top++] = value; 
}
template <class T>
	void Stack<T>::pop()
{
	if (top > 0)
	{
		cout << "\nDelete element\n";
		newstack[--top];
	}
}
template <class T>
	void Stack<T>::print()
{
	cout << "Size of stack=" <<top<<"\n";
	if (top == 0)
	{
		cout << "Stack empty\n";
	}
	for (int n = top-1; n >= 0; n--)
		cout << newstack[n] <<" ";
}
