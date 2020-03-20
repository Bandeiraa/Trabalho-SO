#include <string>
#include <iostream>
#include <vector>
#include "Process.cpp"
#include "Core.cpp"

using namespace std;

class Scheduler {

    enum scheduling_algorithm {
        fifo,
        shortest_job,
        round_robin
    };

    vector<Core*> cores;
    vector<Process*> ready_queue;
    scheduling_algorithm* scheduling_algorithm;

    void set_scheduling_algorithm(enum scheduling_algorithm){
        this->scheduling_algorithm = scheduling_algorithm;
    }

    void run(){

    }

    void insert_process(Process *process){
        this->ready_queue.push_back(process);
    }

    void schedule_process(){

    }

    void deschedule_process(){

    }

    void fifo_scheduler(){

    }

    void shortest_job_first(){

    }

    void roundrobin(){

    }
};