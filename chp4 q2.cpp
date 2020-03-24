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

void Ascending(Stack &s) 
{
	Stack s1;
	
	while(!s.isEmpty())
	{
		s1.push(s.pop());
	}
	
	Node *temp = s1.top;
	Node *temp2 = temp;
		
	while(temp!=NULL)
	{
		while(temp2->next!=NULL)
		{
			if(temp2->val < temp2->next->val)
			{
				swap(temp2->val, temp2->next->val);
			}
						
			temp2 = temp2->next;
		}
		
		temp = temp->next;
		temp2 = s1.top;
	}
	
	while(!s1.isEmpty())
	{
		s.push(s1.pop());
	}
}

int main()
{
	Stack s;
	
	int num[5], i;
	
	
			cout << "Enter five values: ";
			for(i=0;i<5;i++)
			cin >> num[i];
			for(i=0;i<5;i++)
			s.push(num[i]);
			
			system("cls");
		
			Ascending(s);
			system("cls");
		
			s.disp();
			cout << endl;
		
		
	
	}

