
#ifndef _RECSOLVER_HPP_
#define _RECSOLVER_HPP_

#include "ProblemInfo.hpp"


// Recursive helper function computing Cij
int ComputeC(int i, int j, ProblemInfo& PInfo, int **C);


int RecSolve(ProblemInfo& PInfo);


#endif // _REC_SOLVER_HPP_

