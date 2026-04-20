#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "students.h"

void showHeader(){
    printf("\n=====================================\n");
    printf("   STUDENT MANAGEMENT SYSTEM\n");
    printf("=====================================\n");
}

void showMenu(){
    printf("\n1.Add\n2.View\n3.Search\n4.Update\n5.Delete\n6.Sort\n7.Exit\nChoice: ");
}

void pauseScreen(){
    printf("\nPress Enter...");
    getchar(); getchar();
}

void clearScreen(){
    system("cls");
}

void displayOne(struct Student s){
    printf("\n-----------------\n");
    printf("ID:%d\nName:%s\nAge:%d\n",s.id,s.name,s.age);
    printf("Marks:");
    for(int i=0;i<3;i++) printf("%d ",s.marks[i]);
    printf("\nTotal:%.2f Avg:%.2f Grade:%c\n",s.total,s.average,s.grade);
}

void displayAll(struct Student *info,int count){
    for(int i=0;i<count;i++) displayOne(info[i]);
}

void sortMenu(struct Student *info,int count){
    struct Student t;
    int ch;

    printf("1.Total Desc\n2.Name\nChoice:");
    scanf("%d",&ch);

    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if((ch==1 && info[j].total<info[j+1].total) ||
               (ch==2 && strcmp(info[j].name,info[j+1].name)>0)){
                t=info[j];
                info[j]=info[j+1];
                info[j+1]=t;
            }
        }
    }

    rewriteFile(info, count); // 🔥 persistence
    printf("[SUCCESS] Sorted & saved\n");

    displayAll(info,count);
}