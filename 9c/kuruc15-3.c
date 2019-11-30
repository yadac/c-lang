// address
// pointer
// because function set the result in address
//

#include <stdio.h>

void setmaxandmin(int array[], int *max, int *min);

int main(void)
{
    int max = 0;
    int min = 0;
    int counter = 0;
    int input = 0;
    int array[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    // user input.
    do
    {
        printf("input number, 0 - 100: ");
        scanf("%d", &input);
        if (input >= 0 && input <= 100)
        {
            array[counter] = input;
            counter++;
        }
    } while (counter < 5 && input != -1);

    // get max and min from array.
    if (array[0] != -1)
    {
        setmaxandmin(array, &max, &min);
        printf("max = %d\n", max);
        printf("min = %d\n", min);
    }
    else
    {
        printf("input is invalid.");
    }
    return 0;
}

void setmaxandmin(int array[], int *max, int *min)
{
    int tempmax = 0;
    int tempmin = 0;
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        temp = array[i];
        if (i == 0)
        {
            tempmax = temp;
            tempmin = temp;
        }
        if (temp == -1)
            break;
        if (tempmax < temp)
        {
            tempmax = temp;
        }
        else if (tempmin > temp)
        {
            tempmin = temp;
        }
    }
    *max = tempmax;
    *min = tempmin;

    return;
}