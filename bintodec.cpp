#include <iostream>
using namespace std;
int bintodec(int n){
    int s=0;int i=1;
    while (n>0){
    {
       int k=n%10;
        s+=i*k;
        i*=2;
        n/=10;
        
       
    }
    
}return s;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<bintodec(n);
    return 0;
}

