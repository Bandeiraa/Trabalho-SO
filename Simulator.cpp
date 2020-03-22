#include <string>
#include <iostream>
#include <thread>
#include "Scheduler.cpp"

using namespace std;

class enum_scheduling_algorithm;

class Simulator {
    Scheduler* scheduler;
    Kernel* kernel;
    int processor_cores_number;

    int quantum;

    int id_count;

    void batch_process_init() {

    }




    void run() {
    }
public:

    enum class enum_scheduling_algorithm {
        fifo,
        shortest_job,
        round_robin
    };

    enum_scheduling_algorithm* scheduling_algorithm;

    Simulator(int core_number, int dquantum, enum_scheduling_algorithm* scheduling_algorithm) {
        kernel = new Kernel(core_number, scheduling_algorithm);
        processor_cores_number = core_number;
        quantum = dquantum;
        scheduling_algorithm = scheduling_algorithm;
        id_count = 0;
    }

    void create_random_process() {
        kernel->create_process(id_count, rand() % 21);
        id_count++;
    }

    Kernel* getKernel() {
        return kernel;
    }

    int getIdCount() {
        return id_count;
    }

    void setIdCount(int id) {
        id_count = id;
    }


};

void teste(string msg) {
    cout << "Voce poderia " << msg << endl;
}

int main() {
    vector<Core*>* cores = new vector<Core*>;
    Simulator* simulator = new Simulator(new Kernel(), 4, 10);

    simulator->create_random_process();
    simulator->create_random_process();
    simulator->create_random_process();
    simulator->getKernel()->printProcessTable();

    for (int i = 0; i <= 1; i++) {

        std::this_thread::sleep_for(std::chrono::seconds(1));
        thread teste1(teste, "me matar, pf");
        teste1.join();
    }
}
