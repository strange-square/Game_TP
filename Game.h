#ifndef GAME
#define GAME

class Game{
private:
    Army my_army;
    Army enemy;
    Economy economy;

public:
    Game(bool);
    ~Game() = default;

    int get_budget();
    void add_money(int);
    void lose_money(int);
    void create_my_unit(int, int);
    void create_enemy_unit(int, int);
    void create_my_squad(int, int);
    void create_enemy_squad(int, int);
};

#endif
