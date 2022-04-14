#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the length of array";
    cin>>num;
    
    int abc[num];
    for(int i=0; i<num; i++)
    {
        cin>>abc[i];
    }
    cout<<"before sorting \n";
    for(int i=0; i<num; i++)
    {
        
        cout<<abc[i];
    }
    cout<<"\n";
    sort(abc, abc+num);
    
    cout<<"After sorting \n";
    for(int i=0; i<num; i++)
    {
        cout<<abc[i];
        
        
    }
    
    
}
