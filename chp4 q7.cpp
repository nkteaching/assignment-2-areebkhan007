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
		
		Node* getTop()
		{
			return top;
		}
};

class Stack 
{
	Node *top = NULL, *bottom = NULL;
	Queue q;
		
	public:
		void push(int value)
		{
			q.enqueue(value);
		}
		
		int pop()
		{
			q.dequeue();
		}
		
		bool isEmpty()
		{
			return q.isEmpty();
		}
		
		void disp()
		{
			Node *temp = q.getTop();
			
			while(temp != NULL)
			{
				cout << temp->val << " ";
				temp = temp->next;
			}
			
		}
};

int main()
{
	Stack s;
	
	int num[5], i;
	
	
			cout << "Enter value five values: ";
			for(i=0;i<5;i++)
			cin >> num[i];
			for(i=0;i<5;i++)
			s.push(num[i]);
			
			system("cls");
	
			s.disp();
			cout << endl;
		
		
	
}
