#include "mgpch.h"
#include <Mug.h>

class Sandbox : public Mug::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Mug::Application* Mug::CreateApplication() {
	return new Sandbox();
}