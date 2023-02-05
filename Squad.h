#ifndef SQUAD
#define SQUAD

#include <vector>
using std::vector;

class Squad{
private:
    vector<Unit*> units;

    int power;
    int health;
    int cost;

public:
    Squad();

    ~Squad() = default;

    void add_unit(Unit*);

    int get_size();
    int get_health();
    int get_power();
    int get_cost();

    void injury(int);
    void squad_attack(Squad*);
};

#endif