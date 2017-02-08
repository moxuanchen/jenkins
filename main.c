#include <stdio.h>

void say_hello_to_jenkins(void)
{
    printf("Hello Jenkins, nice to meet you...\n");
}

void say_hello_to_jenkins_again(void)
{
    printf("Hello Jenkins, glad to see you again...\n");
}

int main(int argc, char *argv[])
{
    say_hello_to_jenkins();
    say_hello_to_jenkins_again();
    return 0;
}

