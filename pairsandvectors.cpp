#include<bits/stdc++.h>
using namespace std;
// int main(){
//     pair<int,string> p;
//     // p=make_pair(2,"abc");
//     p={2,"abcd"};
//     cout<<p.first<<" "<<p.second<<endl;
// //use to maintain relation between arrays
// int a[]={1,2,3};
// int b[]={2,3,4};
// _STL_PAIR_H<int,int>p_array[3];
// p_array[0]={1,2};
// p_array[1]={2,3};
// p_array[2]={3,4};
// swap(p_array[0],p_array[2]);
// for(int i=0;i<3;i++){
//     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
// }
// }


//////////////////////////////////////////////////
//vectors
void printv(vector<int>v){
    for(int i=0;i<v.size();i++){ //size tc-O1
cout<<v[i]<<endl;
    }
}


int main(){
    vector<int> v; //vector<int> v(5,4);5 size vector all values are 3
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);//value at end TC:0(1)
    }
printv(v);
vector<int> v2=v;//copy vector v in v2 tc:O(n) instead of this pass ref int print fuction
}
//pop_back rmv last O(1)





