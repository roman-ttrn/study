#pragma once
#include "panel_item.hpp"

namespace Tatar
{
    const PanelItem* show_menu(const PanelItem* current);

    const PanelItem* exit(const PanelItem* current);

    const PanelItem* andrei(const PanelItem* current);
    const PanelItem* vasily(const PanelItem* current);
    const PanelItem* ivan(const PanelItem* current);

    const Tatar::PanelItem* artists(const Tatar::PanelItem* current);
    const Tatar::PanelItem* artists_exit(const Tatar::PanelItem* current);
    const Tatar::PanelItem* musicians(const Tatar::PanelItem* current);
    const Tatar::PanelItem* the_art_exit(const Tatar::PanelItem* current);
} // namespace Tatar
