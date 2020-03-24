#include <iostream>
using namespace std;

void checkPalindrome(char str[], int b,  int f, bool check)
{	
	if(b!=0)
	{
		if(str[b] == str[f])
		{
			checkPalindrome(str, --b, ++f, true);
				
		}
		
		else
		{
			checkPalindrome(str, --b,  ++f, false);
				
		}
			
	}
	
	else
	{
		if(check)
		{
			cout << "Yes it's palindrome";
		}
		
		else
		{
			cout << "it's not a palindrome";
		}
	}

}

int main()
{
	int n;
	
	cout << "Enter size of string: ";
	
	cin >> n;
	
	char s[n];
	
	cout << "Enter string: ";
	
	for(int i = 0;i < n;i++)
	{
		cin >> s[i];
	}
	
	checkPalindrome(s, n - 1, 0, true);
}
