#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../lbyec2a.h"

char encrypt_uppercase_letter(char letter)
{
    if (letter > 'A' && letter <= 'Z'){
    	letter = letter + 3;
    
    if (letter > 'Z'){
    		letter = (letter - 'Z') + 'A' - 1;
		}
	}
	return letter; 
}
char encrypt_lowercase_letter(char letter)
{
    if (letter >= 'a' && letter <= 'z'){
    	letter = letter + 3;

    if (letter > 'z'){
    		letter = (letter - 'z') + 'a' - 1;
		}
	}
	return letter;
}
char encrypt_number(char number)
{
    if (number >= '0' && number <= '9'){
		number = number + 3;
		
    if (number > '9'){
			number = (number - '9') + '0' - 1;
		}
	}
	return number; 
}
char encrypt_alphanumeric(char alphanum)
{
    if (alphanum >= 'A' && alphanum <= 'Z')
    {
        return encrypt_uppercase_letter(alphanum);
    }
    else if (alphanum >= 'a' && alphanum <= 'z')
    {
        return encrypt_lowercase_letter(alphanum);
    }
    else if (alphanum >= '0' && alphanum <= '9')
    {
        return encrypt_number(alphanum);
    }
    else
    {
        return alphanum;
    }
}

void encrypt_message(char message[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%c", encrypt_alphanumeric(message[i]));
    }
}

int main(void)
{
    char phrase[100];
    int length;
    printf("Phrase: ");
    scanf(" %[^\n]s", phrase);

    length = strlen(phrase);

    encrypt_message(phrase, length);

    return 0;
}
