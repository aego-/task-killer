#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(std){
    char opcion;

    system("color a");
    system("title Task Killer ¬_¬  -  by aego");
    printf("                            MATA PROCESOS \n\n");
    printf("\n A continuacion especifica si quieres hacer manual esta tarea o mato todo lo que no sirva? '_'\n\n");
    printf("     Manual presiona [m]     Automatico presiona [a]\n      ");
    scanf(" %c", &opcion);

    printf("%c", opcion);
    if(opcion == 'm'){
        system("start cmd /k tasklist /v");
        system("start cmd");
        system("taskmgr");
    }else{
        if(opcion == 'a'){
            system("taskkill /f /fi 'status eq Not Responding'");
            system("taskkill /f /im explorer.exe & start explorer.exe");
            //system("start explorer.exe");
        }else{
        system("cls");
        printf("\n  vuelve a intentar\n");
        return main();
        }
    }

    getchar();
return (0);
}
