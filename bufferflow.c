#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char buffer[10];
    printf("Enter the String: ");
    scanf("%s", buffer);
    printf("\nEntered string: %s", buffer);
    printf("\nLength of string: %ld", strlen(buffer));
    // The above code does not have a vulnerability because the user has provided a correct string length that does not exceed the size of the buffer.
    strcpy(buffer, "Need for speed");
    printf("\nBuffer overflow string: %s", buffer);
    printf("\nLength of string: %ld", strlen(buffer));
    // The above code has a vulnerability because the provided string exceeds the buffer size.
    // Buffer overflow leads to abortion or termination of compiling the code because of exceeding memory size {"Stack smashing Detected......Aborted(core dumped)"}
    // There may be a chance of overriding the neighboring address value.
    // This overflow leads to security risk.
    // It is difficult to find a correct string length and end up with unexpected behaviour.
}
