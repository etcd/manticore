/* Minimal toy example with input output using libc
 * Symbolic values are read from stdin using standar libc calls.
 * By default Manticore cli assumes 256 symbolic chars in th input
 *    
 * Compile with :
 *   $ gcc basic.c -static -o basic
 *     
 * Analyze it with:
 *   $ manticore basic
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]){
    unsigned int cmd;
    
    if (read(0, &cmd, sizeof(cmd)) != sizeof(cmd))
    {
        printf("Error reading stdin!");
        exit(-1);
    }

    if (cmd > 0x41)
    {
        printf("Message: It is greater than 0x41\n");
    }
    else 
    {
        printf("Message: It is smaller or equal than 0x41\n");
    }

return 0;
}


