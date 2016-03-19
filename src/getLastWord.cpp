/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

	char * get_last_word(char * str) {

		int i = 0, k = 0;
		int first = 0;
		while (str[i] == ' ')
		{
			i++;
		}
		first = i;
		while (str[i])
		{
			if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
				first = i;
			i++;
		}
		if (str[first] == ' ')
			first++;
		char *temp = (char *)malloc(sizeof(char)*(i - first));
		while (str[first] != ' ' && str[first])
		{
			temp[k++] = str[first++];
		}
		temp[k] = '\0';
		return temp;
	}

