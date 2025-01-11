#include <iostream>
using namespace std;

int main(){
    int sus,jos,a,b;
    cin>>sus>>jos;
    a = sus;
    b = jos;
    int r = 1;
    do{
        r = a%b;
        a = b;
        b = r;
    } while(r);
    cout<<sus<<"/"<<jos<<" = "<<sus/a<<"/"<<jos/a<<"\n";
}