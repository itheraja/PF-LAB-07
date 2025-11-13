#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        char ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
