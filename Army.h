#ifndef ARMY
#define ARMY

#include <vector>
using std::vector;

class Army{

    vector<Unit*> cavalry;
    vector<Unit*> infantry;
    vector<Unit*> archers;

    CreateArmy* factory;

public:
    vector<Squad*> squads;

    Army(bool);
    ~Army();

    int power();
    void create_unit(int, int);
    void add_unit_to_squad(int, int);
    void create_squad(int, int);
    void injury(int);
};

#endif
