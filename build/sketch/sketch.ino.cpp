#include <Arduino.h>
#line 1 "c:\\Users\\Noemi Ocampo\\Desktop\\github\\sketch.ino"
#line 1 "c:\\Users\\Noemi Ocampo\\Desktop\\github\\sketch.ino"
void setup();
#line 5 "c:\\Users\\Noemi Ocampo\\Desktop\\github\\sketch.ino"
void loop();
#line 1 "c:\\Users\\Noemi Ocampo\\Desktop\\github\\sketch.ino"
void setup()
{
    pinMode(13,HIGH);
}
void loop()
{
	digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    digitalWrite(13,HIGH);
    delay(2000);
}

