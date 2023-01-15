// Dynamic size
// rich library function
// easy to know size bt int n=v.size();
// no need to pass size
// they can be returned from function
// By default initilized with default values. 0 or false but in array there are random values.
//we can copy a vector to other easily but in case of array we need to run a function.
#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(10);
//     //for(int$x:v)
//     // x=6;
//     //run for loop and get 6

// for(int i=0;i<v.size();i++){//for(int x:v)cout<<x;
//     cout<<v[i]<<" ";//use v.at(i) for when accessing index out of bound;
//     return 0;
// }
// }





// int main(){
//     int n=3,x=10;//[10,10,10,....]
//     vector<int> v(n,x);
//     for(auto it=v.begin(),it!=v.end();it++){
//         cout<<(*it);
//         return 0;
//     }
// }


int main(){
    vector<int> v[10,3,5,8];
    v.pop_back();
    for(int x:v){
        cout<<x;
    }
    return 0;
}