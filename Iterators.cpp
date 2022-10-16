#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v={10,20,30,40,50};
    vector<int>::iterator i=v.begin();
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i=next(i);
     cout<<(*i)<<" ";

    i=v.end();
i--;
cout<<(*i)<<(*i)<<"";
return 0;
}



// | | | | |
// b         e

// begin 
// end 
// prev
// next 
// advance




//member access iterator to vector random access, big(o);
//pointer airthmetic we can do

