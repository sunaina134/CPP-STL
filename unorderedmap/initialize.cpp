//based on hashing
//map store in ordered form
//in unordered map no order is there so insewrt delete are )(1);
#include<iostream>
#include<unordered_map>m;
using namespace std;
int main(){

    unordered_map<string,int> m;
    m["ghi"]=20;
    m["hji"]=60;
    m.insert({"naina",13});
    for(auto x:m)
    cout<<s.first<<" "<<x.second<<endl;
    return 0;
}
//any output can be there in any order
//use find to search
if(m.find("ide")!=m.end()){
    cout<<"found";
}
auto it=m.find("ide");
if(it!=m.end()){
    cout<<(it->second);
}


//erase,found

begin,end,size,empty--O(1) worst case;
count,find,erase,insert,[],at--O(1) average


