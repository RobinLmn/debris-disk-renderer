#pragma once

#include <glm/glm.hpp>

namespace engine
{
	class input_manager
	{
	public:
		static bool is_key_pressed(const int key_code);
		static bool is_mouse_button_pressed(const int button);
		static glm::vec2 get_mouse_position();
	};
}