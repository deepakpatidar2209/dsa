#include<iostream>
#include<vector>
using namespace std;
void fn(int ind,vector<int> &ds,int ar[],int n){
    if(ind==n){
        for(auto it:ds){
        cout<<it<<" ";
        }
        if(ds.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }
    //to pick or take the particular index into subsequence
    ds.push_back(ar[ind]);
    fn(ind+1,ds,ar,n);
    //do not pick or not take , this is not added to your subsequences
    ds.pop_back();
    fn(ind+1,ds,ar,n);
    
}

int main(){
   
    int ar[]={3,2,1}; int n=3;
// for(int i=0;i<n;i++){cin>>ar[i];}
    vector<int> ds;
    fn(0,ds,ar,n);

}
