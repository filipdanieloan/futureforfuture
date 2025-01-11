#include <iostream>
using namespace std;

int main(){
    int n, ok = 0;
    cin>>n;
    for(int i = 2; i*i<=n && ok==0; ++i){ // fac pana la radical ca sa minimizez timpul
        if(n % i == 0) ok = 1;
    }
    if (ok==0 && n!=1 && n!=0 && n!=-1)
    {
        cout<<"Este prim \n";
    }
    else if (n == 1 || n == 0 || n == -1)
    {
        cout<<"Nu e prim, nici compus \n";
    }
    else cout<<"Este compus \n";
    
    
}