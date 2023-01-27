#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_while - infinite while loop
 *
 *
 */

void infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
}

/**
 * main - main entry
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 0;
	pid_t pid;

	while (i < 5)
	{
		pid = fork();

		if (pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			exit(0);
		}
		i++;
	}
	infinite_while();

	return (0);
}
