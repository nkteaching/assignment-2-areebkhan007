
#include<iostream>
using namespace std;
int check(char ch,string s,int i,int size)
{
	if(i==size)
	{
		cout<<"not found";
		return -1;
		
	}
	else
	{
	if(s[i]==ch)
	{
		cout<<"found";
		return 1;
		
	}
	}
	check(ch,s,i+1,size);
}
int main()
{
	check('areeb',"areeb jamal",0,5);
}
