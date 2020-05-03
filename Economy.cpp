int Economy::get_budget(){
    return budget;
}

void Economy::lose(int cost){
    budget -= cost;
}

void Economy::add(int cost){
    budget += cost;
}