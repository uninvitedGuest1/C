#include <stdio.h>

int main(){

    // DECLARING VARIABLES WE SHALL BE USING IN OUR PROGRAM
    char T[1]; //We shall assign our bottle top a character variable called "T"
    char N[2]; //The neck takes a character variable named "N"
    char b[3]; //The body takes a character variable named "N"
    char text[18] = "Fanta Bottle in C";

    // GO DOWN 6 LINES FROM THE TOP
    printf("\n\n\n\n\n\n");

    /*
     GETTING AND READING INPUT FROM THE USER
     THE INPUT VALUES ARE ASSIGNED TO THE VARIABLES WE DECLARED EARLIER
    */
    printf("enter 1 character for the bottletop: ");
    scanf("%s", T);

    printf("enter 1 character for the neck: ");
    scanf("%s", N);

    printf("enter 1 character for the body: ");
    scanf("%s", b);

    // GO DOWN LINES
    printf("\n\n\n\n\n\n");

    // PRINT OUR FILE HEADING
    printf("                                            %s", text);
    // GO DOWN LINES
    printf("\n\n\n\n\n\n");

    // FROM HERE ON OUT WE PRINT OUR FANTA BOTTLE
    printf("                                                %s%s%s%s%s%s%s\n", T, T, T, T, T, T, T);
    printf("                                                %s%s%s%s%s%s%s\n", T, T, T, T, T, T, T);
    printf("                                                %s%s%s%s%s%s%s\n", T, T, T, T, T, T, T);
    /*
    ABOVE, WE ARE PRINTING THE BOTTLE TOP; 7 STRING ITEMS hence the use of %s & times
    EVERYWHERE WE HAVE %s, it will print T. make sure the number of %s matches the number of T in every print statement
    THE LINE BELOW PRINTS THE NECK; 2 STRING VALUES WITH SPACE BETWEEEN"
    */
    printf("                                                %s     %s\n", N, N);
    // AT THIS POINT WE CURVE OUT THE BODY; VARIABLE "b" by adding spaces between our items. 
    printf("                                              %s         %s\n", b, b);
    printf("                                           %s               %s\n", b, b);
    printf("                                        %s                     %s\n", b, b);
    printf("                                      %s                        %s\n", b, b);
    printf("                                     %s                           %s\n", b, b);
    printf("                                     %s                           %s\n", b, b);
    printf("                                      %s                         %s\n", b, b);
    printf("                                         %s                    %s\n", b, b);
    printf("                                           %s                %s\n", b, b);
    printf("                                           %s                %s\n", b, b);
    printf("                                         %s                    %s\n", b, b);
    printf("                                      %s                         %s\n", b, b);
    printf("                                     %s                           %s\n",b, b);
    printf("                                     **                         **\n"); //at this point we're directly printing "*" so we dont use %s 
    printf("                                     *****************************\n");
    printf("                                     *****************************\n");
    printf("                                     *****************************\n");
    printf("                                     *****************************\n");
    printf("                                     **                         **\n");
    printf("                                     %s                           %s\n",b, b);
    printf("                                     %s                           %s\n",b, b);
    printf("                                     %s                           %s\n",b, b);
    printf("                                     %s                           %s\n",b, b);
    printf("                                      %s      %s %s        %s %s     %s\n", b, b, b, b, b, b);
    printf("                                         %s          %s       %s\n", b,b,b);


    // GO DOWN 6 LINES BEFORE FILE END
    printf("\n\n\n\n\n\n");
    return 0;
}
