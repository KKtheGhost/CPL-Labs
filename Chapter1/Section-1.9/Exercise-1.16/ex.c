#include <stdio.h>

#define MAXLINE 1000

/* name getline conflicts with external func in stdio.h */
int getlinex(char line[], int maxline);

int main() {
  int len;
  char line[MAXLINE];
  while ((len = getlinex(line, MAXLINE)) > 0) {
    printf("%5d: %s", len, line);
  }
}

int getlinex(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}