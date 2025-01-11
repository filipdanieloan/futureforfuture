#include <iostream>
using namespace std;

int main() {
    int n, t1 = 1, t2 = 1, tUrmator = 0;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        tUrmator = t1 + t2;
        t1 = t2;
        t2 = tUrmator;
        
        cout << tUrmator << " ";
    }
    cout<<"\n";
}
