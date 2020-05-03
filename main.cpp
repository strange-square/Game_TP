#include <iostream>
#include <vector>
#include "Economy.h"
#include "Economy.cpp"
#include "Unit.h"
#include "Unit.cpp"
#include "Squad.h"
#include "Squad.cpp"
#include "CreateArmy.h"
#include "CreateArmy.cpp"
#include "Army.h"
#include "Army.cpp"
#include "Game.h"
#include "Game.cpp"
using namespace std;

void Play(){
    int army_type;
    cout << "\nChoose an army and enter the appropriate number:\n";
    cout << "1.English\n" << "2.French\n";
    cin >> army_type;

    Game game(bool(army_type - 1));

    int main_type, enemy_main_type;

    cout << "\nChoose an main type of troops and enter the appropriate number. More units of this type will be created:\n";
    cout << "1.Cavalry\n" << "2.Infantry\n" << "3.Archers\n";

    cin >> main_type;

    game.create_my_squad(main_type, 10);
    game.create_enemy_squad(1 + rand() % 3, 10);

    for (int i = 1; i < 3; ++i){
        game.create_my_squad(i, 10);
        game.create_enemy_squad(i, 10);
    }

    return;
}

int main()
{
    Play();
    return 0;
}

