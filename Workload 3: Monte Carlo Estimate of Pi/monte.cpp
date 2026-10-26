#include "monte.h"
#include <iostream>
#include "constants.h"

MonteCarlo::MonteCarlo(::config config) {
    this->config = config;
}



double MonteCarlo::sequentialEstimate(){
    return 0.0;
}
double MonteCarlo::threadEstimate(){
    return 0.0; 
}
double MonteCarlo::MPIestimate(){
    return 0.0;
}
double MonteCarlo::OPENMPestimate(){
    return 0.0;
}

double MonteCarlo::estimatePi() {
    if (config.mode == SEQUENTIAL) {
        return sequentialEstimate();
    } else if (config.mode == THREAD) {
        return threadEstimate();
    } else if (config.mode == MPI) {
        return MPIestimate();
    } else if (config.mode == OPENMP) {
        return OPENMPestimate();
    }

}