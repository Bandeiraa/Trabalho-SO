#include "Process.cpp"
class Core{
    Process current_process;
public:
    Core(){

    }
    const Process &getCurrentProcess() const {
        return current_process;
    }

    void setCurrentProcess(const Process &currentProcess) {
        current_process = currentProcess;
    }
};
