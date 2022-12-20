# 1 "c:\\Users\\Noemi Ocampo\\Desktop\\github\\sketch.ino"
void setup()
{
    pinMode(13,0x1);
}
void loop()
{
 digitalWrite(13,0x1);
    delay(1000);
    digitalWrite(13,0x0);
    delay(1000);
    digitalWrite(13,0x1);
    delay(2000);
}
