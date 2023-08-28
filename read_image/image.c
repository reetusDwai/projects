#include <stdio.h>
#include <stdlib.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"
const size_t NUM_PIXELS_TO_PRINT = 10U;


int main() {
	int width, height, comp;
	unsigned char *data = stbi_load("test.png", &width, &height, &comp, 0);
	if (data) {
		printf("width = %d, height = %d, comp = %d (channels)\n", width, height, comp);
		for (size_t i = 0; i < NUM_PIXELS_TO_PRINT * comp; i++) {
			printf("%02x%s", data[i], ((i + 1) % comp) ? "" : "\n");
		}
		printf("\n");
	}
	return 0;
}
