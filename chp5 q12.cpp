

#include<iostream>
using namespace std;



		int	cubes(int	n)
			{			
			if(n==0)
			return 1;
			else
		     return (n+cubes(n-2));
	}
		int main()
		{
			cout<<cubes(4);
		}
