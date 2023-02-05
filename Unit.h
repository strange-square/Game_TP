#ifndef UNIT
#define UNIT

class Unit{
private:
    int health;
    int power;
    int cost;
    int salary;
    bool in_squad = false;

public:
    Unit() = default;
    Unit(int, int, int, int);

    ~Unit() = default;

    int get_health();
    int get_power();
    int get_cost();
    int get_salary();
    void add_to_squad();
    void delete_from_squad();
    bool is_in_squad();

    void injury(int);
};

class Cavalry : public Unit{
public:
    Cavalry(int, int, int, int);

    Cavalry(int);

    void attack(Unit&);
};

class Infantry : public Unit{
public:
    Infantry(int, int, int, int);

    Infantry();

    void fight(Unit&);
};

class Archer : public Unit{
public:
    Archer(int, int, int, int);

    Archer(int);

    void shot(Unit&);
};

#endif
