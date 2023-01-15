#include<iostream>
#include<unordered_set>
using namespace std;
//un set is based on hashing and set on red black tress

int main(){
    unordered_aet<int> s;
s.insert(10);
s.insert(11);
for(auto it=s.begin();it!=s.end();it++){
    cout<<(*it);
}
cout<<s.size();
//count(0,1)only 
//find return iterator;
}