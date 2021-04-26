#include "stpch.h"
#include "Application.h"

#include "Stein/Events/ApplicationEvent.h"
#include "Stein/Log.h"

namespace Stein {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			ST_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			ST_TRACE(e);
		}
		while (true);	
	}
}