*Table or Booth Team Notebook

**Notebook entry template

Date 
Author 
Milestone 
| Type | Meeting / Design decision / Sketch / Diagram / Pseudocode / Race condition / Bug / Fix / Test (pass or fail) / Timing result / Timing anomaly / Milestone notes / Contribution |

**What happened or what we did**

**Details** 

- Attendees if its meeting
- Options considered and the decision
- Sketch, diagram, or pseudocode 
- Steps to reproduce, expected vs actual for bugs, race conditions, failed tests
- What we changed and whether it worked
- Setup and input siz + any other relevant data if tests were run

**Result or outcome**



**First team meeting

Date 10/16/2026
Author Dakota Hernandez
Milestone 
| Type | Meeting|

**What happened or what we did**
We met and split up the work for the team along with making github.

**Details** 

- Attendees: Dakota Hernandez, Jonah Beck, Jackfotenot

-Used when2meet.com to find when the team is all availible to meet in person

![when2meet availability](images/when2meet.png)

**Result or outcome**
| Workload | Owners |
|----------|--------|
| Workload 1: Independent Loop (LOOP) | Jack and Jonah |
| Workload 2: Dot Product (DOT) | Chase and Owen |
| Workload 3: Monte Carlo Pi (PI) | Dakota |


**Milestone 1 Module design diagram

Date 10/21/2026
Author Dakota Hernandez
Milestone 1: Design Proposal
| Type | Diagram |

**What happened
Added the proposed class/module design diagram to the Milestone 1 design proposal.

**Details** 

- Diagram of the module design  section of Milestone 1

![module design](../Milestone%201:%20Design%20Proposal%09/images/moduledesign.png)

**Milestone 1 design proposal completed

Date 10/22/2026
Author Dakota Hernandez
Milestone 1: Design Proposal
| Type | Design decision / Milestone notes |

**What happened or what we did**
Filled in the my Milestone 1 sections: 

**Details** 

**Result or outcome**
Milestone 1 document is ready for the team to finish before submission.


**Milestone 1 Module design diagram update

Date 10/23/2026
Author Dakota Hernandez
Milestone 1: Design Proposal
| Type | Diagram |

**What happened
Added the proposed class/module design diagram to the Milestone 1 design proposal, 
after realizes the previous method of main handling timing was flawed due to 
setup of processes varying

**Details** 

- Diagram of the module design  section of Milestone 1

![updated module design](../Milestone%201:%20Design%20Proposal%09/images/updatedmoduledesign.png)


**Workload files, shared config, and Monte Carlo skeleton

Date 10/26/2026
Author Dakota Hernandez
Milestone 2: Sequential and Shared-Memory Baselines
| Type | Design decision / Contribution |

**What happened or what we did**
Set up the code structure so every workload can be called from main the same way

**Details** 

- Added a folder, header, and source file for each workload (loop, dot, monte).
- Added the config struct and getconfig / printconfig in main so every workload
  reads the same input fields (WORKLOAD, MODE, SIZE, THREADS, PROCESSES, SCHEDULE,
  CHUNK, SEED, REPETITIONS).
- Started the MonteCarlo class. It takes the config so then each workload 
gets the whole config instead of separate arguments, so all
  workloads and models are called the same way.

**Result or outcome**
The structure is done. The models aren't written yet.


**Shared constants.h and run in main

Date 10/27/2026
Author Dakota Hernandez
Milestone 2: Sequential and Shared-Memory Baselines
| Type | Design decision / Bug / Fix / Contribution |

**What happened or what we did**
Moved the shared structs into contants.h and finished run so main runs the
selected workload, I had constants in a parent folder on accident.

**Details** 

- Moved config, output, getconfig, printconfig, and printoutput into
  constants.h in the repo folder so all workloads share them.
- Added constants for the workloads (LOOP, DOT, PI), the modes (SEQUENTIAL, STD_THREAD,
  OPENMP, MPI, COMPARE, TRACE), and the schedules (STATIC, CYCLIC, DYNAMIC).
- run in main calls MonteCarlo(config).run() when WORKLOAD is PI, then fills in the
  fields every workload reports the same way (workload, mode, size, workers, schedule,
  repetitions). main prints the result with printoutput.
-MonteCarlo picks the model from MODE, runs it REPETITIONS times, and times
  each run with chrono to report the average, best, and worst time
  in ms.
- Bug: the build failed with duplicate symbols for getconfig, printconfig, and
  printoutput, because both main.cpp and monte.cpp include constants.h, which
  defines those functions.
- Fix: marked the three functions inline so it would build.

**Result or outcome**
A PI run prints the config and a full report. RESULT is 0.0 until the model functions
are written.
