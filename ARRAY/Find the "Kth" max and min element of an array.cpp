#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    
    int arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<num; i++)
    {
        cout<<arr[i];
    }
    
    sort(arr, arr+num);
    
    for(int i=0; i<num; i++)
    {
        cout<<arr[i];
    }
    
    int k;
    cin>>k;
    
    int i= k;
    
    for(int i=0; i<num; i++)
    {
        cout<<arr[k];
    }
}
