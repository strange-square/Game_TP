Army::Army(bool is_french){
     is_french ? factory = new CreateFrArmy() : factory = new CreateEngArmy();
}

Army::~Army(){
    for (int i = 0; i < cavalry.size(); ++i)
        delete cavalry[i];
    for (int i = 0; i < infantry.size(); ++i)
        delete infantry[i];
    for (int i = 0; i < archers.size(); ++i)
        delete archers[i];

    for (int i = 0; i < squads.size(); ++i)
        delete squads[i];

    delete factory;
}

int Army::power(){
    int power = 0;
    for (int i = 0; i < squads.size(); ++i)
        if (!squads[i]->get_work()){
            if (squads[i]->get_health() > 0)
                power += squads[i]->get_power();
            else 
                squads[i]->add_health(100); 
        }
    return power;
}

void Army::create_unit(int type, int num){
    switch (type) {

    case 1:
        for(int i = 0; i < num; ++i)
            cavalry.push_back(factory->create_cavalry());
        break;

    case 2:
        for(int i = 0; i < num; ++i)
            infantry.push_back(factory->create_infantry());
        break;

    case 3:
        for(int i = 0; i < num; ++i)
            archers.push_back(factory->create_archer());
        break;
    }
}

void Army::add_unit_to_squad(int type, int id){
    switch (type) {

    case 1:
        squads[id]->add_unit(cavalry.back());
        cavalry.back()->add_to_squad();
        break;

    case 2:
        squads[id]->add_unit(infantry.back());
        infantry.back()->add_to_squad();
        break;

    case 3:
        squads[id]->add_unit(archers.back());
        archers.back()->add_to_squad();
        break;
    }

}

void Army::create_squad(int type, int size){

    Squad* sq = new Squad;
    create_unit(type, size);

    switch (type) {

    case 1:
        for(int i = 0; i < size; ++i){
            sq->add_unit(cavalry.back());
            cavalry.back()->add_to_squad();
        }
        break;

    case 2:
        for(int i = 0; i < size; ++i){
            sq->add_unit(infantry.back());
            infantry.back()->add_to_squad();
        }
        break;

    case 3:
        for(int i = 0; i < size; ++i){
            sq->add_unit(archers.back());
            archers.back()->add_to_squad();
        }
        break;
    }

    squads.push_back(sq);
}

void Army::injury(int inj){
    int num = 0;
    do{
        num = rand() % squads.size();
    } while(squads[num]->get_work());
    squads[num]->injury(inj);
}