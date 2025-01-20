#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arrPtr = (int *) malloc(20 * sizeof(int));
    
    if (arrPtr != NULL)
    {
        for(int i = 0; i<20; i++)
        {
            arrPtr[i] = 0;
        }
    }
        free(arrPtr);
    
    return 1;
}
