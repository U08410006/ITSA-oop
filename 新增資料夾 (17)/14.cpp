#include <iostream> 
using namespace std;
#include <stdio.h>
int gcd(int a, int b){
    //a>b
    if(b == 0)  return a;
    else        return gcd(b,a%b);
}

int main(){
    int a,b;
    while(cin >> a >> b){
        cout << gcd(a,b) << "\n";
    }
}