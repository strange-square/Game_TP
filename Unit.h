#ifndef UNIT
#define UNIT

class Unit{
private:
    int health;
    int power;
    int cost;

public:
    Unit() = default;
    Unit(int, int, int);

    ~Unit() = default;

    int get_health();
    int get_power();
    int get_cost();

    void injury(int);
};

class Cavalry : public Unit{
public:
    Cavalry(int, int, int);

    Cavalry(int);

    void attack(Unit&);
};

class Infantry : public Unit{
public:
    Infantry(int, int, int);

    Infantry();

    void fight(Unit&);
};

class Archer : public Unit{
public:
    Archer(int, int, int);

    Archer(int);

    void shot(Unit&);
};

#endif
