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
	public:
		Node *top = NULL, *bottom = NULL;
		
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

void reverse(Stack &s) 
{
	Stack s1;
	
	while(!s.isEmpty())
	{
		s1.push(s.pop());
	}
	
	Node *temp = s1.top;
	
	while(temp!=NULL)
	{
		s.push(temp->val);
		temp = temp->next;
	}
}

int main()
{
	Stack s;
	
	int num[5], i;
			cout << "Enter five value: ";
			for(i=0;i<5;i++)
			cin >> num[i];
			for(i=0;i<5;i++)
			s.push(num[i]);
			
			system("cls");
			reverse(s);
			system("cls");
			s.disp();
			cout << endl;
		}
		
		
