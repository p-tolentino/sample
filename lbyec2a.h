#ifndef lbyec2a_h
#define lbyec2a_h

#include <stdio.h>
#include <string.h>

void get_numbers(int size, int arr_numbers[])
{
    int i;
    printf("number: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr_numbers[i]);
    }
}

void display_original(int array[], int size)
{
    int i;
	for (i = 0; i < 10; i++)
	{
		printf ("%d", array [i]);
	}
}

void display_reverse(int array[], int size)
{ 
    int i;
	for (i = size-1; i >= 0; i--)
	{
		printf ("%d", array [i]);
	}
}

void display_even(int array[], int size)
{
    int i;
	for (i = 0 ; i < size; i = i+2)
	{
		printf ("%d", array [i]);	
	}
    
}

void display_odd(int array[], int size)
{ 
    int i;
	for (i = 1; i < size; i = i+2)
	{
		printf ("%d", array [i]);	
	}
    
}

int k;
void rotate_forward(int array[], int size)
{

    printf ("offset: ");
    scanf ("%d", &k);
    
    for (int i = size-k; i < size; i++){
		printf ("%d", array [i]);
	}

	for (int i=0; i<size-k; i++){
		printf("%d", array [i]);
	}
    
}


void rotate_backward(int array[], int size)
{

    printf ("offset: ");
    scanf ("%d", &k);
    
    for (int i = k; i < size; i++){
    	printf ("%d", array [i]);
	}

	for (int i = 0; i < k; i++){
		printf ("%d", array [i]);
	}

}

char encrypt_character(char a, int key, int sequence_length, char initial_char)
{
    return (a - initial_char + key) % sequence_length + initial_char;
}

char *strrev(char *str)
{
    char temp, *src, *dest;
    size_t len;

    if (str != NULL)
    {
        len = strlen(str);
        if (len > 1)
        {
            src = str;
            dest = src + len - 1;
            while (src < dest)
            {
                temp = *src;
                *src++ = *dest;
                *dest-- = temp;
            }
        }
    }
    return str;
}

#endif
