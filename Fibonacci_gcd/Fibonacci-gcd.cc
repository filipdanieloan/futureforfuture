#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("fibo_gcd.in");
ofstream fout("fibo_gcd.out");

long long int t1=1,t2=1,tUrmator,n,x,y,r;
int cnt;

int main(){
    fin>>n;
    for(int i = 1; i<=n; ++i){
        fin>>x>>y;
        r = 1;
        do{
            r = x%y;
            x = y;
            y = r;
        } while (r);
        if(x == 1 || x == 2) ++cnt;
    }
    fout<<cnt<<"\n";
}