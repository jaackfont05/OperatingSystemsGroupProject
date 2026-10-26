#include "Workload 1: Independent Loop Computation/loop.h"
#include "Workload 2: Dot Product with Reduction/dot.h"
#include "Workload 3: Monte Carlo Estimate of Pi/monte.h"
#include <iostream>
#include <string>
#include "constants.h"
using namespace std;



output run(const config& config){
    //TODO
}


void getconfig(config& config, istream& pin) {
    pin >> config.workload;
    pin >> config.mode;
    pin >> config.size;
    pin >> config.threads;
    pin >> config.processes;
    pin >> config.schedule;
    pin >> config.chunk;
    pin >> config.seed;
    pin >> config.repetitions;   
}

void printconfig(const config& config, ostream& pout) {
    pout << "WORKLOAD: " << config.workload << endl;
    pout << "MODE: " << config.mode << endl;
    pout << "SIZE: " << config.size << endl;
    pout << "THREADS: " << config.threads << endl;
    pout << "PROCESSES: " << config.processes << endl;
    pout << "SCHEDULE: " << config.schedule << endl;
    pout << "CHUNK: " << config.chunk << endl;
    pout << "SEED: " << config.seed << endl;
    pout << "REPETITIONS: " << config.repetitions << endl;
}



int main() {
    config input;
    output result;
    getconfig(input, cin);
    printconfig(input, cout);
    result = run(input);

    return 0;
}
