#include <iostream>
using namespace std;

int main(){
    long long int n, S = 0, i;
    cin>>n;
    for(i = 1; i*i<=n; ++i){ // fac pana la radical ca sa minimizez timpul
        if(i*i == n) S+=i;  // in acest caz i == n/i, deci adaug doar i ca sa nu apara acelasi numar de doua ori in suma (vezi randul 10)
        else if(n % i == 0) S+=(i+n/i); // aici adaug si i, si n/i ca sa iau suma din ambele parti, minimizand timpul de rulare
    }
    cout<<S<<"\n";
}