
#include <iostream>
#include "RecSolver.hpp"
#include "IterSolver.hpp"
#include "ProblemInfo.hpp"

using namespace std;

//-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.//
//   Recursive Usage: "match R < sample.in"   //
//   Iterative Usage: "match I < sample.in"   //
//-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.//
int main ()
{


    // parse command line
    bool IterMode = true, RecMode = true;


    // input
    ProblemInfo PInfo(cin);


    // solve
    if (IterMode) {
        cout << " " << IterSolve(PInfo) << endl;
    }
    if (RecMode) {
        cout << " " << RecSolve(PInfo) << endl;
    }

    // delete PInfo;
}
