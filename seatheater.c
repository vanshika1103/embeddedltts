

#define F_CPU 1600000UL

#include <avr/io.h>
#include <util/delay.h>
#include "../inc/Activity1.h"
#include "../inc/Activity2.h"
#include "../inc/Activity3.h"
#include "../inc/Activity4.h"
/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main()
{
    // Integration of all functions
    Activity1();
    Activity2();
    Activity3();
    Activity4();
    return 0;
}
