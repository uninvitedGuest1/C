#include <stdio.h>

int main() {

    /*
    Declaring the variables we shall use in our program
    variable o will represent our outline
    variable name is where our name will be saved
    */
    char o[1], name[25];

    //create space on top of our work
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

    //Print a statement to request for your name
    printf("            ENTER YOUR NAME: ");
    
    //Provides an input field for our name and then assigns the string we input to the variable "name"
    scanf("%s", name);

    //Print a statement to request the character we want our outline to be. 
    printf("            WHAT CHARACTER WOULD YOU LIKE YOUR DRAGON OUTLINE TO BE: ");

    //Provides an input field for our outline and then assigns the string we input to the variable "o"
    scanf("%s", o);

    //Print The statement "DRAGON BY 'variable(string) called name'" 
    printf("                                                                                DRAGON BY %s", name);
    //Leave space after the previos statement
    printf("\n\n\n");


    /*
    Below, wwe curve out our dragon by using the variable "o", spaces and line breaks(\n). Make sure There is a line break(\n) and that the number of %s matches the number of "o" in each print statement
    This means each %s should be assigned to the variable o
    */
    printf("                                                                                            %s  %s%s  \n", o, o, o);
    printf("                                                                                         %s         %s  \n", o,o);
    printf("                                                                                      %s              %s                     %s  %s%s\n", o,o,o,o,o);
    printf("                                                                                   %s                   %s                 %s  %s    %s%s%s\n", o,o,o,o,o,o,o);
    printf("                                                                 %s                %s                      %s               %s %s %s        %s%s%s\n", o,o,o,o,o,o,o,o,o);
    printf("                                                         %s    %s   %s            %s                         %s              %s  %s  %s           %s%s%s\n",o,o,o,o,o,o,o,o,o,o,o);
    printf("                                                       %s   %s     %s %s         %s                            %s                %s    %s               %s\n",o,o,o,o,o,o,o,o,o);
    printf("                                                       %s         %s %s        %s                             %s                 %s     %s                %s%s\n", o,o,o,o,o,o,o,o,o);
    printf("                                                      %s          %s        %s           %s      %s             %s                 %s     %s                  %s%s\n", o,o,o,o,o,o,o,o,o,o);
    printf("                                                  %s%s             %s        %s            %s     %s             %s                 %s      %s                   %s\n", o,o,o,o,o,o,o,o,o,o);
    printf("                                              %s%s                 %s        %s          %s       %s             %s                  %s      %s                   %s%s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                                           %s%s                    %s          %s     %s%s        %s             %s                    %s     %s                      %s%s\n",o,o,o,o,o,o,o,o,o,o,o,o);
    printf("                                      %s%s%s                        %s          %s     %s%s      %s              %s                     %s     %s                      %s  %s\n", o,o,o,o,o,o,o,o,o,o,o,o,o);
    printf("                                   %s                             %s           %s   %s %s    %s               %s                      %s     %s                       %s   %s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                                 %s                               %s%s            %s %s    %s               %s                       %s%s      %s                             %s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                               %s                                  %s  %s              %s%s            %s%s                      %s%s%s        %s                               %s\n",  o,o,o,o,o,o,o,o,o,o,o,o);
    printf("                             %s                                         %s          %s %s            %s    %s             %s%s%s             %s                                  %s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                           %s                                            %s%s %s%s %s         %s    %s  %s%s%s     %s%s%s                 %s       %s                             %s\n", o,o,o,o,o,o,o,o,o,o,o,o,o,o,o,o,o);
    printf("                         %s                                                                 %s               %s%s%s             %s      %s      %s %s                             %s\n",  o,o,o,o,o,o,o,o,o,o);
    printf("                        %s                                                               %s                               %s     %s %s     %s   %s                         %s     %s\n",  o,o,o,o,o,o,o,o,o);
    printf("                         %s                                          %s                 %s                              %s          %s     %s   %s                           %s  %s  %s\n", o,o,o,o,o,o,o,o,o,o);
    printf("                         %s                                          %s              %s                    %s           %s          %s     %s   %s                             %s  %s  %s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                         %s                                          %s%s             %s                      %s         %s          %s    %s    %s                     %s         %s    %s\n", o,o,o,o,o,o,o,o,o,o,o,o);
    printf("                        %s                                              %s%s                                   %s%s%s %s     %s       %s    %s    %s                      %s %s        %s\n", o,o,o,o,o,o,o,o,o,o,o,o,o,o);
    printf("                      %s                                                   %s%s                                      %s    %s     %s   %s     %s                       %s   %s      %s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                     %s                                                       %s%s                                      %s  %s    %s %s      %s                        %s     %s    %s \n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                    %s                                                           %s%s                                      %s %s   %s    %s                 %s         %s       %s  %s\n", o,o,o,o,o,o,o,o,o,o,o);
    printf("                    %s                                                              %s                                            %s                  %s   %s       %s         %s\n", o,o,o,o,o,o,o);
    printf("                     %s                                                                %s                                     %s                    %s      %s     %s\n", o,o,o,o,o,o);
    printf("                      %s                                                                 %s                                 %s                   %s              %s\n", o,o,o,o,o);
    printf("                       %s                                                                 %s                              %s                  %s%s            %s   %s\n", o,o,o,o,o,o,o);
    printf("                         %s                                                              %s                           %s                  %s%s             %s  %s\n", o,o,o,o,o,o,o);
    printf("                           %s                                                                                    %s                 %s%s                 %s\n", o,o,o,o,o);
    printf("                             %s                                                                              %s                 %s%s\n", o,o,o,o);
    printf("                               %s                                                                          %s                %s%s\n", o,o,o,o);
    printf("                                  %s                                                                     %s             %s%s%s%s\n", o,o,o,o,o,o);
    printf("                                     %s                                                                %s             %s\n", o,o,o);
    printf("                                        %s                                                           %s            %s%s%s\n", o,o,o,o,o);
    printf("                                           %s                                                      %s           %s%s\n", o,o,o,o);
    printf("                                              %s                                                  %s         %s%s\n", o,o,o,o);
    printf("                                                 %s                                              %s       %s%s\n", o,o,o,o);
    printf("                                                    %s                                          %s      %s\n", o,o,o);
    printf("                                                       %s                                      %s    %s\n", o,o,o);
    printf("                                                           %s%s%s%s                            %s  %s\n", o,o,o,o,o,o);
    printf("                                                                 %s%s%s                         %s%s\n", o,o,o,o,o);
    printf("                                                                     %s%s%s  %s                   %s\n", o,o,o,o,o);


    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
