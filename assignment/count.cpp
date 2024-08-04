#include<iostream>
using namespace std;
//count no.of digits and square of this no.
int count(int n){
    int ans=0;
        while(n>0){
            ans++;
            n/=10;
        
       }   cout<<"the given no. is"<<ans<<"digit"<<endl;   
    
    return ans;
}
int square(int n){
    int y=n*n;
    return y;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    count(n);
    cout<<square(n);
}