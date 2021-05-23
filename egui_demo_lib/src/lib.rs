#[no_mangle]
pub extern fn start_egui_demo() {
    let app = egui_demo_lib::WrapApp::default();
    let options = eframe::NativeOptions {
        // Let's show off that we support transparent windows
        transparent: true,
        decorated: true,
        ..Default::default()
    };


    eframe::run_native(Box::new(app), options);
    // println!("Why no reach?");
}
