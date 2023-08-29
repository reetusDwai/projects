#include <stdio.h>
#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

int[][] img_to_gray() {
	int width, height, comp;
	unsigned char *data = stbi_load("test.jpg", &width, &height, &comp, 0);
	int img[height][width];
	if (data) {
		printf("width = %d, height = %d, comp = %d (channels)\n", width, height, comp);
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width * comp; j++) {
				// prints each pixel as hexidecimal
				printf("%02x%s", data[i*width+j], ((j + 1) % comp) ? "" : "\n"); 
				// converts each pixel to a luminace value from 0 - 255;
				img[i][j] = 0;
			}
			printf("\n");
		}
	}
	return img;
}

// Luminace = 0.299 R + 0.587 G + 0.114 B
int main(void) {
}
