#include <stdio.h>

#define MAXLINE 5000
#define TRUE 1
#define FALSE 0
#define abs(A) ((A) > 0 ? (A) : -(A))

int getlinex(char s[], int lim);
void syntaxCheck(char *);

int main(void)
{
    char line[MAXLINE];
    while (getlinex(line, MAXLINE) > 0)
        syntaxCheck(line);
    return 0;
}

int getlinex(char s[], int lim)
{
    int c, i = 0;
    while (i < lim - 1 && (c = getchar()) != EOF)
        s[i++] = c;
    s[i] = '\0';
    return i;
}

void syntaxCheck(char *s)
{
    char open[] = "([{";
    char close[] = ")]}";
    int inCnt[3] = {};
    char err, inC = FALSE, inQ = FALSE, inDQ = FALSE, inC99 = FALSE;
    for (int i = 0; s[i]; i++)
    {
        if (!inC && !inC99 && !inDQ && i > 0 && s[i] == '/' && s[i - 1] == '/')
            inC99 = TRUE;
        if (!inC && !inC99 && !inDQ && i > 0 && s[i] == '*' && s[i - 1] == '/')
            inC = TRUE;
        if (inC99 && s[i] == '\n')
            inC99 = FALSE;
        if (inC && s[i] == '*' && s[i + 1] == '/')
            inC = FALSE;
        if (!inC && !inC99 && !inDQ  && s[i] == '\'' && (!i || s[i - 1] != '\\'))
            inQ = !inQ;
        if (!inC && !inC99 && !inQ && s[i] == '\"' && (!i || s[i - 1] != '\\'))
            inDQ = !inDQ;
        if (!inQ && !inC & !inDQ && !inC99)
            for (int j = 0; open[j]; j++)
                if (s[i] == open[j])
                {
                    inCnt[j]++;
                    break;
                }
                else if (s[i] == close[j])
                {
                    inCnt[j]--;
                    break;
                }
    }
    err = inC || inQ || inDQ;
    for (int i = 0; !err && open[i]; i++)
        err = inCnt[i];
    if (err)
    {
        printf("There are mismatched:\n");
        if (inC)
            printf("-> Comments\n");
        if (inQ)
            printf("-> Single Quotes\n");
        if (inDQ)
            printf("-> Double Quotes\n");
        for (int i = 0; open[i]; i++)
            if (inCnt[i])
                printf("-> %d \"%c %c\"\n", abs(inCnt[i]), open[i], close[i]);
    }
    else
        printf("Syntax appears to be correct.\n");
}