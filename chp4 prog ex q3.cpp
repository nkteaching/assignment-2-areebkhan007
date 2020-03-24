#include<iostream>
#include<vector>

using namespace std;
template <class T>
class Stack
{
	private:
		vector<T> n;
		char *e;
	public:
	
		bool empty1()
		{
			return n.empty();
		}
		void push(T data)
		{
			n.push_back(data);
			
		}
		T &pop()
		{
			n.pop_back();
		}
		void input ( char *str )
		{
			e == str ;
		}
		void found()
		{
			while(*e)
			{
				if( isdigit(*e) || isalpha(*e))
				{
					while( isdigit(*e) || isalpha(*e))
					{
						e++;
					}
				}
				if(*e == '(' || '{' || '[')
				{
					push(*e);
					e++;
				}
				if(*e == ')' || '}' || ']')
				{
					pop();
					e++;
				}
			}
		}
		void display_Stack()
		{
			
			if(empty1())
			{
				cout<<"expression  does not contains matching grouping symbol";
			}
			else
			{
				cout<<"expression contains matching grouping symbol";
			}
		}	
};
int main()
{
	char exp[10] ;
	Stack<char> obj;
	cout << "Enter an expression : " ;
	cin.getline( exp, 10) ;
	obj.input(exp);
	obj.found();
	obj.display_Stack();
}
