#include <stdio.h>

int main(void)

{
    printf("Must be at least 140cm tall and 90 lbs to ride. Can you ride?\n");

        int height = 0;
        int weight = 0;

        printf("Enter height in cm: \n");
        scanf("%d", &height);

        printf("Enter weight in lbs: \n");
        scanf("%d", &weight);

    if (height >= 140 && weight >= 90)
        printf("You can ride!\n");
    else
        printf("Uh oh spaghetti-o! \n");
    
    return 0;

}