#ifndef SQUAD
#define SQUAD

#include <vector>
using std::vector;

class Squad{
private:
    vector<Unit*> units;

    bool work;
    int power;
    int health;
    int cost;
    int salary;

public:
    Squad();

    ~Squad() = default;

    void add_unit(Unit*);

    int get_size();
    int get_health();
    int get_power();
    int get_cost();
    int get_salary();
    bool get_work();

    void set_work(bool);
    void add_health(int);
    void injury(int);
};

#endif