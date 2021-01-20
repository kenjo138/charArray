#include <stdio.h>

int main(){
    //char cName[] = {'O', 'l', 'i', 'v', 'i', 'a', '/0'};
    char cName[] = "Olivia";

    printf("The output is: %c%c%c%c%c%c\n",
           cName[0], cName[1], cName[2], cName[3], cName[4], cName[5]);

    printf("The output is: ");
    for(int i = 0; i < 6; i++){
        printf("%c", cName[i]);
    }
    printf("\n");
}
