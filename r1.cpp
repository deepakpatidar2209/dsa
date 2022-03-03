#include<iostream>
using namespace std;
//  int count=0;
// void fn(){
   
//     if(count==4) return; 
    
//     cout<<count<<endl; 
//     count++;
//     fn();
// }
// using iterative method 
// void fn()
// {int n;
// cout<<"enter no.of times yu wanna print name :";
// cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"deepak"<<endl;
//     }
// }
//print name n times  using resursion method
// int count=0;
// int N;
// void fn()
// {
//     if(count<=N)return;
//     cout<<"deepak"<<endl;
//     count++;
//     fn();
// }
// print n to 1 usinng recursion
// 
// void fn(int i,int n){
//     if(i<n)return;
//     cout<<i<<endl;
//     fn(i-1,n);
// }
//  void fn(int i,int n){
//     if(i>n)return;
//     fn(i+1,n);
//     cout<<i<<endl;
//  }
// int main()
// {
//     int n;
//     cin>>n;
// fn(1,n);


// }
// 
int fn(int n){
    if(n<=1)return n;
    int last=fn(n-1);
    int slast=fn(n-2);
    return last + slast;
}
int main(){
    int n;
    cin>>n;
    cout<<fn(n);
}