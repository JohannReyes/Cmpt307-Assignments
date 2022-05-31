
#ifndef _PINFO_H_
#define _PINFO_H_

#include <iostream>


using namespace std;


// Structure to save problem instance information
struct ProblemInfo {
    int m, n;
    int *S;   // Skis
    int *H;   // Skiers

    ProblemInfo(istream &is);
    ~ProblemInfo();


};


#endif // _PINFO_H_

