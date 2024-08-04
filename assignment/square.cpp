#include<iostream>
using namespace std;
int square(int n){
    int df=1;
    for(int i=1;i<=n;i++){
        df=i;
        df*=i;
        cout<<df<<endl;
    }
    return df;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    square(n);
}