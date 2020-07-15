#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

long long int nonRepeating(long long int arr[],long long int n) 
{   
    long long int xor_arr = 0; 
    for (int i = 0; i < n; i++) 
    {  
        xor_arr = xor_arr ^ arr[i]; 
    } 

    return xor_arr; 

} 

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	
	while(testcase--)
    {
      signed long int n;
        scanf("%ld",&n);
        
        long long int total=(4*n)-1;
        long long int arr1[total],arr2[total];
         
        
        for(int i=0;i<total;i++)
        {
            long long int x,y;
            scanf("%lld",&x);
            scanf("%lld",&y);
           arr1[i] = x;
           arr2[i] = y;
        }
        
        printf("%lld %lld \n" , nonRepeating(arr1,total), nonRepeating(arr2,total));       
    } 
	
return 0;}