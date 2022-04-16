#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ON 1
#define OFF 0

typedef struct word_info
{
    int wl;
    struct word_info *next;
} LinkList;

int print_block(int n)
{
    int i;
    for (i = 0; i < n; ++i) {
        printf("%s", "■");
    }
    printf("%s", "\n");
}

int main()
{
    int c, state, l;
    LinkList *word_chain_head, *word_chain_end, *tmp;

    state = l = OFF;
    word_chain_head = (LinkList*)malloc(sizeof(LinkList));
    word_chain_end = word_chain_head;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (state == ON) {
                tmp = (LinkList*)malloc(sizeof(LinkList));
                word_chain_end->next = tmp;
                word_chain_end = tmp;
                state = OFF;
                l = 0;
            }
        }
        else {
            ++l;
            state = ON;
            word_chain_end->wl = l;
        }
    }
    while (word_chain_head != NULL)
    {
        print_block(word_chain_head->wl);
        tmp = word_chain_head;
        word_chain_head = word_chain_head->next;
        free(tmp);  
    }
}