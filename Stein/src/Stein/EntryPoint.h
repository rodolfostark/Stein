#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stein::Application* Stein::CreateApplication();

int main(int argc, char** argv)
{
	Stein::Log::Init();
	ST_CORE_WARN("Initialize Log!");
	int a = 5;
	ST_INFO("Hello! Var={0}", a);

	auto app = Stein::CreateApplication();
	app->Run();
	delete app;
}

#endif