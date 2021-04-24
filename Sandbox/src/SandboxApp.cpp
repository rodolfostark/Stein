#include <Stein.h>

class Sandbox : public Stein::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Stein::Application* Stein::CreateApplication()
{
	return new Sandbox();
}