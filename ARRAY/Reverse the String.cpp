#include<bits/stdc++.h>
using namespace std;
int main()
{
    char abc[100];
    cout<<"enter the string  ";
    cin.get(abc,100);
    cout<<"you entered  "<<abc<<endl;
    
    string str = abc;
    
    reverse(str.begin(), str.end());
    cout<<str;
    
    
   
    return 0;
}
