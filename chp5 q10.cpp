#include<iostream>
#include<cmath>
using namespace std;


double s(int s1,double s2,double sum)
{
	if(s1<s2)
	{
	return sum;
	}
	else
	{
		if(s2==1)
		{
			sum=1;
		}
	 else if(fmod(s2,2)==0)
	{
		sum=sum+(1/s2);
	}
	else 
	{
		sum=sum-1/s2;
	}
	return s(s1,s2+1,sum);
}}

 int main()
{
	
	cout<<s(8,1,0.0);
	
}
