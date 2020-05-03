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

int Game::get_budget(){
    return economy.get_budget();
}

void Game::add_money(int num){
    economy.add(num);
}

void Game::lose_money(int num){
    economy.lose(num);
}