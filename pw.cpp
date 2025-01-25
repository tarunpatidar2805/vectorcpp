#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int a;
     cout<<"enter targer sum";
    cin>>a;
    vector<int>v;
    int n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter element of array";
    int q;
    cin>>q;
    v.push_back(q);
}
for(int i=0;i<=n-2;i++){
    for(int j=i+1;j<n-1;j++){
        if(v[i]+v[j]==a){
            cout<<"i="<<i<<"  "<<"j="<<j;
        }
    }
}
   
    return 0;
    
}
