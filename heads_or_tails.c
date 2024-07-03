#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char name[50];
    printf("あなたは誰ですか？\n> ");
    scanf("%s", name);
    printf("こんにちは、%s！\n", name);

    const char *results[] = {"表", "裏"};
    int heads = 0, tails = 0;
    
    printf("コインを投げています...\n");
    for (int i = 1; i <= 3; i++) {
        int result = rand() % 2;
        printf("ラウンド%d: %s\n", i, results[result]);
        if (result == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    
    printf("表: %d, 裏: %d\n", heads, tails);

    if (heads > tails) {
        printf("%sが勝ちました！\n", name);
    } else {
        printf("%sが負けました！\n", name);
    }

    return 0;
}
