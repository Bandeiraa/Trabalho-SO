#include <string>
#include <iostream>
#include <thread>
#include "Kernel.cpp"
#include "Process.cpp"

using namespace std;

class Simulator{

    Kernel kernel;
    enum scheduling_algorithm {
        fifo,
        shortest_job,
        round_robin
    };
    scheduling_algorithm scheduling_algorithm;

    int processor_cores_number;

    int quantum[];

    void batch_process_init(){

    }

    Process create_random_process(){

    }


    void run(){
    }

    int main() {
    };
};

void teste(string msg) {
    cout << "Voce poderia " << msg << endl;
}

int main() {

    int iteracoes = 5;
    for (int i = 0; i < iteracoes; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        thread teste1(teste, "me matar, pf");
        teste1.join();
    }
}
