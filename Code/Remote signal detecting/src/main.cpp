#include <Arduino.h>
#include <IRrecv.h>
#include <IRutils.h>

const uint16_t RECV_PIN = 14;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();
  Serial.println("Ready. Point your remote at led and press buttons");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println("\n Signal Received");
    Serial.print("Protocol :");
    Serial.println(typeToString(results.decode_type));
    Serial.print("Code     : 0x");
    Serial.println(results.value, HEX);
    Serial.print("Bits     : ");
    Serial.println(results.bits);

    Serial.println("Raw timings:");
    for (uint16_t i = 1; i < results.rawlen; i++) {
      Serial.print(results.rawbuf[i] * RAWTICK);
      if (i < results.rawlen - 1) Serial.println(", ");
    }
    Serial.println("\n___________________________");

    irrecv.resume();
  }
}