#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter the length of array"<<endl;
    cin>>num;
    
    int abc[num];
    for(int i=0;i<num;i++){
        cin>>abc[i];
    }
    
    cout<<"display the array ";
    for(int i=0;i<num;i++){
        cout<<abc[i];
    }
    
    
    reverse(abc, abc+num);
    for(int i=0; i<num; i++){
    cout<<abc[i];
    }
    
    return 0;
}


