Unit* CreateFrArmy::create_cavalry(){
    return new Cavalry(200);
}

Unit* CreateFrArmy::create_infantry(){
    return new Infantry();
};

Unit* CreateFrArmy::create_archer(){
    return new Archer(200);
};

Unit* CreateEngArmy::create_cavalry(){
    return new Cavalry(150);
}

Unit* CreateEngArmy::create_infantry(){
    return new Infantry();
};

Unit* CreateEngArmy::create_archer(){
    return new Archer(250);
};

