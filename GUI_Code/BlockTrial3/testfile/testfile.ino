#include <Adafruit_NeoPixel.h>
#include <LightSignal.h>
#include <LightParameter.h>

LightSignal Strip(11, 6, NEO_RGBW + NEO_KHZ800);

LightParameter Pattern[1];

void setup() {
Serial.begin(115200);
Strip.begin();

int* a = new int[11] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
Pattern[0].initialize( THEATER_CHASE, NO_DIR, 1, 3, 0, 0, 0, 255, 16730441, 2945842821, 2, a, 11);
delete [] a;



}

void loop() {
for(int i = 0; i < 1; i++){
    Strip.mainLoop(&Pattern[i]);
 }
}