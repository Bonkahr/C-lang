#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 99

// The problem
/*
    Computers are commonly used for survey data analysis to compile and analyze the results of surveys and opinion polls.
    The array response initialized with 99 responses to a survey. 
    Each response is a number from 1 to 9. The program computes the mean, median and mode of the 99
    values. This example includes many common manipulations required in array problems, 
    including passing arrays to functions. Notice that lines 48–52 contain several
    string literals separated only by whitespace. C compilers automatically combine such
    string literals into one—this helps making long string literals more readable.
*/

// Functions prototype
void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);


int main(void)
{
    // initialize srand
    srand(time(NULL));

    // Initializing array frequesncy
    int frequesncy[10] = {0};

    // initialize array response
    int response[SIZE];

    for (size_t i = 0; i < SIZE; i++)
    {
        response[i] = rand() % 9 + 1;
    }

    // Process  responses
    mean(response);
    median(response);
    mode(frequesncy, response);
}


// claculate the avarage
void mean(const int answer[])
{
    printf("%s\n%s\n%s\n", "------------------", "Mean", "--------------------");

    // calculate the total of all answers
    int total = 0;

    for (size_t i = 0; i < SIZE; i++)
    {
        total += answer[i];
    }

    printf
    (
        "The mean is the average value of the data\n"
        "items. The mean is equal to the total of\n"
        "all the data items divided by the number\n"
        "of data items (%u). The mean value for\n"
        "this run is: %u / %u = %.4f\n\n",
        SIZE, total, SIZE, (double) total / SIZE
    );    
}


// Sort array and determine the median element
void median(int answer[])
{
    printf("\n%s\n%s\n%s\n%s", "----------------", "Median", "----------------", "The unsorted array of responses is:");

    printArray(answer); // print the unsorted array

    bubbleSort(answer); // sort the array

    printf("%s", "\n\nThe sorted array is:");
    printArray(answer); // print the sorted array

    // Display the median element
    printf
    (
        "\n\nThe median is element %u of\n"
        "the sorted %u element array.\n"
        "For this run the median is %u\n\n",
        SIZE / 2, SIZE, answer[SIZE / 2]
    );
}

//Determine the most frequent response
void mode(int freq[], const int answer[])
{
    printf("\n%s\n%s\n%s\n", "----------------", "Mode", "----------------");

    // initialize frequescies to 0
    for (size_t rating = 1; rating <= 9; rating++)
    {
        freq[rating] = 0;
    }

    // summarize frequencies

    for (size_t j = 0; j < SIZE; j++)
    {
        ++freq[answer[j]];
    }

    // Output headers for result columns
    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Bar Chart", "1   1   2   2", "5    0   5   0   5");

    // output results
    int largest = 0;    // larget frequency
    int modeValue = 0;  // most frequent

    for (size_t rating = 1; rating <= 9; rating++)    {
        printf("%8zu%11d            ", rating, freq[rating]);

        // keep track of mode value
        if (freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }

        // Output bar representing frequency value
        for (int h = 1; h <= freq[rating]; ++h)
        {
            printf("%s", "*");
        }

        puts(""); // new line
    }

    // Display mode value
    printf(
        "\nThe mode is the most frequent value.\n"
        "For this run the mode is %d which occurred %d times.\n",
        modeValue, largest);
}

// Function tht sorts an array with bubble sort algo.
void bubbleSort(int a[])
{
    // loop to control number of passes
    for (int pass = 1; pass < SIZE; ++pass)
    {
        // loop to control number of comparisons per pass
        for (size_t j = 0; j < SIZE; j++)
        {
            // Swap elements if out of order
            if (a[j] > a[j+1])
            {
                int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
        
    }
}


// Output array contents (20 values per row)
void printArray(const int a[])
{
    // output array elements
    for (size_t j = 0; j < SIZE; j++)
    {
        if (j % 20 == 0) 
        {
            puts("");
        }
        
        printf("%2d", a[j]);
    }

}