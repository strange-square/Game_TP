#ifndef GAME
#define GAME

class Game{
private:
    Army my_army;
    Army enemy;

public:
    Game(bool);
    ~Game() = default;

    void create_my_unit(int, int);
    void create_enemy_unit(int, int);
};

#endif
