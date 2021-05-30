# visual_studio_cpp_bevy_demo
 Project to show how [a simple bevy app](https://github.com/bayswaterpc/bevy_egui_paneled_playground) could be linked to a c++ visual studio project.

# Progress
Got it linking, app is launching and hitting a runtime error in the render
![](https://github.com/bayswaterpc/visual_studio_cpp_bevy_demo/blob/main/assets/gifs/bevyRuntimeCrash.gif)

Call Stack
```
 	ntdll.dll!00007ffeb236f122()	Unknown
 	ntdll.dll!00007ffeb2377ee2()	Unknown
 	ntdll.dll!00007ffeb23781ca()	Unknown
 	ntdll.dll!00007ffeb237de51()	Unknown
 	ntdll.dll!00007ffeb2295bf0()	Unknown
 	ntdll.dll!00007ffeb22947b1()	Unknown
 	ucrtbase.dll!00007ffeafdef05b()	Unknown
 	ConsoleApplication1.exe!std::_Hash<class std::_Umap_traits<unsigned int,unsigned int,class std::_Uhash_compare<unsigned int,struct std::hash<unsigned int>,struct std::equal_to<unsigned int> >,class std::allocator<struct std::pair<unsigned int const ,unsigned int> >,0> >::~_Hash<class std::_Umap_traits<unsigned int,unsigned int,class std::_Uhash_compare<unsigned int,struct std::hash<unsigned int>,struct std::equal_to<unsigned int> >,class std::allocator<struct std::pair<unsigned int const ,unsigned int> >,0> >(void)	C++
 	ConsoleApplication1.exe!spvBinaryParse()	C++
 	ConsoleApplication1.exe!spvtools::val::ValidationState_t::ValidationState_t(struct spv_context_t const * const,struct spv_validator_options_t const * const,unsigned int const *,unsigned __int64,unsigned int)	C++
 	ConsoleApplication1.exe!spvValidateWithOptions()	C++
 	ConsoleApplication1.exe!glslang::SpirvToolsValidate(class glslang::TIntermediate const &,class std::vector<unsigned int,class std::allocator<unsigned int> > &,class spv::SpvBuildLogger *,bool)	C++
 	ConsoleApplication1.exe!glslang::GlslangToSpv(class glslang::TIntermediate const &,class std::vector<unsigned int,class std::allocator<unsigned int> > &,class spv::SpvBuildLogger *,struct glslang::SpvOptions *)	C++
 	ConsoleApplication1.exe!glslang_program_SPIRV_generate()	C++
 	ConsoleApplication1.exe!_ZN18bevy_glsl_to_spirv7compile17hb793c1f048f20f95E()	Unknown
 	ConsoleApplication1.exe!_ZN11bevy_render6shader6shader13glsl_to_spirv17h8f9876b2656dd344E()	Unknown
 	ConsoleApplication1.exe!_ZN166_$LT$bevy_wgpu..renderer..wgpu_render_resource_context..WgpuRenderResourceContext$u20$as$u20$bevy_render..renderer..render_resource_context..RenderResourceContext$GT$22get_specialized_shader17hf50d398d25f931c4E()	Unknown
 	ConsoleApplication1.exe!_ZN107_$LT$bevy_render..pipeline..pipeline_compiler..PipelineSpecialization$u20$as$u20$core..default..Default$GT$7default17h1cf27117c8aa4706E()	Unknown
 	ConsoleApplication1.exe!_ZN11bevy_render8pipeline17pipeline_compiler16PipelineCompiler16compile_pipeline17h3ba5c0eb044badf5E()	Unknown
 	ConsoleApplication1.exe!_ZN88_$LT$bevy_egui..egui_node..EguiNode$u20$as$u20$bevy_render..render_graph..node..Node$GT$7prepare17hc7fe0319deb37c5bE()	Unknown
 	ConsoleApplication1.exe!_ZN11bevy_render12render_graph5graph11RenderGraph7prepare17h50f61ab271def66aE()	Unknown
 	ConsoleApplication1.exe!_ZN8bevy_ecs5world5World14resource_scope17h58133c7e9e548cf2E()	Unknown
 	ConsoleApplication1.exe!_ZN9bevy_wgpu22get_wgpu_render_system17h7dd8ca42d4a60ce2E()	Unknown
 	ConsoleApplication1.exe!_ZN125_$LT$bevy_ecs..system..exclusive_system..ExclusiveSystemFn$u20$as$u20$bevy_ecs..system..exclusive_system..ExclusiveSystem$GT$3run17hba036a999a5ff9cfE()	Unknown
 	ConsoleApplication1.exe!_ZN91_$LT$bevy_ecs..schedule..stage..SystemStage$u20$as$u20$bevy_ecs..schedule..stage..Stage$GT$3run17h7ef2fe1069124bcbE()	Unknown
 	ConsoleApplication1.exe!_ZN81_$LT$bevy_ecs..schedule..Schedule$u20$as$u20$bevy_ecs..schedule..stage..Stage$GT$3run17h4cfdf0f477a7636aE()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop18EventLoop$LT$T$GT$10run_return28_$u7b$$u7b$closure$u7d$$u7d$17h0e763ee5fce6e25bE.llvm.13395996543744328826()	Unknown
 	ConsoleApplication1.exe!_ZN101_$LT$std..panic..AssertUnwindSafe$LT$F$GT$$u20$as$u20$core..ops..function..FnOnce$LT$$LP$$RP$$GT$$GT$9call_once17h8023ea4f9ea7e8bfE()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop6runner24EventLoopRunner$LT$T$GT$10send_event17hd957d3efe38517a8E()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop6runner24EventLoopRunner$LT$T$GT$13move_state_to17h8230b285528647e7E.llvm.2670653554209619599()	Unknown
 	ConsoleApplication1.exe!_ZN101_$LT$std..panic..AssertUnwindSafe$LT$F$GT$$u20$as$u20$core..ops..function..FnOnce$LT$$LP$$RP$$GT$$GT$9call_once17h1d123c641b7b2666E()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop6runner24EventLoopRunner$LT$T$GT$12catch_unwind17hac0ac7d8496c7ed8E()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop20process_control_flow17h46d79c8bded88f6cE()	Unknown
 	comctl32.dll!00007ffea2cdd3b6()	Unknown
 	comctl32.dll!00007ffea2cdd26c()	Unknown
 	user32.dll!00007ffeb121e858()	Unknown
 	user32.dll!00007ffeb121e3dc()	Unknown
 	user32.dll!00007ffeb1230bc3()	Unknown
 	ntdll.dll!00007ffeb2310c54()	Unknown
 	win32u.dll!00007ffeb01c1704()	Unknown
 	user32.dll!00007ffeb121e2ea()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop18EventLoop$LT$T$GT$10run_return17h46e70ffb0d340d0fE()	Unknown
 	ConsoleApplication1.exe!_ZN5winit13platform_impl8platform10event_loop18EventLoop$LT$T$GT$3run17hdabc7fb417561bd1E()	Unknown
 	ConsoleApplication1.exe!_ZN5alloc4sync12Arc$LT$T$GT$9drop_slow17hffbf8cbdc3fd405aE()	Unknown
 	ConsoleApplication1.exe!_ZN68_$LT$bevy_winit..WinitPlugin$u20$as$u20$bevy_app..plugin..Plugin$GT$5build17h1223e73502aa14aaE()	Unknown
 	ConsoleApplication1.exe!_ZN10bevy_winit17winit_runner_with17h154f65e21e01f2e9E()	Unknown
 	ConsoleApplication1.exe!_ZN4core3ops8function2Fn4call17hc860b9bc2bc3fb4fE.llvm.9512385784761499075()	Unknown
 	ConsoleApplication1.exe!_ZN8bevy_app11app_builder10AppBuilder3run17hb9c4405ec233bab8E()	Unknown
 	ConsoleApplication1.exe!_ZN23egui_paneled_playground12run_app_main17h2fb4be79067939e3E()	Unknown
>	ConsoleApplication1.exe!main() Line 74	C++

```
# Additional Info
- Using Rust Nightly
- Using Visual Studio 2019
- MSVC v142 - VS 2019 C__ x64/x86 Build tools
- Building for x64 Release
