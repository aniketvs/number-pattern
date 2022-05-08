#include <bits/stdc++.h>
using namespace std;
int hextodec(string n){
    int s=0;int k=1;
   int l=n.size();
   for (int i = l-1; i >=0; i--)
   {
     if(n[i]>='0'&&n[i]<='9'){
          s+=k*(n[i]-'0');
     }
    else if (n[i]>='A'&&n[i]<='F')
    {
      s+=k*(n[i]-'A'+10);
    }
    k=k*16;
    
   }
   
return s;
}
int main(int argsc, char const *argv[])
{
    string n;
    cin>>n;
    cout<<hextodec(n);
    return 0;
}

