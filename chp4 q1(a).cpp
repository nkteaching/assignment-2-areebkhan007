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

void reverse(Stack &s,Stack &s1,Stack &s2)
{
	
	
	while(!s.isEmpty())
	{
		s1.push(s.pop());
	}
	
	while(!s1.isEmpty())
	{
		s2.push(s1.pop());
	}
	
	while(!s2.isEmpty())
	{
		s.push(s2.pop());
	}
}

int main()
{
	Stack s,s1,s2;
	
	int num[5];
		int i;
		
			cout << "Enter five value: ";
			for(int i=0;i<5;i++)
			cin >> num[i];
			for(int i=0;i<5;i++)
			s.push(num[i]);
			
			system("cls");
		
			reverse(s,s1,s2);
			system("cls");
		
		

			s.disp();
			cout << endl;
		
	}
 
