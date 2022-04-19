#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    
    char op;
    cout<<"enter the operation"<<op;
    cin>>op;
    
    switch(op)
    {
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-': cout<<(a-b)<<endl;
                  break;
        case '*': cout<<(a*b)<<endl;
                  break;
        case '/': cout<<(a/b)<<endl;
                  break;
        case '%': cout<<(a%b)<<endl;
                  break;
        default: cout<<"please enter the valid operation";
        
    }

    return 0;
}
