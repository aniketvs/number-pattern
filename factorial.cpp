#include <iostream>
using namespace std;
int fact(int n){
    int s=1;

for (int i = 1; i <=n; i++)
{
    s=s*i;
    
}
return s;

}
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    cout<<fact(a)<<endl;

    return 0;
}
