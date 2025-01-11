//Aici folosesc Alg. Euclid ca sa aflu cmmdc si sa spun daca este egal sau nu cu 1.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    //Algoritmul lui Euclid
    int r = 1;
    do{
        r = a%b;
        a = b;
        b = r;
    } while(r);
    //cmmdc este in a
    if(a == 1) cout<<"PIE\n";
    else cout<<"NOPIE\n";
}