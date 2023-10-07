#include <stdio.h>
#define TIP_RATE 0.10 //constant tip rate for the whole program

int main(void)
{
    int minPrice = 0, maxPrice = 0, counter = 0; //declaring minPrice and maxPrice for user input, and counter to display the toal number of valid charts

    while(minPrice > -1 && maxPrice > -1) //checks if either input is negative and if so, it will stop asking the user
    {
        printf("Enter the minimum and maximum meal values: ");
        scanf("%d %d", &minPrice, &maxPrice); //takes in min and max price
        if(minPrice > -1 && maxPrice > -1) //checks again (this is needed so if the first input is negative it will immediately stop)
        {
            printTipChart(minPrice, maxPrice); //calls function

            if(minPrice <= maxPrice) //checks if the min and max numbers are valid
            {
                counter++;
            }
        }

    }
    printf("You have printed total %d valid charts", counter);
}

void printTipChart(int min_price, int max_price)
{
    for(int i = min_price; i <= max_price; i++) //repeats the output from tip suggestion for the minimum amt until the tip suggestion for max amt
    {
    printf("On a meal of $%d, the suggested tip amount $%.2f\n", i, TIP_RATE * i);

    }

}
