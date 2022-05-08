#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int k;
    int sum=0;
    cin>>n;
    int j=n;
    for (int i = 0; i < 3; i++)
    {k=n%10;
     k=k*k*k;
     sum=sum+k;
     n=n/10;
     
    }
     if(j==sum){
        cout<<"woo the no. is armstrong no.";
     }
     else{
         cout<<"sorry number is not a armstrong no.";
      }
    
    
   
    
    return 0;
}
