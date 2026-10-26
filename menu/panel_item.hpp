#pragma once

namespace Tatar
{
    struct PanelItem
    {
        const char* const title;
        const PanelItem* (*func)(const PanelItem* curr);

        const PanelItem* const *children;
        const int children_count;
        const PanelItem* parent;
    };
} // namespace Tatar
