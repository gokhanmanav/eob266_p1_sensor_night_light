#define GPIO_RGB_LED_RED    3
#define GPIO_RGB_LED_GREEN  9
#define GPIO_RGB_LED_BLUE   10
#define AN_LDR              A0
#define AN_COLOR            A1
#define AN_DENSITY          A2

int ldr_value = 0;
int an_density_value = 0;
int an_color_value = 0;

int rgb_red_value = 0;
int rgb_green_value = 0;
int rgb_blue_value = 0;

void setup() {
  // For debuging
  Serial.begin(9600);
}

void loop() {
  // Sensör girişlerini oku
    // Işık şiddeti
    an_density_value = analogRead(AN_DENSITY);
    // Renk ayarı
    /*
     * https://en.wikipedia.org/wiki/Hue
    */
    an_color_value = analogRead(AN_COLOR);
    // LDR
    ldr_value = analogRead(AN_LDR); // 0-1023 ADC 10 bit

  // Çıkış değerlerini yaz
    // R Led şiddeti güncelle
    // G Led şiddeti güncelle
    // B Led şiddeti güncelle

  Serial.println("");
  Serial.println("-----------------------");
  Serial.print("Isik siddeti: \t\t");
  Serial.println(an_density_value);
  Serial.print("Renk Degeri: \t\t");
  Serial.println(an_color_value);
  Serial.print("Ortam aydınlık degeri: \t");
  Serial.println(ldr_value);

  delay(2000);
}


/*
  sensorValue = analogRead(analogInPin);

  outputValue = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(rgb_led_red, outputValue);
  analogWrite(rgb_led_green, outputValue);
  analogWrite(rgb_led_blue, outputValue);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  delay(2);
*/