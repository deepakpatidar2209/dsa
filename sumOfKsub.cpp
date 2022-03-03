#include<iostream>
#include<vector>
using namespace std;
//TO PRINT ALL SEQUENCE WHOSE SUM IS K
//void fn(int ind,vector<int>& ds,int ar[],int n,int sum,int s){
//     if(ind==n){
//       //  int sum;//
//         if(s==sum){
//         for(auto it:ds){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         }return;
//     }
//     ds.push_back(ar[ind]);
//     s+=ar[ind];
//     fn(ind+1,ds,ar,n,sum,s);
//     ds.pop_back();
//     s-=ar[ind];
//     fn(ind+1,ds,ar,n,sum,s);
// }
//TO PRINT THE ANY  SEQUENCE WHOSE SUM IS K
// bool fn1(int ind,vector<int>& ds,int ar[],int n,int sum,int s){
//     if(ind==n){
//     //when condition is satisfied.
//     if(s==sum){
//     for(auto it: ds)cout<<it<<" ";
// cout<<endl;
// return true ;

// }
// //if condition were not met
// else return false;}
// ds.push_back(ar[ind]);
// s+=ar[ind];
// if(fn1(ind+1,ds,ar,n,sum,s)==true)
// {
//     return true;}
// ds.pop_back();
// s-=ar[ind];
// if(fn1(ind+1,ds,ar,n,sum,s)==true) return true;
// return false;
// }
//TO COUNT THE NUMBER OF SEQUENCES WHOSE SUM IS K
int fn2(int ind,int ar[],int sum, int s,int n)
{
    if(ind==n){
        if(s==sum){
        return 1;}
        else return 0;
    }
    s+= ar[ind];
int l=fn2(ind+1,ar,sum,s,n);
s-=ar[ind];
int r=fn2(ind+1,ar,sum,s,n);
return l+r;
}



int main(){
    int ar[]={1,2,1};
    int n=3;
    int sum=2;
    //vector<int> ds;
   // fn(0,ds,ar,n,sum,0);
     // fn1(0,ds,ar,n,sum,0);
     cout<<fn2(0,ar,sum,0,n);
      return 0;
}
