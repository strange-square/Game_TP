Squad::Squad():
    power(0),
    health(0),
    cost(0),
    salary(0),
    work(false)
{};

void Squad::add_unit(Unit* unit){
    units.push_back(unit);
    power += unit->get_power();
    health += unit->get_health();
    cost += unit->get_cost();
    salary += unit -> get_salary();
}

int Squad::get_size(){
    return units.size();
}

int Squad::get_health(){
    return health;
}

int Squad::get_power(){
    return power;
}

int Squad::get_cost(){
    return cost;
}

int Squad::get_salary(){
    return salary;
}

bool Squad::get_work(){
    return work;
}

void Squad::set_work(bool w){
    work = w;
}

void Squad::add_health(int add){
    health += add;
}

void Squad::injury(int inj){
    health -= inj;
}
