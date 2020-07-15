#include <iostream>
using namespace std;
unsigned long long int result(unsigned long long int num){
    unsigned long long int ans=0;
    while(num!=0)
    {
        unsigned long long int div;
        div=num%10;
        ans=ans+div;
        num=num/10;
    }
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	   int p1=0;
	   int p2=0;
	    for(int i=0;i<n;i++)
	    { unsigned long long int chef,morty;
	    unsigned long long int sum1;
	     unsigned long long int sum2;
	        cin>>chef;
	        cin>>morty;
	        
	           if(chef<10)
	             sum1=chef;
	           else
	            sum1=result(chef);
	            
	            if(morty<10)
	             sum2=morty;
	            else 
	              sum2=result(morty);
	              
                     if(sum1==sum2)
	               { p1=p1+1;
	                p2=p2+1;
	               }
	               else if(sum1>sum2)
	               {p1=p1+1;
	                   p2=p2+0;
	               }
	               else
	               {
	                   p1=p1+0;
	                   p2=p2+1;
	               }
	              
	        
	    }
	    if(p1>p2){ cout<<"0 "<<p1<<endl;}
	      
	      else if(p1<p2){ cout<< "1 "<<p2<<endl;}
	      else cout<<"2 "<<p1<<endl;
	      
	      
	    
	}
	return 0;
}
