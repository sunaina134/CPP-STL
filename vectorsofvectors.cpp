#include<bits/stdc++.h>
using namespace std;
void printv(vector<pair<int,int>> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<v[i].second<<endl;

    }
}


int main(){
    vector<pair<int,int>>v;//v={{1,2},{2,5}}
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});//put in the pair
    }
printv(v);
}