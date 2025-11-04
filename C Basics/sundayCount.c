#include <stdio.h>
#include <string.h>

int main() {
	char day[10];
	int n;

	scanf("%s", day);   // starting day
	scanf("%d", &n);    // number of days

	int start;

	// Assign numbers for days of the week (Mon=0, Tue=1, ..., Sun=6)
	if (strcmp(day, "mon") == 0) start = 0;
	else if (strcmp(day, "tue") == 0) start = 1;
	else if (strcmp(day, "wed") == 0) start = 2;
	else if (strcmp(day, "thu") == 0) start = 3;
	else if (strcmp(day, "fri") == 0) start = 4;
	else if (strcmp(day, "sat") == 0) start = 5;
	else if (strcmp(day, "sun") == 0) start = 6;

	else {
		printf("Invalid day");
		return 0;
	}

	// Find days until next Sunday
	int first_sunday_in = (7 - start) % 7;

	int count = 0;
	if (first_sunday_in < n)
		count = 1 + (n - first_sunday_in - 1)/7;

	printf("%d", count);
	return 0;
}
// Input	Output
// mon
// 13
// 2	Sundays on day 6 and 13
