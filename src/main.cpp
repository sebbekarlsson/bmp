#include <stdio.h>
#include <bmp/bmp.hpp>

int main(int argc, char *argv[]) {
  BMP* bmp = new BMP(128, 128);

  int h = 128/2;
  for (int i = 0; i < 128; i++) {
    bmp->set_pixel(i, h, { 255, 0, 0 });
  }

  bmp->write("test.bmp");

  delete bmp;

  return 0;
}
