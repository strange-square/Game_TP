Game::Game(bool is_french) :
    my_army(is_french), enemy(!is_french) {};

void Game::create_my_unit(int type, int num){
    my_army.create_unit(type, num);
}

void Game::create_enemy_unit(int type, int num){
    enemy.create_unit(type, num);
}
