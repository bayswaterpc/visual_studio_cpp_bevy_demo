// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#pragma comment(lib, "../egui_demo_lib/target/release/egui_demo_app_c_wrapper.lib")
#pragma comment(lib, "../bevy_egui_paneled_playground/target/release/egui_paneled_playground.lib")

//Added for egui_demo_app_c_wrapper
#pragma comment(lib, "userenv.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Comctl32.lib")
#pragma comment(lib, "UxTheme.lib")
#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "dwmapi.lib")
#pragma comment(lib, "Imm32.lib")
#pragma comment(lib, "Opengl32.lib")

//Added for egui_demo_app_c_wrapper
#pragma comment(lib, "d3dcompiler") //actually works
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/glslang.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/HLSL.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/OGLCompiler.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/OSDependent.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV-Tools.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV-Tools-opt.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPVRemapper.lib")

#include <iostream>
#include "../egui_demo_lib/src/c_wrapper.h";


/////glslang importing troubles
#include "../bevy_egui_paneled_playground/src/c_wrapper.h";

int main() {
    int n;
    std::cout << "Bevy egui app causing linking errors";
    std::cin >> n;
    paneled_playground_c_wrapper();

    std::cout << "The following egui demo crashes due to \"!\" i.e. never return type in eframe\n Type numeric to continue..";
    std::cin >> n;
    start_egui_demo();
    std::cout << "\nSee doesn't reach : ";
    std::cin >> n;
    return 1;
}