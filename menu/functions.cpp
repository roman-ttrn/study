#include "panel_item.hpp"
#include "functions.hpp"

#include <iostream>
#include <cstdlib>

namespace Tatar {

const Tatar::PanelItem* exit(const Tatar::PanelItem* current){
    std::exit(0);
    return nullptr;
}

const Tatar::PanelItem* vasily(const Tatar::PanelItem* current){
    return current->parent;
}

const Tatar::PanelItem* ivan(const Tatar::PanelItem* current){
    return current->parent;
}

const Tatar::PanelItem* andrei(const Tatar::PanelItem* current){
    return current->parent;
}

const Tatar::PanelItem* show_menu(const Tatar::PanelItem* current){
    for(int i = 1; i < current->children_count; i++){
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Команды > ";
    int user_input;
    std::cin >> user_input;

    return current->children[user_input];
}

const Tatar::PanelItem* the_art_exit(const Tatar::PanelItem* current){
    std::cout << current->title << std::endl;
    return current->parent->parent;
}

const Tatar::PanelItem* musicians(const Tatar::PanelItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}

const Tatar::PanelItem* artists(const Tatar::PanelItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}

const Tatar::PanelItem* artists_exit(const Tatar::PanelItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}

} // namespace Tatar
