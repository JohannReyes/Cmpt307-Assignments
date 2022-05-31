#include "IterSolver.hpp"

#define Inf 100000

int IterSolve(ProblemInfo& PInfo) {
  
    int C[PInfo.m + 1][PInfo.n + 1];

    int currSki;
    int prevSki;
    for(int i=0; i<PInfo.m+1; i++)
    {
      for(int j=0; j<PInfo.n+1; j++)
      {
        if(j==0 && i==0)
        {
          C[i][j] = 0;
        }
        else if(j==0 || i<j)
        {
          C[i][j] = Inf;
        }
        else
        {
          currSki = PInfo.H[j-1]-PInfo.S[i-1];
          if(currSki<0) {currSki*=-1;}
          if(C[i-1][j-1] != Inf)
          {
            currSki += C[i-1][j-1];
          }
          
          prevSki = C[i-1][j];

          if(currSki < prevSki)
          {
            C[i][j] = currSki;
          }
          else
          {
            C[i][j] = prevSki;
          }
        }
      }
    }

    return C[PInfo.m][PInfo.n];

}




