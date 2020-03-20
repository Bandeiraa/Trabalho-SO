#include <string>
#include <iostream>
#include <thread>
#include "Scheduler.cpp"

using namespace std;

class Simulator{
    Scheduler* scheduler;
    Kernel* kernel;
    enum scheduling_algorithm {
        fifo,
        shortest_job,
        round_robin
    };
    scheduling_algorithm scheduling_algorithm;

    int processor_cores_number;

    int quantum;

    int id_count;

    void batch_process_init(){

    }




    void run(){
    }
public:
    Simulator(Kernel* defaultKernel, int core_number, int dquantum, Scheduler scheduler) : scheduler(scheduler) {
        kernel = defaultKernel;
        processor_cores_number = core_number;
        quantum = dquantum;
        id_count = 0;
        vector<Core*> cores;
        for(int i = 0; i< core_number; i++){
            cores.push_back(new Core());
        }
        scheduler = new Scheduler(defaultKernel, )
    }

    void create_random_process(){
        kernel.create_process(id_count, rand() % 21);
        id_count++;
    }

    Kernel getKernel() {
        return kernel;
    }

    int getIdCount(){
        return id_count;
    }

    void setIdCount(int id){
        id_count = id;
    }
};

void teste(string msg) {
    cout << "Voce poderia " << msg << endl;
}

int main() {
    vector<Core*> *cores = new vector<Core*>;
    Simulator* simulator = new Simulator(new Kernel(), 4, 10));

    simulator->create_random_process();
    simulator->create_random_process();
    simulator->create_random_process();
    simulator->getKernel().printProcessTable();

    for (int i = 0; i <= 1; i++) {

        std::this_thread::sleep_for(std::chrono::seconds(1));
        thread teste1(teste, "me matar, pf");
        teste1.join();
    }
}
