#include <iostream>
using namespace std;
int octtodec(int n){
    int s=0;int i=1;
    while (n>0){
    {
       int k=n%10;
        s+=i*k;
        i*=8;
        n/=10;
        
       
    }
    
}return s;
}
int main(int argsc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<octtodec(n);
    return 0;
}

