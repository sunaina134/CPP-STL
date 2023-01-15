#include<iostream>
using namespace std;
void bubblesort(int arr[50],int m){
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-1-i;j++){

if(arr[j]>arr[j+1]){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;


}
        }
    }

}

        


int main(){
    int n;
    int arr[50];
    cout<<"enter the number of elements";
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"array before";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    bubblesort(arr,n);
    cout<<"array after ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}



