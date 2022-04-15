#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    
    int arr[num];
    for(int i =0; i<num; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<num; i++)
    {
        cout<<arr[i];
    }
    
    sort(arr.begin(), arr.end());
    for(i=0; i<num; i++)
    {
        cout<<arr[i];
    }
    
    int abc;
    cin>>abc;
    
    int xyz[abc];
    for(int j =0; j<abc; j++)
    {
        cin>>xyz[j];
    }
    
    for(int j=0; j<abc; j++)
    {
        cout<<xyz[j];
    }
    sort(xyz.begin(), xyz.end());
    for(j=0; j<abc; j++)
    {
        cout<<xyz[j];
    }
    
}
