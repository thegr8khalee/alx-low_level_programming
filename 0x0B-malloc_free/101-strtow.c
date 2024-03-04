#include "main.h"
#include <stdlib.h>

/**
 * countWords - counts the number of words in a string
 * @str: the string
 * Return: number of words in a string
 */
int countWords(char *str)
{
    int i, count = 0, len = 0;

    // Calculate the length of the string
    while (str[len])
        len++;

    // Count the words in the string
    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return count;
}

/**
 * trim - Removes leading spaces from a string
 * @s: The string to trim
 */
void trim(char *s)
{
    int i, count = 0;

    // Count leading spaces
    while (s[count] == ' ')
    {
        count++;
    }

    // Shift string left by count positions
    if (count != 0)
    {
        for (i = 0; s[i + count] != '\0'; i++)
        {
            s[i] = s[i + count];
        }
        s[i] = '\0'; // Null-terminate the string
    }
}

/**
 * trims - Removes trailing spaces from a string
 * @s: The string to trim
 */
void trims(char *s)
{
    int i = 0, len = 0;

    // Calculate the length of the string
    while (s[len] != '\0')
    {
        len++;
    }

    // Remove trailing spaces
    while (len - 1 > 0)
    {
        if (s[len - 1] == ' ')
        {
            len--; // Decrease string length
            s[len] = '\0'; // Null-terminate the string
        }
        else
        {
            break; // Exit loop if non-space character is encountered
        }
    }
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, wordCount = 0, wordStart = -1, wordEnd = -1;

    // Check for NULL or empty string
    if (str == NULL || *str == '\0')
        return NULL;

    // Trim leading and trailing spaces
    trim(str);
    trims(str);

    // Count the number of words in the string
    wordCount = countWords(str);

    // Allocate memory for the array of words
    words = (char **)malloc(sizeof(char *) * (wordCount + 1));
    if (words == NULL)
        return NULL;

    // Split the string into words
    for (i = 0, j = 0; i < wordCount; i++)
    {
        // Find the start of the current word
        while (str[j] == ' ')
            j++;
        wordStart = j;

        // Find the end of the current word
        while (str[j] != ' ' && str[j] != '\0')
            j++;
        wordEnd = j - 1;
        len = wordEnd - wordStart + 1;

        // Allocate memory for the current word
        words[i] = (char *)malloc(sizeof(char) * (len + 1));
        if (words[i] == NULL)
        {
            // Free previously allocated memory if allocation fails
            for (k = 0; k < i; k++)
                free(words[k]);
            free(words);
            return NULL;
        }

        // Copy the current word to the array of words
        for (k = 0; k < len; k++)
            words[i][k] = str[wordStart++];

        // Null-terminate the current word
        words[i][k] = '\0';
    }

    // Null-terminate the array of words
    words[wordCount] = NULL;

    return words;
}
