#include<iostream>
using namespace std;

int gcd(int n, int m);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int n, int m){
    if(n % m == 0) return m;
    else return gcd(m, n%m);
}
