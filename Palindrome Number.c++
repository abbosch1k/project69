#include <iostream>
using namespace std;

int main() {
    int n, r=0,t;
    cin >> n;
    t=n;

    while(n>0){
        r=r*10+n%10;
        n/=10;
    }

    if(t==r) cout << "Yes";
    else cout << "No";
}
