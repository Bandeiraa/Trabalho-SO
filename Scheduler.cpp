#include <vector>
#include "Core.cpp"
#include "Kernel.cpp"

using namespace std;


class Scheduler {
    Kernel kernel;
    enum enum_scheduling_algorithm {
        fifo,
        shortest_job,
        round_robin
    };

    vector<Core*> cores;
    vector<Process*> ready_queue;
    enum_scheduling_algorithm* scheduling_algorithm;
public:

    Kernel getKernel() const {
        return kernel;
    }

    void setKernel(const Kernel &kernel) {
        Scheduler::kernel = kernel;
    }

     vector<Core*> getCores() {
        return cores;
    }

    void setCores(vector<Core*>) {
        Scheduler::cores = cores;
    }

    vector<Process*> getReadyQueue() {
        return ready_queue;
    }

    void setReadyQueue(vector<Process*> readyQueue) {
        ready_queue = readyQueue;
    }

    enum_scheduling_algorithm *getSchedulingAlgorithm()  {
        return scheduling_algorithm;
    }

    void setSchedulingAlgorithm(enum_scheduling_algorithm *schedulingAlgorithm) {
        scheduling_algorithm = schedulingAlgorithm;
    }

    Scheduler(Kernel kernel, vector<Core*> cores, enum_scheduling_algorithm schedulingAlgorithm){
        Scheduler::kernel = kernel;
        Scheduler::cores = cores;
        scheduling_algorithm = (enum_scheduling_algorithm *) schedulingAlgorithm;
    }

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