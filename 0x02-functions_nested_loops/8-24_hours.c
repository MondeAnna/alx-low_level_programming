#include "main.h"

/**
 * jack_bauer - Show 24 hour military-styled clock
 *
 * Return: void
 */
void jack_bauer(void)
{
	const char ZERO = '0';
	const char HOURS_TENS = '2';
	const char HOURS = '9';
	const char MINS_TENS = '5';
	const char MINS = '9';

	char hours_tens;
	char hours;
	char mins_tens;
	char mins;

	for (hours_tens = ZERO; hours_tens <= HOURS_TENS; hours_tens++)
		for (hours = ZERO; hours <= HOURS; hours++)
			for (mins_tens = ZERO; mins_tens <= MINS_TENS; mins_tens++)
				for (mins = ZERO; mins <= MINS; mins++)
				{
					if (hours_tens == HOURS_TENS && hours >= '4')
						break;

					_putchar(hours_tens);
					_putchar(hours);

					_putchar(':');

					_putchar(mins_tens);
					_putchar(mins);

					_putchar('\n');
				}
}
