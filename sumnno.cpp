#include<iostream>
using namespace  std;
int sum(int n){
        int k=(n*(n+1))/2;
        return k;
}
 int main(int argc, char const *argv[])
 {int n;
 cin>>n;
 int a=sum(n);
 cout<<a;
     
     return 0;
 }
 