#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Mug {

	class MUG_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}