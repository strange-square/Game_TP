Squad::Squad():
    power(0),
    health(0),
    cost(0)
{};

void Squad::add_unit(Unit* unit){
    units.push_back(unit);
    power += unit->get_power();
    health += unit->get_health();
    cost += unit->get_cost();
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
