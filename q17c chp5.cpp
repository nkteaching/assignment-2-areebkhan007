#include<iostream>
using namespace std;
int remove(char ch,string s,int i,int size)
{
	if(i==size)
	{
		return 0;
	}
	else
	{
		if(s[i]==ch)
		
		{
		s[i]==NULL;
		
	}
else
	remove(ch,s,i+1,size);}
}
int main()
{
	remove('a',"areeb",0,5);
}
