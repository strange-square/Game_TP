#ifndef CREATE_ARMY
#define CREATE_ARMY

class CreateArmy{
public:
    virtual Unit* create_cavalry() = 0;
    virtual Unit* create_infantry() = 0;
    virtual Unit* create_archer() = 0;
};

class CreateFrArmy : public CreateArmy{
    Unit* create_cavalry();
    Unit* create_infantry();
    Unit* create_archer();
};

class CreateEngArmy : public CreateArmy{
    Unit* create_cavalry();
    Unit* create_infantry();
    Unit* create_archer();
};

#endif
