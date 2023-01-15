#include<iostream>
using namespace std;
#include<forward_list>
int main(){
    forward_list<int> l={10,20,30};//ot l.assign({10,20,30});
    //forward_list<int> l2; l1.assign(l.begin(),l.end());
    l.push_front(10);
    l.push_front(11);
    l.pop_front();
    for(int x:l){
        cout<<x<<" ";
    }
    return 0;

}