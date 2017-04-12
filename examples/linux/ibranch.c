/* Minimal example that uses symbolic branch 
 *
 * The symbolic input is taken from command line argumets passed to the interpreted program
 * Will use the argv input to select an item from a array of 2 function pointers and then call it.
 *
 * Compile with :
 *   $ gcc ibranch.c -static -o ibranch
 *
 * Analize it with:
 *   $ manticore ibranch +
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(){
    printf("Function f\n");
}
void g(){
    printf("Function g\n");
}


int main(int argc, char* argv[], char* envp[]){
    int i;
    void (*funcs[2])( );

    funcs[0] = f;
    funcs[1] = g;

    if (argc > 1)
        funcs[argv[1][0] == 'g']();


return 0;
}


