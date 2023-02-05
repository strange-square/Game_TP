int Unit::get_health(){
    return health;
}

int Unit::get_power(){
    return power;
}

int Unit::get_cost(){
    return cost;
}

int Unit::get_salary(){
    return salary;
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

Unit::Unit(int h, int p, int c, int s):
        health(h), power(p), cost(c), salary(s),
        in_squad(false)
        {};

Cavalry::Cavalry(int h, int p, int c, int s):
        Unit(h, p, c, s) {};

Cavalry::Cavalry(int p):
        Unit(200, p, 20, 0.2) {};

Infantry::Infantry(int h, int p, int c, int s):
        Unit(h, p, c, s) {};

Infantry::Infantry():
        Unit(100, 100, 10, 0.5) {};


Archer::Archer(int h, int p, int c, int s):
        Unit(h, p, c, s) {};

Archer::Archer(int p):
        Unit(200, p, 20, 0.1) {};
