#pragma once

#include <vector>

namespace engine
{
	class renderer
	{
	public:
		renderer();
		~renderer();

	public:
		void load_particles(const size_t particle_count, const size_t particle_size, const void* particles);
		size_t get_particle_count() const { return particle_count; }

		void clear();
		void draw_particles();

		std::vector<unsigned char> read_pixels(const int width, const int height) const;

	private:
		unsigned int vao;
		unsigned int particle_buffer;
		size_t particle_count;
	}; 
}

