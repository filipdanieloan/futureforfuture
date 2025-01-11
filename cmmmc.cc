/*
                            Aici ma folosesc de doua formule:

    1. Algoritmul lui Euclid, pe care l-am folosit sa aflu cmmdc in fisierul cmmdc.cc, si
    2. [a,b] = a*b/(a,b)
*/

#include <iostream>
using namespace std;

int main(){
    int a,b,m,n,cmmmc;
    cin>>a>>b;
    //aici fac copii la a si b in m si n ca sa folosesc la a*b/(a,b), care acum se transforma in m*n/(a,b)
    m = a;
    n = b;
    
    //Algoritmul lui Euclid
    int r = 1;
    do{
        r = a%b;
        a = b;
        b = r;
    } while(r);
    //acum cmmdc-ul este in a
    cmmmc = m*n/a;
    cout<<cmmmc<<"\n";
}