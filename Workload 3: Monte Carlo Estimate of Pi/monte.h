 #ifndef MONTE_H
 #define MONTE_H
#include <iostream>
#include <string>
#include "constants.h"
using namespace std;



/*
    The config Montecarlo will recieve from the main 
    struct config {
    string workload;
    string mode;
    int size;
    int threads;
    int processes;
    string schedule;
    int chunk;
    int seed;
    int repetitions;  
};
*/
class MonteCarlo {
public:
    MonteCarlo(config config);
    config config;
    double estimatePi();
private:

    
    double sequentialEstimate();
    double threadEstimate();
    double MPIestimate();
    double OPENMPestimate();

};



 #endif // MONTE_H
