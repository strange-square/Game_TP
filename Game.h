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

    int sq_num();
    int get_budget();
    void add_money(int);
    void lose_money(int);
    bool buy(int);
    void create_my_unit(int, int);
    void add_to_my_squad(int, int);
    void create_enemy_unit(int, int);
    void add_to_enemy_squad(int, int);
    void create_my_squad(int, int);
    void create_enemy_squad(int, int);
    bool sent_to_work(int);
    void return_from_work(int);
    bool fight();
};

#endif
