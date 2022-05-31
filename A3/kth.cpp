
#include <iostream>
#include "nCr.h"
#include "kth.h"


using namespace std;




//
//    Output the k'th lexically smallest string composed of m 0s and n 1s
//
void kth(int m, int n, unsigned long long k) {

    //
    //   You will replace the following routine 
    //   with your solution ..........
    //

    //Base Case
    if(n== 0)
    {
      if(m > 0)
      {
        cout << "0";
        kth(m-1, n, k);
      }
      return;
    }

    // Recursion
    unsigned long long totalComb, topStrings;
    totalComb = nCr(m+n, n);
    topStrings = nCr(m+n-1, n-1);

    if(k >= totalComb-topStrings+1)
    {
      cout << "1";
      kth(m, n-1, k+topStrings-totalComb);
    }
    else
    {
      cout << "0";
      kth(m-1, n, k);
    }
    return;
} // kth


