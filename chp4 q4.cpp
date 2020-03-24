#include <iostream>
using namespace std;

template<class T>
struct Node
{
	T val;
	Node *next, *prev;
	
	Node(T value)
	{
		val = value;
		next = NULL;
		prev = NULL;
	}
};
struct Struct1
{
	
	
	Struct1()
	{
		
	}
};
template<class T>
class Stack
{
	public:
		Node<T> *top = NULL, *bottom = NULL;
	
		void push(T value)
		{
			if(top == NULL)
			{
				top = new Node<T>(value);
				bottom = top;
			}
			
			else
			{
				bottom->next = new Node<T>(value);
				bottom->next->prev = bottom;
				bottom = bottom->next;
			}
		}
		
		int pop()
		{
			if(top == NULL)
			{
				cout << "Stack is empty";
				
				return -1;
			}
			
			int n;
			
			if(bottom != top)
			{
				n = bottom->val;
				bottom = bottom->prev;
				delete bottom->next;
				
				return n;
			}
			
			else
			{
				n = bottom->val;
				delete bottom;
				top = NULL;
				
				return n;
			}
		}
		
		bool isEmpty()
		{
			if(top == NULL)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		void disp()
		{
			Node<T> *temp = top;
			
			while(top != NULL)
			{
				cout << top->val << " ";
				top = top->next;
			}
			
			top = temp;
		}
};



int main()
{
	Stack<float> s1;
	Stack<Struct1> s2;
	s1.push(8.7);
	
	s1.disp();
	
	
}
