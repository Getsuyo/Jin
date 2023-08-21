#pragma once
#include"Core.h"

namespace Jin{
	class JIN_API App {
	public:
		App();
		virtual ~App();

		void Run();
	};

	App* CreateApp();
}
