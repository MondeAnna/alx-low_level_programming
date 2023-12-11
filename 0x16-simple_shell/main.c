#include "main.h"

/**
 * main - entry point
 * @argc: number of cli args
 * @args: values of cli args
 * @environ: environment during execution
 * Return: EXIT_SUCCESS
 */
int main(
	__attribute__((unused)) int argc,
	__attribute__((unused)) char **args,
	char **environ
)
{
	return (run(environ));
}
