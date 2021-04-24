#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stein::Application* Stein::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Stein::CreateApplication();
	app->Run();
	delete app;
}

#endif