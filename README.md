# Kiln

Kiln is a minimal graphics framework that bundles GLFW, GLAD, and Dear ImGui into a simple, easy-to-use API  
Contributions are welcome - Please feel free to submit issues or pull requests

## Demo
```cpp
#include "Kiln.hpp"

int main()
{
    GLFWwindow* window = Kiln::Initialize();

    while (!Kiln::ShouldClose(window))
    {
        Kiln::Begin();

        // Your ImGui code here
        ImGui::Begin("New Window");
        ImGui::Text("Minimal setup required");
        ImGui::End();

        Kiln::End(window);
    }

    Kiln::Shutdown(window);
    return 0;
}
```
## Dependencies
 Kiln includes the following libraries:

  - https://www.glfw.org/ - Window and input management  
  - https://glad.dav1d.de/ - OpenGL function loader  
  - https://github.com/ocornut/imgui - Immediate mode GUI library  

  All dependencies are included in the repository - no additional downloads required.  

## Acknowledgements

  - Omar Cornut for Dear ImGui
  - GLFW Team for the excellent windowing library
  - Dav1dde for OpenGL loading

  This project bundles several open-source libraries. Please refer to their respective licenses:
  - [GLFW](https://github.com/glfw/glfw/blob/master/LICENSE.md)
  - [Dear ImGui](https://github.com/ocornut/imgui/blob/master/LICENSE.txt)
  - [GLAD](https://github.com/Dav1dde/glad/blob/glad2/LICENSE)