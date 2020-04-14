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
    Army(bool);
    ~Army() = default;

    void create_unit(int, int);
};

#endif
