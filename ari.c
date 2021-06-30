#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <assert.h>


string ari(string s)
{
	int i = 0;
	float t = 0;
	float count1 = 0;
	float count2 = 0;
	float count3 = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalnum(s[i]))
			count1++;
		if (s[i] == ' ')
			count2++;
		if (s[i] == '.' || s[i] == '?' || s[i] == !)
			count3++;
	}
	t = 4.71 * (count1 / count2) + 0.5 * (count2 / count3) - 21.43;
	int y = t + 1;
	switch (y)
	{
	case 1:
		return "Kindergarten";
	case 2:
		return "First/Second Grade";
	case 3:
		return "Third Grade";
	case 4:
		return "Fourth Grade";
	case 5:
		return "Fifth Grade";
	case 6:
		return "Sixth Grade";
	case 7:
		return "Seventh Grade";
	case 8:
		return "Eighth Grade";
	case 9:
		return "Ninth Grade";
	case 10:
		return "Tenth Grade";
	case 11:
		return "Eleventh Grade";
	case 12:
		return "Twelfth grade";
	case 13:
		return "College student";
	case 14:
		return "Professor";
	default:
		break;
	}
	return " ";

}
           
           
           
           
           
           
           
           
           
           
           
           
