#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next, *prev;
	
	Node(int value)
	{
		val = value;
		next = NULL;
		prev = NULL;
	}
};

class Stack
{
	Node *top = NULL, *bottom = NULL;
	
	public:
		void push(int value)
		{
			if(top == NULL)
			{
				top = new Node(value);
				bottom = top;
			}
			
			else
			{
				bottom->next = new Node(value);
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
			Node *temp = top;
			
			while(top != NULL)
			{
				cout << top->val << " ";
				top = top->next;
			}
			
			top = temp;
		}
};

class Queue
{
	Node *top = NULL, *bottom = NULL;
	
	public:
		void enqueue(int value)
		{
			if(top == NULL)
			{
				top = new Node(value);
				bottom = top;
			}
			
			else
			{
				bottom->next = new Node(value);
				bottom->next->prev = bottom;
				bottom = bottom->next;
			}
		}
		
		int dequeue()
		{
			if(bottom == NULL)
			{
				cout << "Stack is empty";
				
				return -1;
			}
			
			int n;
			
			if(top != bottom)
			{
				n = top->val;
				top = top->next;
				delete top->prev;
				top->prev = NULL;
				
				return n;
			}
			
			else
			{
				n = bottom->val;
				delete bottom;
				bottom = NULL;
				
				return n;
			}
		}
		
		bool isEmpty()
		{
			if(bottom == NULL)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
};

void reverse(Stack &s,Queue q)
{
	
	
	while(!s.isEmpty())
	{
		q.enqueue(s.pop());
	}
	
	while(!q.isEmpty())
	{
		s.push(q.dequeue());
	}
}

int main()
{
	Stack s;
	Queue q;
	int num[5],i;
			cout << "Enter five value: ";
			for(i=0;i<5;i++)
			cin >> num[i];
			for(i=0;i<5;i++)
			s.push(num[i]);
			
			system("cls");

			reverse(s,q);
			system("cls");
	
			s.disp();
			cout << endl;

}
