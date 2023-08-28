#include <stdio.h>
#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

int main(void) {
	int width, height, comp;
	unsigned char *data = stbi_load("test.jpg", &width, &height, &comp, 0);
	if (data) {
		printf("width = %d, height = %d, comp = %d (channels)\n", width, height, comp);
		for (int i = 0; i < width * height * comp; i++) {
			printf("%02x%s", data[i], ((i + 1) % comp) ? "" : "\n");
		}
		printf("\n");
	}
	return 0;
}
