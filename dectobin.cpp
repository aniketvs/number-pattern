#include <bits/stdc++.h>
using namespace std;

int dectobin(int n){
    
 
   
    int i = 0; int k;

    while (n > 0) {
 
       k = n % 2;
       i=i*10+k;
        n = n / 2;

       
    }
     
     int sum=0;
    while (i>0)
    { k =i%10;
       sum = sum*10 + k;
       i=i/10;}
       if(n%2==0){
           sum=sum*10;
       }
  return sum;

}
int dectooct(int n){
     int i = 0; int k;

    while (n > 0) {
 
       k = n % 8;
       i=i*10+k;
        n = n / 8;

       
    }
     
     int sum=0;
    while (i>0)
    { k =i%10;
       sum = sum*10 + k;
       i=i/10;}
       
  return sum;

}
void dectohex(int n){
  char s[100];
    int k;
    int i=0;
    while (n!=0)
    {   k=n%16;
       
        if(k>=0&&k<=9){
            s[i]=k+48;
            i++;
        }
        else
        if (k>9&&k<=16)
        {
        s[i]=k+55;
        i++;
          
        }
        n=n/16;
        
}
    for (int j = i-1; j >=0; j--)
    {
        cout<<s[j];
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
   cout << dectobin(n)<<endl;
     cout << dectooct(n)<<endl;
      dectohex(n);
    return 0;
}
