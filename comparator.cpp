#include <bits/stdc++.h>
using namespace std;
// bool shud_i_swap(int a,int b){//can be used in many ways
//     if(a<b) return true;
//     return false;
//}
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first)
        return a.first<b.first ;//used in customized sorting
        return a.second>b.second;
    
}
int main(){
int n;cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}    
sort(v.begin(),v.end(),cmp);
for(int i=0;i<n;i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
    return 0;
}