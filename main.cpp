#include "Workload 1: Independent Loop Computation/loop.h"
#include "Workload 2: Dot Product with Reduction/dot.h"
#include "Workload 3: Monte Carlo Estimate of Pi/monte.h"
#include <iostream>
#include <string>
using namespace std;


/*
Required Input Format
WORKLOAD workload
MODE mode
[MODEL model]
SIZE n
THREADS t
PROCESSES p
SCHEDULE schedule
CHUNK c
SEED s
REPETITIONS r


Example input for the program.
 WORKLOAD DOT
MODE COMPARE
SIZE 10000000
THREADS 4
PROCESSES 4
SCHEDULE STATIC
CHUNK 1000
SEED 12345
REPETITIONS 5
 */



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
/*
Required Output Format
WORKLOAD: DOT
MODE: STD_THREAD
SIZE: 10000000
WORKERS: 4
SCHEDULE: STATIC
RESULT: value
CHECKSUM: value
AVG_TIME_MS: value
BEST_TIME_MS: value
WORST_TIME_MS: value
REPETITIONS: r
VALID: YES
*/
struct output{
    string workload;
    string mode;
    int size;
    int workers;
    string schedule;
    double result;
    double checksum;
    double avg_time_ms;
    double best_time_ms;
    double worst_time_ms;
    int repetitions;
    bool valid;

};


int main() {
    config input;


    getconfig(input, cin);
    printconfig(input, cout);






    return 0;
}
