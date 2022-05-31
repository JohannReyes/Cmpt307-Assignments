
#include <iostream>
#include "nCr.h"
#include "kth.h"


using namespace std;


void testchoose(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            cout << nCr(i, j) << ' ';
        }
        cout << endl;
    }
} // testchoose
 


int main () {
    int m, n;
    unsigned long long k;
    unsigned long long space;


    // testchoose(10);
  
 
    // Input routine: m, n, k
    cout << "How many 0s? ";
    cin >> m;
    cout << "How many 1s? ";
    cin >> n;

    space = nCr(m+n,n);

    cout << "Which binary string (1-" << space << ")? ";
    cin >> k;

    cout << endl;
    if ((k < 1) || (k > space)) { cout << "Error: " << k << " is not in the range [1," << space << "]" << endl << endl; return 1; }

    cout << "Binary string #" << k << " is: "; kth(m, n, k); cout << endl;

    return 0;
}

