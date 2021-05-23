# visual_studio_cpp_bevy_demo
 Project to show how [a simple bevy app](https://github.com/bayswaterpc/bevy_egui_paneled_playground) could be linked to a c++ visual studio project.\

# Progress
I have been able to link an [egui app](https://github.com/bayswaterpc/visual_studio_cpp_egui_demo)  to a console project and have it run.\

With the bevy app I was hitting a bunch of link errors coming from glslang which I sourced to [khronos glslang](https://github.com/KhronosGroup/glslang).

```
Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2001	unresolved external symbol glslang_initialize_process	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_shader_create	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_shader_preprocess	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_shader_parse	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_create	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_add_shader	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_link	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_SPIRV_generate	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_SPIRV_get_messages	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_SPIRV_get_size	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_SPIRV_get_ptr	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_delete	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_shader_delete	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_shader_get_info_log	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_shader_get_info_debug_log	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_get_info_log	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_program_get_info_debug_log	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	
Error	LNK2001	unresolved external symbol glslang_finalize_process	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\egui_paneled_playground.lib(bevy_glsl_to_spirv-646b26c49c5d3845.bevy_glsl_to_spirv.ax0waac2-cgu.1.rcgu.o)	1	

```

# GLSLANG Linking Woes
I downloaded their [master-tot release](https://github.com/KhronosGroup/glslang/releases/tag/master-tot) and added linkage to the lib's with

``` cpp
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
```

With that I was able to upgrade my errors :D

```
Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2001	unresolved external symbol "bool __cdecl glslang::InitializeProcess(void)" (?InitializeProcess@glslang@@YA_NXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "void __cdecl glslang::FinalizeProcess(void)" (?FinalizeProcess@glslang@@YAXXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: __cdecl glslang::TShader::TShader(enum EShLanguage)" (??0TShader@glslang@@QEAA@W4EShLanguage@@@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: void __cdecl glslang::TShader::setStrings(char const * const *,int)" (?setStrings@TShader@glslang@@QEAAXPEBQEBDH@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: bool __cdecl glslang::TShader::parse(struct TBuiltInResource const *,int,enum EProfile,bool,bool,enum EShMessages,class glslang::TShader::Includer &)" (?parse@TShader@glslang@@QEAA_NPEBUTBuiltInResource@@HW4EProfile@@_N2W4EShMessages@@AEAVIncluder@12@@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: bool __cdecl glslang::TShader::preprocess(struct TBuiltInResource const *,int,enum EProfile,bool,bool,enum EShMessages,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class glslang::TShader::Includer &)" (?preprocess@TShader@glslang@@QEAA_NPEBUTBuiltInResource@@HW4EProfile@@_N2W4EShMessages@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVIncluder@12@@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: char const * __cdecl glslang::TShader::getInfoLog(void)" (?getInfoLog@TShader@glslang@@QEAAPEBDXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: char const * __cdecl glslang::TShader::getInfoDebugLog(void)" (?getInfoDebugLog@TShader@glslang@@QEAAPEBDXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: __cdecl glslang::TProgram::TProgram(void)" (??0TProgram@glslang@@QEAA@XZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: bool __cdecl glslang::TProgram::link(enum EShMessages)" (?link@TProgram@glslang@@QEAA_NW4EShMessages@@@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: char const * __cdecl glslang::TProgram::getInfoLog(void)" (?getInfoLog@TProgram@glslang@@QEAAPEBDXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: char const * __cdecl glslang::TProgram::getInfoDebugLog(void)" (?getInfoDebugLog@TProgram@glslang@@QEAAPEBDXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\glslang.lib(glslang_c_interface.obj)	1	
Error	LNK2001	unresolved external symbol "public: void __cdecl glslang::TPoolAllocator::push(void)" (?push@TPoolAllocator@glslang@@QEAAXXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: void __cdecl glslang::TPoolAllocator::pop(void)" (?pop@TPoolAllocator@glslang@@QEAAXXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: void * __cdecl glslang::TPoolAllocator::allocate(unsigned __int64)" (?allocate@TPoolAllocator@glslang@@QEAAPEAX_K@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "class glslang::TPoolAllocator & __cdecl glslang::GetThreadPoolAllocator(void)" (?GetThreadPoolAllocator@glslang@@YAAEAVTPoolAllocator@1@XZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "int __cdecl glslang::GetKhronosToolId(void)" (?GetKhronosToolId@glslang@@YAHXZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: class glslang::TIntermAggregate * __cdecl glslang::TIntermediate::findLinkerObjects(void)const " (?findLinkerObjects@TIntermediate@glslang@@QEBAPEAVTIntermAggregate@2@XZ)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: static int __cdecl glslang::TIntermediate::computeTypeLocationSize(class glslang::TType const &,enum EShLanguage)" (?computeTypeLocationSize@TIntermediate@glslang@@SAHAEBVTType@2@W4EShLanguage@@@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: static int __cdecl glslang::TIntermediate::getBaseAlignmentScalar(class glslang::TType const &,int &)" (?getBaseAlignmentScalar@TIntermediate@glslang@@SAHAEBVTType@2@AEAH@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: static int __cdecl glslang::TIntermediate::getMemberAlignment(class glslang::TType const &,int &,int &,enum glslang::TLayoutPacking,bool)" (?getMemberAlignment@TIntermediate@glslang@@SAHAEBVTType@2@AEAH1W4TLayoutPacking@2@_N@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
Error	LNK2001	unresolved external symbol "public: static bool __cdecl glslang::TIntermediate::improperStraddle(class glslang::TType const &,int,int)" (?improperStraddle@TIntermediate@glslang@@SA_NAEBVTType@2@HH@Z)	ConsoleApplication1	C:\visual_studio_cpp_bevy_demo\ConsoleApplication1\SPIRV.lib(GlslangToSpv.obj)	1	
****
```

If there's anyone out there experienced with linking glslang projects who'se got tips please message.  Thanks!
