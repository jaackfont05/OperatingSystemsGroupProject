#include <string>
#include <iostream>
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


inline void getconfig(config& config, istream& pin) {
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

inline void printconfig(const config& config, ostream& pout) {
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
    string workload = "NONE";
    string mode = "NONE";
    int size = 0;
    int workers = 0;
    string schedule;
    double result = 0.0;
    double checksum = 0.0;
    double avg_time_ms = 0.0;
    double best_time_ms = 0.0;
    double worst_time_ms = 0.0  ;
    int repetitions = 0;
    bool valid = false;

};

inline void printoutput(const output& output, ostream& pout) {
    pout << "WORKLOAD: " << output.workload << endl;
    pout << "MODE: " << output.mode << endl;
    pout << "SIZE: " << output.size << endl;
    pout << "WORKERS: " << output.workers << endl;
    pout << "SCHEDULE: " << output.schedule << endl;
    pout << "RESULT: " << output.result << endl;
    pout << "CHECKSUM: " << output.checksum << endl;
    pout << "AVG_TIME_MS: " << output.avg_time_ms << endl;
    pout << "BEST_TIME_MS: " << output.best_time_ms << endl;
    pout << "WORST_TIME_MS: " << output.worst_time_ms  << endl;
    pout << "REPETITIONS: " << output.repetitions  << endl;
    if (output.valid) {
        pout << "VALID: YES"  << endl;
    } else {
        pout << "VALID: NO"  << endl;
    }
}

const string LOOP = "LOOP";
const string DOT = "DOT";
const string PI = "PI";
const string SEQUENTIAL = "SEQUENTIAL";
const string STD_THREAD = "STD_THREAD";
const string OPENMP = "OPENMP";
const string MPI = "MPI";
const string COMPARE = "COMPARE";
const string TRACE = "TRACE";
const string STATIC = "STATIC";
const string CYCLIC = "CYCLIC";
const string DYNAMIC = "DYNAMIC";
