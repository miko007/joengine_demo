#include <jo/jo.h>

unsigned int EntityID;

typedef struct Entity {
	unsigned int id;
	jo_pos3Df position;
} Entity;

void render(void) {
	Entity player = {
		.id       = ++EntityId,
		.position = {0}
	};
	jo_sprite_draw3D(0, player.position.x, player.position.y, 500);
}

void jo_main(void) {
	jo_core_init(JO_COLOR_Black);
	jo_sprite_add_tga("TEX", "SONIC.TGA", JO_COLOR_Transparent);
	jo_core_add_callback(render);
	jo_core_run();
}
