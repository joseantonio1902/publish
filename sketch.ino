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
