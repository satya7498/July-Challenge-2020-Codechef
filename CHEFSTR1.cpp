#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	cin>>t;
	if(t>=1 && t<=10){
      	while( t--){
	    unsigned long int n;
	    cin>>n;
	    if(n>=2){
	    unsigned long int arr[n];
	    
	    for(unsigned long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    unsigned long int sum=0;
	    for(unsigned long int x=1;x<n;x++)
	         { if(arr[x-1]!=arr[x]){
	               if(arr[x-1]>arr[x])
	           
	        
	               sum=sum+((arr[x-1]-arr[x])-1);
	        
	                else
	               sum=sum+((arr[x]-arr[x-1])-1);}
	    }
	    cout<<sum<<endl;
	}}}
	return 0;
}
