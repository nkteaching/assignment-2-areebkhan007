#include<iostream>
using namespace std;
int check(char ch,string s,int n,int i,int size)
{
	if(i==size)
	{
		cout<<n;
		//return 0;
		
	}
	else
	{
	if(s[i]==ch)
	{
		n+1;
		
	}
	}
	check(ch,s,n,i+1,size);
}
int main()
{
cout<<check('a',"areeb jamal",5,0,5);
}
