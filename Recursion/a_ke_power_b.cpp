#include<iostream>
using namespace std ;
int power(int a , int b){
    if(b==0) return 1 ; 
    return a*power(a,b-1);

}
int main(){
    int a ,b ;
    cout<<"enter first number : ";
    cin>>a ;
    cout<<"enter second number : " ;
    cin>>b ;
    int ans = power(a,b);
    cout<<ans ; 
    return 0 ;
}