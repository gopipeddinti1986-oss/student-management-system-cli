#include <stdio.h>
#include "students.h"

int isDuplicateID(struct Student *info, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (info[i].id == id) return 1;
    }
    return 0;
}

void addStudent(struct Student *info, int i, int count) {
    int id;

    printf("[INPUT] Enter ID: ");
    scanf("%d", &id);

    if (isDuplicateID(info, count, id)) {
        printf("[ERROR] ID already exists\n");
        return;
    }

    info[i].id = id;

    printf("[INPUT] Name: ");
    scanf(" %[^\n]", info[i].name);

    printf("[INPUT] Age: ");
    scanf("%d", &info[i].age);

    info[i].total = 0;

    for (int j = 0; j < 3; j++) {
        int mark;
        do {
            printf("[INPUT] Marks %d (0-100): ", j+1);
            scanf("%d", &mark);
        } while (mark < 0 || mark > 100);

        info[i].marks[j] = mark;
        info[i].total += mark;
    }

    info[i].average = info[i].total / 3;

    if (info[i].average >= 90) info[i].grade='A';
    else if (info[i].average >= 75) info[i].grade='B';
    else if (info[i].average >= 50) info[i].grade='C';
    else info[i].grade='F';

    printf("[SUCCESS] Student added\n");
}

void updateStudent(struct Student *info, int count) {
    int id, found = 0;

    printf("Enter ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (info[i].id == id) {
            addStudent(info, i, count);
            rewriteFile(info, count);
            printf("[SUCCESS] Updated\n");
            found = 1;
            break;
        }
    }

    if (!found) printf("[ERROR] Not found\n");
}

void deleteStudent(struct Student *info, int *count) {
    int id, index, found = 0;

    printf("Enter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (info[i].id == id) {
            index = i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("[ERROR] Not found\n");
        return;
    }

    for (int i = index; i < *count - 1; i++) {
        info[i] = info[i + 1];
    }

    (*count)--;
    rewriteFile(info, *count);

    printf("[SUCCESS] Deleted\n");
}

void searchStudent(struct Student *info, int count) {
    int id, found = 0;

    printf("Enter ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (info[i].id == id) {
            displayOne(info[i]);
            found = 1;
            break;
        }
    }

    if (!found) printf("[ERROR] Not found\n");
}