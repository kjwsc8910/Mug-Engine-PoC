#include "mgpch.h"
#include "Application.h"

#include "Mug/Events/ApplicationEvent.h"
#include "Mug/Log.h"


namespace Mug {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication)) {
			MG_TRACE("Event is Application");
		}
		MG_TRACE(e.ToString());
		//MG_TRACE(e);

		while (true);
	}

}