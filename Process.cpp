#include <iostream>

class Process {
    enum enum_state
    {
        ready,
        running,
        terminated
    };

    int process_id;
    int total_time;
    enum_state state;
    int reamaining_time;
public:
    Process(int id, int time) {
        process_id = id;
        total_time = time;
        reamaining_time = time;
        state = ready;
    }

    int getProcessId() const {
        return process_id;
    }

    void setProcessId(int processId) {
        process_id = processId;
    }

    int getTotalTime() const {
        return total_time;
    }

    void setTotalTime(int totalTime) {
        total_time = totalTime;
    }


    enum_state getState() const {
        return state;
    }

    void setState(enum_state state) {
        Process::state = state;
    }

    int getReamainingTime() const {
        return reamaining_time;
    }

    void setReamainingTime(int reamainingTime) {
        reamaining_time = reamainingTime;
    }
};
