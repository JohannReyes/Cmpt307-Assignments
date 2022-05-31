#include <cstdlib>
#include "RecSolver.hpp"

#define Inf 100000


using namespace std;


// Recursive helper function computing Cij
int ComputeC(int i, int j, ProblemInfo& PInfo, int **C) {
    // Compute C[i,j]
    // Remember to store the resulting value in C array

    // Base case
    if(i<j)
    {
      return C[i][j];
    }

    //Memoization Case
    if(C[i][j] != Inf)
    {
      return C[i][j];
    }

    //Actual function, going through current row with recursion
    int currSki;
    int prevSki;
    for(int k=j; k>0; k--)
    {
      currSki = PInfo.H[k-1]-PInfo.S[i-1];
      if(currSki < 0) {currSki*=-1;} //Absolute value

      // Recursive Calls
      currSki += ComputeC(i-1, k-1, PInfo, C);
      prevSki = ComputeC(i-1, k, PInfo, C);

      //Taking the Min
      if(currSki < prevSki)
      {
        C[i][k] = currSki;
      }
      else
      {
        C[i][k] = prevSki;
      }
    }

    return C[i][j];

}


int RecSolve(ProblemInfo& PInfo) {
    int **C;
    C = new int*[PInfo.m + 1];
    for (int i = 0; i <= PInfo.m; ++i) {
        C[i] = new int[PInfo.n + 1];
        for (int j = 0; j <= PInfo.n; ++j) {
            C[i][j] = Inf; // Or Inf
        }

    }

    C[0][0] = 0;

    return ComputeC(PInfo.m, PInfo.n, PInfo, C);

}




