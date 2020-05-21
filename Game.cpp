Game::Game(bool is_french) :
    my_army(is_french), enemy(!is_french) {};

void Game::create_my_unit(int type, int num){
    my_army.create_unit(type, num);
}

void Game::create_enemy_unit(int type, int num){
    enemy.create_unit(type, num);
}

void Game::create_my_squad(int type, int size){
    my_army.create_squad(type, size);
}

void Game::create_enemy_squad(int type, int size){
    enemy.create_squad(type, size);
}

void Game::add_to_my_squad(int type, int id){
    my_army.add_unit_to_squad(type, id);
}

void Game::add_to_enemy_squad(int type, int id){
    enemy.add_unit_to_squad(type, id);
}

int Game::get_budget(){
    return economy.get_budget();
}

int Game::sq_num(){
    return my_army.squads.size();
}

void Game::add_money(int num){
    economy.add(num);
}

void Game::lose_money(int num){
    economy.lose(num);
}

bool Game::buy(int type){
    int lose = 10;
    if (type == 1 || type == 3)
        lose += 10;
    if (economy.get_budget() < lose)
        return false;   
        
    economy.lose(lose);
    return true;
}

bool Game::sent_to_work(int id){
    if (my_army.squads[id]->get_work() == true)
        return false;
    my_army.squads[id]->set_work(true);
    return true;
}

void Game::return_from_work(int id){
    my_army.squads[id]->set_work(false);
    economy.add(my_army.squads[id]->get_salary());
}

bool Game::fight(){
    int def = (my_army.power() - enemy.power());
    if (def > 0){
        economy.add(3);
    }
    else{
        economy.lose(3);
        my_army.injury(def/100);
    }
    return (def > 0);
}