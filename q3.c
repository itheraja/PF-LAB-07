#include <stdio.h>

int main() {
    int marks, pass[10], fail[10];
    int i = 0, pCount = 0, fCount = 0;
    float avgPass = 0, avgFail = 0;

    printf("Enter marks (-1 to stop):\n");

    while(i < 10) {
        scanf("%d", &marks);
        if(marks == -1)
            break;
        if(marks >= 5 && marks <= 10)
            pass[pCount++] = marks;
        else if(marks >= 0 && marks < 5)
            fail[fCount++] = marks;
        i++;
    }

    printf("\nPass marks: ");
    for(i = 0; i < pCount; i++) {
        printf("%d ", pass[i]);
        avgPass += pass[i];
    }

    printf("\nFail marks: ");
    for(i = 0; i < fCount; i++) {
        printf("%d ", fail[i]);
        avgFail += fail[i];
    }

    if(pCount > 0) avgPass /= pCount;
    if(fCount > 0) avgFail /= fCount;

    printf("\nAverage Pass: %.2f\nAverage Fail: %.2f\n", avgPass, avgFail);

    return 0;
}
