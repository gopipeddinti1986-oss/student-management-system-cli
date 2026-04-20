#ifndef STUDENTS_H
#define STUDENTS_H

struct Student {
    int id;
    char name[50];
    int age;
    int marks[3];
    float total;
    float average;
    char grade;
};

// student
void addStudent(struct Student *info, int index, int count);
void updateStudent(struct Student *info, int count);
void deleteStudent(struct Student *info, int *count);
void searchStudent(struct Student *info, int count);

// file
int loadFromFile(struct Student info[]);
void saveToFile(struct Student *info);
void rewriteFile(struct Student *info, int count);

// utils
void displayAll(struct Student *info, int count);
void displayOne(struct Student s);
void sortMenu(struct Student *info, int count);
void showHeader();
void showMenu();
void pauseScreen();
void clearScreen();

// login
int login();

#endif