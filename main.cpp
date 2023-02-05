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

void work(Game& game, vector<int>& work_time){
    int num = 0;

    cout << "\nHow many squads do you want to send to work?:\n";
    cin >> num;
    if (num == 0)
        return;
    cout << "List id:\n";
    int id;
    for (int i = 0; i < num; ++i){
        cin >> id;
        if (id > game.sq_num() || !game.sent_to_work(id)){
            cout << "\nYou can't send squad " << id << "\n";
            cout << game.sq_num();
            i++;
        }
        else
            work_time[id] = 1;
    }  
}

void check_workers(Game& game, vector<int>& work_time){
    for (int id = 0; id < work_time.size(); ++id){
        if (work_time[id] == 0)
            continue;

        if (work_time[id] == 4){
            game.return_from_work(id);
            work_time[id] = 0;
        }
        else
           work_time[id]++; 
    }
}

bool war(Game& game){
    char wish = 'Y';

    cout << "\nDo you want to fight? Y/N\n";
    cin >> wish;
    if (wish == 'N')
        return false;
    if (game.fight())
        cout << "\nYou won!\n";
    else 
        cout << "\nYou lose\n";
    return true;
}

void add_units(Game& game){
    game.add_to_enemy_squad(1 + rand() % 3, 0);
    char wish = 'Y';

    cout << "\nDo you add units or squads? Y/N\n";
    cin >> wish;
    if (wish == 'N')
        return;
    
    while (true){
        cout << "\nYou have " << game.get_budget();
        cout << "\nDo you want to continue? Y/N\n";
        cin >> wish;
        if (wish == 'N')
            return;

        cout << "\nChoose type of unit and enter the appropriate number:\n";
        cout << "1.Cavalry\n" << "2.Infantry\n" << "3.Archers\n";
        int type, id;
        cin >> type;
        if (!game.buy(type)){
            cout << "\nYou don't have enough money\n";
            continue;
        }
        
        cout << "\nEnter the squad id to add. Enter -1 if you want to create a new squad\n";
        cin >> id;
        if (id == -1)
            game.create_my_squad(type, 1);
        else if (id > game.sq_num()){
            cout << "\nYou can't send squad " << id << "\n";
            game.buy(-type);
        }
        else
            game.add_to_my_squad(type, id);
    }
}

void Play(){
    int army_type;
    cout << "\nChoose an army and enter the appropriate number:\n";
    cout << "1.English\n" << "2.French\n";
    cin >> army_type;

    Game game(bool(army_type - 1));

    int main_type, enemy_main_type;

    cout << "\nChoose main type of troops and enter the appropriate number. More units of this type will be created:\n";
    cout << "1.Cavalry\n" << "2.Infantry\n" << "3.Archers\n";

    cin >> main_type;

    game.create_my_squad(main_type, 10);
    game.create_enemy_squad(1 + rand() % 3, 10);

    for (int i = 1; i <= 3; ++i){
        game.create_my_squad(i, 10);
        game.create_enemy_squad(i, 10);
    }

    int time = 0;
    vector<int> work_time;
    work_time.resize(1000, 0);

    while (true){
        add_units(game);

        work(game, work_time);

        bool was_war = war(game);

        if ((rand() % 3) && (!was_war))
            game.fight();

        check_workers(game, work_time);

        char wish;
        cout << "\nRound is completed. Want to go out? Y/N\n";
        cin >> wish;
        if (wish == 'Y')
            return;
    }

    return;
}

int main()
{
    Play();
    return 0;
}

