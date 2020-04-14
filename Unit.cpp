int Unit::get_health(){
    return health;
}

int Unit::get_power(){
    return power;
}

int Unit::get_cost(){
    return cost;
}


Unit::Unit(int h, int p, int c):
        health(h), power(p), cost(c)
        {};

Cavalry::Cavalry(int h, int p, int c):
        Unit(h, p, c) {};

Cavalry::Cavalry(int p):
        Unit(200, p, 20) {};

Infantry::Infantry(int h, int p, int c):
        Unit(h, p, c) {};

Infantry::Infantry():
        Unit(100, 100, 10) {};


Archer::Archer(int h, int p, int c):
        Unit(h, p, c) {};

Archer::Archer(int p):
        Unit(200, p, 20) {};
