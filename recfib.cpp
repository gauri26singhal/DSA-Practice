#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1)
    return n;

    else
    return fib(n-1)+fib(n-2);
}
int fibsum(int n){
    if(n==0)
    return 0;

    else
    return fib(n)+fibsum(n-1);
}

int main(){
    int n;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    int sum=fibsum(n-1);
    cout<<"the sum of n terms are : "<<sum<<endl;

    return 0;
}

