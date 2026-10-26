#include "panel_item.hpp"
#include "functions.hpp"

#include <clocale>
#include <cstdlib>
#include <iostream>

int main(){
    std::setlocale(LC_ALL, "");

    Tatar::PanelItem andrei = {"Андрей Иванов сын Рублёв", Tatar::andrei};
    Tatar::PanelItem vasily = {"Василий Дмитриевич Поленов", Tatar::vasily};
    Tatar::PanelItem ivan   = {"Иван Константинович Айвазовский", Tatar::ivan};
    Tatar::PanelItem artists_exit = {"0 - Назад", Tatar::the_art_exit};

    const Tatar::PanelItem* artists_children[] = {
        &artists_exit,
        &andrei,
        &vasily,
        &ivan
    };
    const int artists_children_count = sizeof(artists_children)/sizeof(artists_children[0]);

    Tatar::PanelItem artists = {"1 - Русские художники", Tatar::show_menu, artists_children, artists_children_count};

    Tatar::PanelItem musicians = {"2 - Русские музыканты", Tatar::musicians};

    Tatar::PanelItem the_art_exit = {"0 - Назад", Tatar::the_art_exit};

    const Tatar::PanelItem* the_art_children[] = {
        &the_art_exit,
        &artists,
        &musicians
    };
    const int the_art_children_count = sizeof(the_art_children)/sizeof(the_art_children[0]);

    Tatar::PanelItem the_art = {"1 - Искусство России", Tatar::show_menu, the_art_children, the_art_children_count};

    Tatar::PanelItem exit = {"0 - Выйти", Tatar::exit};

    const Tatar::PanelItem* main_children[] = {
        &exit,
        &the_art
    };
    const int main_children_count = sizeof(main_children)/sizeof(main_children[0]);

    Tatar::PanelItem main = {nullptr, Tatar::show_menu, main_children, main_children_count};

    andrei.parent  = &artists;
    vasily.parent  = &artists;
    ivan.parent    = &artists;
    artists_exit.parent = &artists;
    artists.parent = &the_art;
    musicians.parent  = &the_art;
    the_art_exit.parent = &the_art;
    the_art.parent = &main;
    exit.parent    = &main;

    const Tatar::PanelItem* current = &main;
    do{
        current = current->func(current);
    } while(true);
}
