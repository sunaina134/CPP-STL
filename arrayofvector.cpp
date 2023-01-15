#include<bits/stdc++.h>
using namespace std;
void printv(vector<int> &v){
    cout<<v.size();
    for(int i=0;i<v.size();i++){ //size tc-O1
cout<<v[i]<<endl;
    }
}


int main(){
    int n;
    cin>>n;//number of vectors
    vector<int> v[n];
    for(int i=0;i<n;i++){
        int N;
        cin>>N;//inputting vector;
        for(int j=0;i<N;i++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        printv(v[i]);
    }
    
}