#include <iostream>
using namespace std;
int main() {
    double i=1;
    int n=0;
    
    while(i+1>i) {
        n++;
        i=10*i;
    }
    cout << n;
}
