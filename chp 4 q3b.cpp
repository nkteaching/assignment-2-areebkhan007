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
void transfer(Stack &s1, Stack &s2) // reverse using only one stack and non-array variables
{
	Node* temp = s1.top;
	
	while(temp!=NULL)
	{
		s2.push(temp->val);
		temp = temp->next;
	}
}
}

int main()
{
	Stack s1, s2;
	
	int num[5], i;
	
	cout << "For stack 1:\n\n";
			cout << "Enter fives value: ";
			for(i=0;i<5;i++)
			cin >> num[i];
			for(i=0;i<5;i++)
			s1.push(num[i]);
			
			system("cls");
		    
			transfer(s1,s2);
			system("cls");
		
		//	s1.disp();
		//	cout << endl;
		
			s2.disp();
			cout << endl;

}
