#include <iostream>
using namespace std;

long long int n,factorial=1;

int main(){
    cin>>n;
    for(int i = 1; i<=n; ++i){
        factorial*=i;
    }
    if(n == 0) factorial = 1;
    cout<<factorial;
}