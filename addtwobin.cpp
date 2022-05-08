#include <iostream>
using namespace std;
int reverse(int n){
    int s=0;
    int k;
    while (n>0)
    {
        k=n%10;
        s=s*10+k;
        n=n/10;
    }
    return s;
}
int addtwobin(int a,int b){
    int s=0;
    int p=0;
    while (a>0&&b>0)
    {
        if (a%2==0&&b%2==0)
        {
            s=s*10+p;
            p=0;
        }
        else
        if ((a%2==0 && b%2==1)||(a%2==1&&b%2==0))
        {if (p==0)
        {
            s=s*10+1;
        }
        else{
            s=s*10+0;
            p=1;
        }
        
        }
        else{
            if(p==1){
                s=s*10+p;
                p=1;
            }else{
                s=s*10+0;
                p=1;
            }
        }
        a=a/10;
        b=b/10;
    }
    while (a>0)
    {
       if(p==1){
           if(a%2==0){
               s=s*10+1;
               p=0;
           }
           else{
               s=s*10+0;
               p=1;
           }
           
       }
       else{
           s=s*10+(a%2);
       }
       a/=10;
    }
     while (b>0)
    {
       if(p==1){
           if(b%2==0){
               s=s*10+1;
               p=0;
           }
           else{
               s=s*10+0;
               p=1;
           }
           
       }
       else{
           s=s*10+(b%2);
       }
       b/=10;
    }
    if (p==1)
    {
      s=s*10+1;
      p=0;
    }
    
    s=reverse(s);
    return s;
    
}
int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    cout<<addtwobin(a,b);
    return 0;
}
