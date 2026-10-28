#include "constants.h"

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

void printoutput(const output& output, ostream& pout) {
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
