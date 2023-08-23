#include <Adafruit_NeoPixel.h>

#define NUM_PIXELS 86  // Número total de Neopixels en la cadena
#define PIN_DIN 5     // Pin al que está conectada la cadena de Neopixels

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_PIXELS, PIN_DIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // Inicializar la librería Neopixel
  pixels.show();  // Mostrar colores (inicialmente apagados)
}

void loop() {
  // Aquí puedes controlar los Neopixels según tu necesidad
  // Por ejemplo, para hacer un display 88:88, establece colores en los Neopixels correspondientes
}