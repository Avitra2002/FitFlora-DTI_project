// ========================
//   BASIC LIGHT PATTERNS
// ========================
#include <FastLED.h>
FASTLED_USING_NAMESPACE
#define LED_TYPE            WS2811
#define COLOR_ORDER         GRB
#define NUM_LEDS            20
#define BRIGHTNESS          255
#define FRAMES_PER_SECOND   120
CRGB leds[NUM_LEDS];

uint8_t gCurrentPatternNumber = 0;  // Index number of which pattern is current
uint8_t gHue = 0;                   // rotating "base color" used by many of the patterns

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

void rainbow() {
  // FastLED's built-in rainbow generator
  fill_rainbow(leds, NUM_LEDS, gHue, 7);
}
void rainbowWithGlitter() {
  // built-in FastLED rainbow, plus some random sparkly glitter
  rainbow();
  // addGlitter(80);
}

// void addGlitter( fract8 chanceOfGlitter) {
//   if( random8() < chanceOfGlitter) {
//     leds[ random16(NUM_LEDS) ] += CRGB::White;
//   }
// }

void confetti() {
  // random colored speckles that blink in and fade smoothly
  fadeToBlackBy(leds, NUM_LEDS, 10);
  int pos = random16(NUM_LEDS);
  leds[pos] += CHSV(gHue + random8(64), 200, 255);
}
void sinelon() {
  // a colored dot sweeping back and forth, with fading trails
  fadeToBlackBy(leds, NUM_LEDS, 20);
  int pos = beatsin16(13, 0, NUM_LEDS - 1);
  leds[pos] += CHSV(gHue, 255, 192);
}
void bpm() {
  // colored stripes pulsing at a defined Beats-Per-Minute (BPM)
  uint8_t BeatsPerMinute = 62;
  CRGBPalette16 palette = PartyColors_p;
  uint8_t beat = beatsin8(BeatsPerMinute, 64, 255);
  for (int i = 0; i < NUM_LEDS; i++) {  //9948
    leds[i] = ColorFromPalette(palette, gHue + (i * 2), beat - gHue + (i * 10));
  }
}
void juggle() {
  // eight colored dots, weaving in and out of sync with each other
  fadeToBlackBy(leds, NUM_LEDS, 20);
  uint8_t dothue = 0;
  for (int i = 0; i < 8; i++) {
    leds[beatsin16(i + 7, 0, NUM_LEDS - 1)] |= CHSV(dothue, 200, 255);
    dothue += 32;
  }
}
void bground() {
  static int startIndex = 0;  // starting index of the rainbow
  static int endIndex = 3;    // ending index of the rainbow

  // loop through each LED within the specified range
  for (int i = startIndex; i <= endIndex; i++) {
    // calculate the color index based on the LED index
    uint8_t colorIndex = map(i, startIndex, endIndex, 150, 100);  // start with green

    // generate a rainbow gradient
    CRGB color = CHSV(colorIndex, 255, 255);

    // set the color of the LED
    leds[i] = color;
  }

  FastLED.show();
  delay(100);  // adjust delay for speed

  // increment the start and end indices for the next loop iteration
  startIndex++;
  endIndex++;

  // if the end index is greater than the number of LEDs, reset the indices
  if (endIndex > NUM_LEDS) {
    startIndex = 0;
    endIndex = 3;
  }
}

#define COOLING  55
#define SPARKING 120
bool gReverseDirection = false;

void Fire2012WithPalette() {
  random16_add_entropy( random());
  CRGBPalette16 gPal;
  
  gPal = HeatColors_p;

  // gPal = CRGBPalette16( CRGB::Black, CRGB::Green, CRGB::Blue,  CRGB::Purple);
  // Array of temperature readings at each simulation cell
  static uint8_t heat[NUM_LEDS];

  // Step 1.  Cool down every cell a little
    for( int i = 0; i < NUM_LEDS; i++) {
      heat[i] = qsub8( heat[i],  random8(0, ((COOLING * 10) / NUM_LEDS) + 2));
    }
  
    // Step 2.  Heat from each cell drifts 'up' and diffuses a little
    for( int k= NUM_LEDS - 1; k >= 2; k--) {
      heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2] ) / 3;
    }
    
    // Step 3.  Randomly ignite new 'sparks' of heat near the bottom
    if( random8() < SPARKING ) {
      int y = random8(7);
      heat[y] = qadd8( heat[y], random8(160,255) );
    }

    // Step 4.  Map from heat cells to LED colors
    for( int j = 0; j < NUM_LEDS; j++) {
      // Scale the heat value from 0-255 down to 0-240
      // for best results with color palettes.
      uint8_t colorindex = scale8( heat[j], 240);
      CRGB color = ColorFromPalette( gPal, colorindex);
      int pixelnumber;
      if( gReverseDirection ) {
        pixelnumber = (NUM_LEDS-1) - j;
      } else {
        pixelnumber = j;
      }
      leds[pixelnumber] = color;
    }
}


// ============================
//         VOID SETUP
// ============================
void setup() {
  setup_sensors();
  delay(3000);
  // Serial.begin(9600);
  // Serial.println("SETUP READY");
  //   lcd.begin(16, 2);
  //   setup_ready();
  //   delay(50);

  FastLED.setBrightness(BRIGHTNESS);
};
