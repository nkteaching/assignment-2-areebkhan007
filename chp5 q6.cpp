#include<iostream>
using namespace std;
void func(unsigned long n)
{
	const unsigned int t=1000;
	if(n<t)
	{
		cout<<n;
	}
	else
	{
	
	int r=n%t;
	func(n/t);
	cout<<","<<r;
}
}
int main()
{
	const int n=123456789;
	func(n);
}
