// Copyright BattleDash. All Rights Reserved.

#pragma once

#include <Render/Windows/Window.h>

namespace Kyber
{
class ServerWindow : public Window
{
public:
    ServerWindow();
    ~ServerWindow();
    void Draw() override;
    bool IsEnabled() override;
};
} // namespace Kyber