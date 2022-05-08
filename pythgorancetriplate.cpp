#include<iostream>
using namespace std;
bool triplate(int a,int b,int c){
    int x=max(a,max(b,c));
    int y,z;
    if (x==a)
    {
       y=b;
       z=c;
    }
    else if (x==b)
    {
        y=a;
        z=c;
    }else {
        y=a;
        z=b;
    }
    
    x=x*x;
    y=y*y;
    z=z*z;
    int d=y+z;
    if (x==d)
    {
      return true;
    }
    else{
        return false;
    }
    
}
int main(int argc, char const *argv[])
{
    int x,y,z;
    cin>>x>>y>>z;
    bool k=triplate(x,y,z);
    if (k)
    {
       cout<<"it is triplate";
    }
    else{
        cout<<"sorry";
    }
    
    return 0;
}
