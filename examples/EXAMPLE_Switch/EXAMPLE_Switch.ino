#include <tiny.h>

void setup(void)
{
	Serial.begin(9600);
}

void loop(void)
{
	Serial.print("Switch A : ");
	Serial.println(is_SwA() ? "Press" : "Release");
}