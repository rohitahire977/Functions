#include<iostream>
using namespace std;
int odd(int a,int b){
    for(int i=min(a,b);i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;;
        }
    }
}
int main(){
    int a;
    cout<<"enter first number:";
    cin>>a;
    int b;
    cout<<"enter second number:";
    cin>>b;
    odd(a,b);
}