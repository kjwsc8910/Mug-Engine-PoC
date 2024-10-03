#pragma once

#ifdef MG_PLATFORM_WINDOWS

extern Mug::Application* Mug::CreateApplication();

int  main(int argc, char** argv) {

	Mug::Log::Init();
	MG_CORE_WARN("Initialised Log!");
	int a = 5;
	MG_INFO("Hello! Var={0}", a);

	auto app = Mug::CreateApplication();
	app->Run();
	delete app;

}

#endif