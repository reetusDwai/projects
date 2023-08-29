#include <stdio.h>
#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

int main(void) {
	int width, height, comp;
	int img[height];
	unsigned char *data = stbi_load("test.jpg", &width, &height, &comp, 0);
	if (data) {
		printf("width = %d, height = %d, comp = %d (channels)\n", width, height, comp);
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width * comp; j++) {
				// prints each pixel as hexidecimal
				printf("%02x%s", data[i*width+j], ((j + 1) % comp) ? "" : "\n"); 
			}
			printf("\n");
		}
	}
	return 0;
}
