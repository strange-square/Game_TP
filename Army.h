#ifndef ARMY
#define ARMY

#include <vector>
using std::vector;

class Army{

    vector<Unit*> cavalry;
    vector<Unit*> infantry;
    vector<Unit*> archers;
    /*vector<Squad*> cavalry_squads;
    vector<Squad*> infantry_squads;
    vector<Squad*> archers_squads;*/
    vector<Squad*> squads;

    CreateArmy* factory;

public:
    Army(bool);
    ~Army();

    void create_unit(int, int);
    void create_squad(int, int);
};

#endif
