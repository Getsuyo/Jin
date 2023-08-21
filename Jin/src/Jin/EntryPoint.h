#pragma once

#ifdef JIN_PLATFORM_WINDOWS

extern Jin::App* Jin::CreateApp();

int main(int argc, char** argv) {
	printf("Game EN Jin!");
	auto app = Jin::CreateApp();
	app->Run();
	delete app;
}
#endif