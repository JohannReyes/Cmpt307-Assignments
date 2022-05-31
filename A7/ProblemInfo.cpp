
#include "ProblemInfo.hpp"

#include <iostream>

using namespace std;


ProblemInfo::ProblemInfo(istream &is) {
    is >> m >> n;
    S = new int[m];
    H = new int[n];
    for (int i = 0; i < m; ++i) {
        is >> S[i];
    }
    for (int j = 0; j < n; ++j) {
        is >> H[j];
    }
}


ProblemInfo::~ProblemInfo() {
    if (S) delete[] S;
    if (H) delete[] H;
}

