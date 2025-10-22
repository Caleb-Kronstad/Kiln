// Copyright 2025 Caleb Kronstad

#include <string>
#include "Kiln.hpp"

int main()
{
    GLFWwindow* window = Kiln::Initialize();
    
    float delta_time = 0.0f;
    bool window_closed = false;
    while (!window_closed)
    {
        Kiln::Begin();

        // -- Demo Window --
        ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 1, 1, 1));
        ImGui::Begin("Kiln Demo", nullptr);
        ImGui::Text(std::to_string(delta_time).c_str());
        ImGui::End();
        ImGui::PopStyleColor();
        // -- 
        
        Kiln::End(window);
        window_closed = Kiln::ShouldClose(window);
    }
    
    Kiln::Shutdown(window);
    return 0;
}