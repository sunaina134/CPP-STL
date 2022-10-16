#include<iostream>
using namespace std;
template<typename T>
T myMax(T x,T y){
    return(x>y)?x:y;
}
int main(){
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<char>('c','g')<<endl;
    return 0;
}

// template(typename T>
// T arrMax(T arr[],int n))
// {
//     T res=arr[0];
//     for(int i=1;i<n;i++)
//     if(arr[i]>res)
//     res=arr[i];
//     return res;
// }
// int main(){
//     int arr[]={10,40,3};
//     cout<<arrMAx<int>(arr,3);
//     return 0;
// }