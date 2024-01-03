// ADVANCED LED PROMPTS
typedef void (*SimplePatternList[])();
SimplePatternList pattern_4 = { juggle, rainbow, confetti, sinelon, bpm };
SimplePatternList pattern_3 = { rainbow, juggle, bpm };
SimplePatternList pattern_2 = { juggle, bpm };
SimplePatternList pattern_1 = { bpm };
SimplePatternList pattern_0 = { bpm };

// Fire2012WithPalette
void nextPattern() {
  // add one to the current pattern number, and wrap around at the end
  gCurrentPatternNumber = (gCurrentPatternNumber + 1) % ARRAY_SIZE(pattern_4);
}

// IMPORTANT: TO ACTIVATE THE SENSORS
// TO ADD: BOOLEAN SWITCH BASED ON TIMER
int counter_matrix[3] = {counter_0, counter_1, counter_2};
int range_matrix[5] = {6, 10, 10, 14, 20};



bool switch_4_0 = false;
bool switch_3_0 = false;
bool switch_2_0 = false;
bool switch_1_0 = false;
bool switch_0_0 = false;

bool switch_4_1 = false;
bool switch_3_1 = false;
bool switch_2_1 = false;
bool switch_1_1 = false;
bool switch_0_1 = false;

bool switch_4_2 = false;
bool switch_3_2 = false;
bool switch_2_2 = false;
bool switch_1_2 = false;
bool switch_0_2 = false;

// ADVANCED LED PROMPTS
void run_pattern_4_0() {
  if (switch_4_0) {
    int j_value = 4;
    FastLED.addLeds<LED_TYPE, led_pin_0, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_4[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}     
void run_pattern_4_1() {
  if (switch_4_1) {
    int j_value = 4;
    FastLED.addLeds<LED_TYPE, led_pin_1, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_4[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}     
void run_pattern_4_2() {
  if (switch_4_2) {
    int j_value = 4;
    FastLED.addLeds<LED_TYPE, led_pin_2, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_4[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}     


void run_pattern_3_0() {
  if (switch_3_0) {
    int j_value = 3;
    FastLED.addLeds<LED_TYPE, led_pin_0, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_3[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}
void run_pattern_3_1() {
  if (switch_3_1) {
    int j_value = 3;
    FastLED.addLeds<LED_TYPE, led_pin_1, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_3[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}
void run_pattern_3_2() {
  if (switch_3_2) {
    int j_value = 3;
    FastLED.addLeds<LED_TYPE, led_pin_2, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_3[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}

void run_pattern_2_0() {
  if (switch_2_0) {
    int j_value = 2;
    FastLED.addLeds<LED_TYPE, led_pin_0, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_2[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
    } 
}
void run_pattern_2_1() {
  if (switch_2_1) {
    int j_value = 2;
    FastLED.addLeds<LED_TYPE, led_pin_1, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_2[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}
void run_pattern_2_2() {
  if (switch_2_2) {
    int j_value = 2;
    FastLED.addLeds<LED_TYPE, led_pin_2, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_2[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}

void run_pattern_1_0() {
  if (switch_1_0) {
    int j_value = 1;
    FastLED.addLeds<LED_TYPE, led_pin_0, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_1[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }  
}
void run_pattern_1_1() {
  if (switch_1_1) {
    int j_value = 1;
    FastLED.addLeds<LED_TYPE, led_pin_1, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_1[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}
void run_pattern_1_2() {
  if (switch_1_2) {
    int j_value = 1;
    FastLED.addLeds<LED_TYPE, led_pin_2, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_1[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}


void run_pattern_0_0() {
  if (switch_0_0) {
    int j_value = 0;
    FastLED.addLeds<LED_TYPE, led_pin_0, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_0[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}
void run_pattern_0_1() {
  if (switch_0_1) {
    int j_value = 0;
    FastLED.addLeds<LED_TYPE, led_pin_1, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_0[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}
void run_pattern_0_2() {
  if (switch_0_2) {
    int j_value = 0;
    FastLED.addLeds<LED_TYPE, led_pin_2, COLOR_ORDER>(leds, range_matrix[j_value]).setCorrection(TypicalLEDStrip);

    pattern_0[gCurrentPatternNumber]();

    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 

    EVERY_N_MILLISECONDS( 20 ) { gHue++; } 
    EVERY_N_SECONDS( 10 ) { nextPattern(); }
  }
}










