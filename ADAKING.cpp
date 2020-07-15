#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){

    int testcase; cin>>testcase;
    while(testcase--){
        int N; cin>>N;
        int K = 0;
        if(N>8){
                K = N%8;
                }
        for(int i=0; i<8;i++){
            for(int j=0; j<8;j++){
                
                if(i == 0 && j==0){
                        cout<<"O";
                }
                else if(N<=8){
                    if(i == 0+N || j == 1){
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
                else if(8<N && N<16 && j>0){
                    if(i >= 0+K || j == 2)
                    {
                    cout<<"X";
                    }
                    else
                    {cout<<".";
                    }
                    
                }
                else if(16<=N && N<24 && j>1){
                    if(i >= 0+K || j == 3)
                    {
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
                else if(24<=N && N<32 && j>2){
                    if(i >= 0+K || j == 4)
                    {
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
                else if(32<=N && N<40 && j>3){
                    if(i >= 0+K || j == 5)
                    {
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
else if(40<=N && N<48 && j>4){
                    if(i >= 0+K || j == 6)
                    {
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
                else if(48<=N && N<56 && j>5){
                    if(i >= 0+K || j == 7)
                    {
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
                else if(56<=N && N<64 && j>6){
                    if(i >= 0+K)
                    {
                    cout<<"X";
                    }
                    else
                    {
                        cout<<".";
                    }
                    
                }
                else{
                        cout<<".";
                }
            }
            cout<<endl;
        }


    }
}