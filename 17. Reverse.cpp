#include <stdio.h> 
#include <string.h> 
//author : Mohammad Ibadul Haqqi

int main() 
{ 
   int n,t; 
   char arr[1100]; 
  
   gets(arr); //input kata 
    
    n= strlen(arr); 
    for(t=n-1;t>=0;t--) 
    printf("%c", arr[t]); //print dr blkg 
   printf("\n"); 
} 
