#include <iostream>
using namespace std;

int main(){
    int a,b,r = 1;
    cin>>a>>b;
    if(b!=0){
        do{           //  |
            r = a%b;  //  |
            a = b;    //  | => Algoritmul lui Euclid
            b = r;    //  |
        } while(r);   //  |
    }
    else{
        if(a == 0) a = -1;
    }
    cout<<a<<"\n";
}