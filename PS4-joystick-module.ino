#include "PS4Joystick.h"

PS4Joystick ps4;

void setup() {
  Serial.begin(9600);

  ps4.begin();
}

void loop() {
  if (ps4.available()) {
    PS4JoystickState state = ps4.read();

    Serial.println("Button state:");
    Serial.print("  Cross: ");
    Serial.println(state.cross);
    Serial.print("  Circle: ");
    Serial.println(state.circle);
    Serial.print("  Triangle: ");
    Serial.println(state.triangle);
    Serial.print("  Square: ");
    Serial.println(state.square);
  }
}
