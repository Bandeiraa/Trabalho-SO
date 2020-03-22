#include <vector>
#include <iostream>
#include <string>
#include "Scheduler.cpp"

using namespace std;

class Kernel {

    vector<Process*> process_table;
    Scheduler* scheduler;
    Cpu* cpu;

    void run() {

    }

    void process_control_table() {

    }



    void kill_process() {

    }

    void run_process() {

    }


public:
    Kernel(int core_number, Simulator::enum_scheduling_algorithm scheduling_algorithm) {
        scheduler = new Scheduler(this*, scheduling_algorithm);
        cpu = new Cpu(core_number);
    }

    void create_process(int id, int time) {
        Process* process = new Process(id, time);
        process_table.push_back(process);
    }

    vector<Process*> getProcessTable() {
        return process_table;
    }

    void printProcessTable() {
        cout << "--Processos--" << endl;
        for (int i = 0; i < process_table.size(); i++) {
            cout << "id: ";
            cout << process_table[i]->getProcessId() << endl;
            cout << "time: ";
            cout << process_table[i]->getReamainingTime() << endl;
        }
    }

};
