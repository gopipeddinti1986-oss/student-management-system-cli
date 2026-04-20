#include <stdio.h>
#include "students.h"

int main(){
    struct Student info[100];
    int count = loadFromFile(info);
    int choice;

    int attempts = 3;

    while(attempts--){
        if(login()){
            printf("[SUCCESS] Login successful\n");
            break;
        } else {
            printf("[ERROR] Invalid credentials\n");
        }
    }

    if(attempts < 0){
        printf("[ERROR] Too many attempts\n");
        return 0;
    }

    do{
        clearScreen();
        showHeader();
        showMenu();

        if(scanf("%d",&choice)!=1){
            printf("[ERROR] Invalid input\n");
            while(getchar()!='\n');
            continue;
        }

        switch(choice){
            case 1:
                if(count==100) printf("[ERROR] Storage full\n");
                else{
                    addStudent(info,count,count);
                    saveToFile(&info[count]);
                    count++;
                }
                break;

            case 2:
                displayAll(info,count);
                break;

            case 3:
                searchStudent(info,count);
                break;

            case 4:
                updateStudent(info,count);
                break;

            case 5:
                deleteStudent(info,&count);
                break;

            case 6:
                sortMenu(info,count);
                break;

            case 7:
                printf("Exit\n");
                break;

            default:
                printf("[ERROR] Invalid choice\n");
        }

        pauseScreen();

    }while(choice!=7);

    return 0;
}