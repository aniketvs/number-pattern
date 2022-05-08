#include <iostream>
#include <cmath>
using namespace std;
 int main(int argc, char const *argv[])
 {
     int n;
     cin>>n;
     int k;
     int sum=0;
    while (n>0)
    { k =n%10;
       sum = sum*10 + k;
       n=n/10;}
     cout<<sum;
     return 0;
 }
 