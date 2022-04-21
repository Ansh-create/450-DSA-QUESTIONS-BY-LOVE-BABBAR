#include<iostream>
using namespace std;
int main()
{
  char day;
  cin>>day>>endl;
  if(day==monday || day==wednesday || day== friday){
    
    cout<<'5000';
  }
  else if (day=tuesday || day==thursday){
    cout<<'4000';
  }
  else{
    cout<<'10000';
  }
  return 0;
}
    
