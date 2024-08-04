#include<iostream>
using namespace std;
//radius as input and gives area of circle.
int area(int r){
    int y=3.14*r*r;
    return y;
}
int main(){
    int r;
    cout<<"enter radius of circle:";
    cin>>r;
    cout<<area(r);
}