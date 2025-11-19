#include <tiny.h>

void setup(void)
{
}

void loop(void)
{
	if (is_SwA())
	{
		for (int ii = 0; ii <= 255; ii++)
		{
			motor(ii);
			delay(25);
		}

		motorstop();
		delay(250);

		for (int ii = -255; ii <= 0; ii++)
		{
			motor(ii);
			delay(25);
		}

		motorstop();
		delay(250);

		motor(-100, 100, 1250);
		motor(100, -100, 1250);

		motor(-100, -100);
		delay(1250);

		motorstop();
	}
}