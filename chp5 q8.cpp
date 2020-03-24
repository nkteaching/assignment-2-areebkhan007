#include <bits/stdc++.h> 
using namespace std; 
int product(int x, int y) 
{ 
    if (x < y) 
        return product(y, x); 
    else if (y != 0) 
        return (x + product(x, y - 1)); 
  
    
    else
        return 0; 
} 
int add(int x, int y)    
{
    if(y==0)
        return x;
    else
        return(1+add(x,y-1));

}
int subtract(int x, int y)     
{
    if(y==0)
        return x;
    else
        return(subtract(x-1,y-1));

}

int main() 
{ 
    int x = 5, y = 2; 
    cout << product(x, y); 
    cout<<add(x,y);
    cout<<subtract(x,y);
    return 0; 
} 
