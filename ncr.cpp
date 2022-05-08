#include<iostream>
using namespace std;
int ncr(int n,int r){
    int s=1;

for (int i = 1; i <=n; i++)
{
    s=s*i;
    
}
int k=1;
for (int i = 1; i <=r; i++)
{
    k=k*i;
    
}
int p=1;
for (int i = 1; i <=(n-r); i++)
{
    p=p*i;
    
}
int l=s/(k*p);
return l;

}
int main(int argc, char const *argv[])
{int n,r;
cin>>n>>r;
cout<<ncr(n,r)<<endl;
    
    return 0;
}
