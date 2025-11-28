#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter roll and marks: ");
    scanf("%d %f", &s->roll, &s->marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    return 0;
}