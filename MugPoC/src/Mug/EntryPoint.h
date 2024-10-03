#pragma once

#ifdef MG_PLATFORM_WINDOWS

extern Mug::Application* Mug::CreateApplication();

int  main(int argc, char** argv) {

	auto app = Mug::CreateApplication();
	app->Run();
	delete app;

}

#endif