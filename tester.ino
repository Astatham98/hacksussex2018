#include "FastLED.h"
#define NUM_LEDS 1153
#define DATA_PIN 3
CRGB leds[NUM_LEDS];
int leftcounter = 0;
int rightcounter = 0; 
//unsigned int top[] = {770, 967, 835, 897, 976, 1095, 968, 771, 768};
//unsigned int left[] = {36, 19, 24, 33, 42, 43, 0, 41, 34, 52, 53, 63, 54, 55, 384, 400, 392, 416, 408, 424, 432, 440, 401, 393, 402, 433, 417, 409, 426, 434, 404, 405, 406, 407, 491, 1131, 1138, 1115, 1133, 1134, 1118, 1135, 1143, 1101, 1127, 1111};
unsigned int upper_middle_paddle [] = {1000, 952, 948, 990, 923, 963, 987, 966, 924, 951, 1012, 971, 970, 986, 950, 925, 969, 978, 995, 927, 962, 972, 960, 980, 977, 961, 973, 984, 968};
unsigned int middle_paddle [] = {191, 233, 183, 175, 151, 193, 167, 143, 225, 182, 224, 200, 166, 100, 159, 135, 134, 217, 194, 240, 190, 103, 195, 241};
//unsigned int bottom_left_one [] = {191, 183, 175, 127, 151, 143, 101, 182, 166, 100, 6, 159, 135, 134, 190, 103, 64, 241};
//unsigned int bottom_left_two [] = {175, 127, 35, 143, 101, 3, 2, 182, 166, 100, 6, 1, 190, 103, 64};
//unsigned int bottom_left_three [] = {175, 127, 35, 143, 101, 3, 2, 182, 166, 100, 6, 1, 190, 103, 64};
//unsigned int bottom_right_one [] = {191, 192, 233, 183, 151, 193, 167, 225, 199, 224, 200, 196, 159, 135, 134, 217, 194, 198, 240, 197, 195, 241};
//unsigned int bottom_right_two [] = {192, 233, 256, 193, 167, 261, 225, 199, 224, 200, 262, 258, 196, 259, 217, 194, 198, 240, 197, 195, 263};
//unsigned int bottom_right_three [] = {334, 339, 326, 192, 256, 261, 199, 327, 338, 262, 258, 196, 259, 198, 332, 347, 197, 263};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("hello");  
  delay(2000);
      FastLED.addLeds<APA102, 4, 5, RGB, DATA_RATE_MHZ(2)>(leds, NUM_LEDS);
   
   for (int i =0; i <29; i++){
leds[upper_middle_paddle[i]] = CRGB::Grey;
    FastLED.show();
    delay(20);
    }
   for (int k = 0; k < 24; k++){
    leds[middle_paddle[k]] = CRGB::Grey;
    FastLED.show();
    delay(20);
    }
}
void loop(){
  delay(4000);
  byte countl1 = 0;
  while (countl1 < sizeof(bottom_left_one)){
    countl1++;
    //leds[bottom_left_one[countl1]] = CRGB::Grey;
    FastLED.show();
    delay(20);}
  delay(2000);
  byte countl2 = 0;
  while (countl2 < sizeof(bottom_left_one)){
    countl2++;
    //leds[bottom_left_two[countl2]] = CRGB::Grey;
    FastLED.show();
    delay(20);}
      }
    
    
//  for (int i = 0; i < 9; i++){
//    leds[top[i]] = CRGB::White;
//    FastLED.show();
//    delay(20);
//  }
//  for (int x = 0; x < 46; x++){
//    leds[left[x]] = CRGB::White;
//    FastLED.show();
//    delay(20);
//    }
