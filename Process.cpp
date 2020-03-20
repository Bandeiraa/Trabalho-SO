class Process {
    enum state
    {
        ready,
        running,
        terminated
    };

    int process_id;
    int total_time;
    state state;
    int reamining_time;
};
