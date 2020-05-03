int Unit::get_health(){
    return health;
}

int Unit::get_power(){
    return power;
}

int Unit::get_cost(){
    return cost;
}

void Unit::add_to_squad(){
    in_squad = true; 
}

void Unit::delete_from_squad(){
    in_squad = false; 
}

bool Unit::is_in_squad(){
    return in_squad;
}

Unit::Unit(int h, int p, int c):
        health(h), power(p), cost(c),
        in_squad(false)
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
