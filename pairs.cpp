#include<utility>
#include<iostream>
using namespace std;
int main(){
    pair<int,int>p1(10,20);
    //p1={10,20};
    pair<int,string>p2(10,"gfg");
    cout<<p1.first<<""<<p1.second<<endl;
    cout<<p2.first<<""<<p2.second<<endl;
}
//comparison operation on pairs
//p1==p2
