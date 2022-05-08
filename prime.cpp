#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    bool f=0;
    cout<<"enter a no.";
    cin>>n;
  for (int i = 2; i <sqrt(n); i++)
  { if (n%i==0){
      cout<<"it is not a prime no";
      f=1;
      break;
  }
  }
  if (f==0)
  {
    cout<<"prime no";
  }
  
  
    return 0;
}
