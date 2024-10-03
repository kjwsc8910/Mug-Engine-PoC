#pragma once

#include "Core.h"

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