// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#pragma comment(lib, "../bevy_egui_paneled_playground/target/release/egui_paneled_playground.lib")
//#pragma comment(lib, "../bevy_egui_paneled_playground/target/debug/egui_paneled_playground.pdb")

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
#pragma comment(lib, "d3dcompiler")

#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/glslang.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/HLSL.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/OGLCompiler.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/OSDependent.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV-Tools.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV-Tools-opt.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPVRemapper.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/GenericCodeGen.lib")
#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/MachineIndependent.lib")

//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/glslangd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/HLSLd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/OGLCompilerd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/OSDependentd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/SPIRVd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/SPIRV-Toolsd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/SPIRV-Tools-optd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/SPVRemapperd.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/GenericCodeGend.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Debug/lib/MachineIndependentd.lib")
//I get the following errors when trying to link
/*
// Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL': value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(wrapper.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(wrapper.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cross.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cross.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cross_util.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cross_util.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_glsl.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_glsl.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_hlsl.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_hlsl.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_msl.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_msl.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cfg.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cfg.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cross_parsed_ir.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_cross_parsed_ir.o)	1
Error	LNK2038	mismatch detected for '_ITERATOR_DEBUG_LEVEL' : value '0' doesn't match value '2' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_parser.o)	1
Error	LNK2038	mismatch detected for 'RuntimeLibrary' : value 'MD_DynamicRelease' doesn't match value 'MDd_DynamicDebug' in ConsoleApplication1.obj	ConsoleApplication1	C:\Users\jmw99\OneDrive\Documents\BayswaterPC\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(spirv_parser.o)	1
*/


#include <iostream>

/////glslang importing troubles
#include "../bevy_egui_paneled_playground/src/c_wrapper.h";

int main() {
  int n;
  std::cout << "Got it built and linking but runtime crash.  Enter a number to continue... ";
  std::cin >> n;
  paneled_playground_c_wrapper();

  std::cout << "Will crash";
  std::cin >> n;
  return 1;
}