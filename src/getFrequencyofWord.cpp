/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>


int count_word_in_str_way_1(char *str, char *word) {
	int i = 0, j = 0;
	int wordlen = 0, count, word_count = 0;
	while (word[wordlen] != '\0')
	{
		wordlen++;
	}
	i = 0;
	int temp = 0;
	while (str[temp])
	{
		temp = i;
		j = 0;
		count = 0;
		while ((str[i] == word[j]) && str[i] != '\0')
		{
			count++;
			i++;
			j++;
		}
		if (count == wordlen)
		{
			word_count++;
			count = 0;
			i = temp + 1;
		}
		else
			i++;
	}
	return word_count;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

