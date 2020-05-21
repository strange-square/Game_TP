#ifndef ECONOMY
#define ECONOMY

class Economy{
private:
    int budget = 40;

public:
    Economy() = default;
    ~Economy() = default;

    int get_budget();
    void add(int);
    void lose(int);
};

#endif
