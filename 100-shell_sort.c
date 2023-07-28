#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - this is a calloc function
 * @nmemb: number of elements
 * @size: bit size of each element
 * Return: pointer to memory assignment
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i = 0;
    void *p;

    if (nmemb == 0 || size == 0)
        return NULL;

    p = malloc(nmemb * size);
    if (p == NULL)
        return NULL;

    char *char_ptr = (char *)p;
    for (i = 0; i < (nmemb * size); i++)
        char_ptr[i] = '\0';

    return p;
}

/**
 * counting_sort - this is a counting sort method implementation
 * @array: array to sort
 * @size: array size
 */
void counting_sort(int *array, size_t size)
{
    int index, maximun = 0, *counter = NULL, *tmp = NULL;
    size_t i;

    if (array == NULL || size < 2)
        return;

    /* Find maximum number */
    for (i = 0; i < size; i++)
    {
        if (array[i] > maximun)
            maximun = array[i];
    }

    counter = _calloc(maximun + 1, sizeof(int));
    tmp = _calloc(size, sizeof(int));

    if (counter == NULL || tmp == NULL)
    {
        free(counter);
        free(tmp);
        return;
    }

    /* Count the array elements */
    for (i = 0; i < size; i++)
    {
        counter[array[i]]++;
    }

    /* Get the accumulative values */
    for (index = 1; index <= maximun; index++)
    {
        counter[index] += counter[index - 1];
    }

    /* Get the new array sorted */
    for (i = 0; i < size; i++)
    {
        tmp[counter[array[i]] - 1] = array[i];
        counter[array[i]]--;
    }

    /* Replace old array with new array sorted */
    for (i = 0; i < size; i++)
    {
        array[i] = tmp[i];
    }

    free(tmp);
    free(counter);
}

