#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int main()
{
  int temp;
  cout<<"enter the size of the array"<<endl;
  int arr[MAX];
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    arr[i]=rand();
  }
  for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      if(arr[j]<arr[i]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }  
  for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
