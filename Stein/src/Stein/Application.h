#pragma once

#include "Core.h"

namespace Stein {
	
	class STEIN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in CLIENT
	Application* CreateApplication();

}

