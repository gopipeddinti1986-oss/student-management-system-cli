#include <stdio.h>
#include "students.h"

#define FILE_PATH "data/students.dat"

int loadFromFile(struct Student info[]) {
    FILE *fp = fopen(FILE_PATH, "rb");
    int count = 0;

    if (!fp) return 0;

    while (fread(&info[count], sizeof(struct Student), 1, fp)) {
        count++;
    }

    fclose(fp);
    return count;
}

void saveToFile(struct Student *info) {
    FILE *fp = fopen(FILE_PATH, "ab");
    if (!fp) return;

    fwrite(info, sizeof(struct Student), 1, fp);
    fclose(fp);
}

void rewriteFile(struct Student *info, int count) {
    FILE *fp = fopen(FILE_PATH, "wb");
    if (!fp) return;

    for (int i = 0; i < count; i++)
        fwrite(&info[i], sizeof(struct Student), 1, fp);

    fclose(fp);
}