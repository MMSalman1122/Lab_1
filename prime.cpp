#include <iostream>
using namespace std;
int main()
{ int num1;
  cout<<"Enter the number :"<<endl;
  cin>>num1;
  if(num1==0 || num1==1 || num1==2 )
  {
    cout<<"Number is prime"<<endl;
    return 0;
  }
  else
  {int indicator=0;
    for(int i=2;i<num1;i++)
  {
    if(num1%i==0)
    {
      cout<<"Number is not prime."<<endl;
      indicator=indicator+1;
      break;
    }

  }
  if(indicator==0)
  {
    cout<<"Number is prime."<<endl;
  }
}
  return 0;
}
