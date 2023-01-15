#include<iostream>
using namespace std;
int main(){
    set<int> s;//set<int,greater<int>>s descending order
    s.insert(10);
    s.insert(15);
for(auto it=s.begin();it!=s.end();it++){
    cout<<(*it)<<" ";
}
return 0;
}
//find();
auto it=s.find(10);
//erase
//clear
//count

//set doesnot contain duplicate
int main(){
    set<int> s;
    s.insert(10);
    auto it=s.lower_bound(10);//if not present then just greater thn 10
    if(it!=s.end())
    cout<<(*it);
    
}


//upperbound is a member function
//return just greater elemt thn if not present
//if prest-next element;
//greater thn gretest thn -s.end()is returned;


//tc of set
//built on top of self balancing binary search tree (red black tree)height-logn or o(h) search insert delete;
// beg ,end ,c.begin,r.begin,size,empty-O(1);
// insert ,find,count,lowerbound,upperbound,erase-O(log)
//doubly ended priorty ques
//s.begin -smallest element in a set

