#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 
   

bool checkPalindrome(string str) 
{ 
    int a = 0, b = str.length(); 
   
    
    for (int i = 0; i < b; i++) 
        str[i] = tolower(str[i]); 
   
    
    while (a <= b) { 
   
        
        if (!(str[a] >= 'a' && str[a] <= 'z')) 
            a++; 
   
        
        else if (!(str[b] >= 'a' && str[b] <= 'z')) 
            b--; 
   
         
        else if (str[a] == str[b]) 
            a++, b--; 
   
         
        else
            return false; 
    } 
   

    return true; 
} 
   

int main() 
{ 
    string str = "Too hot to hoot"; 
   
    if (checkPalindrome(str)) 
        cout << "Sentence is palindrome."; 
    else
        cout << "Sentence is not palindrome."; 
   
    return 0; 
} 
