Army::Army(bool is_french){
     is_french ? factory = new CreateFrArmy() : factory = new CreateEngArmy();
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

