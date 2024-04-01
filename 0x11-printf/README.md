### [ALX](https://www.alxafrica.com/) System Engineering Plus

Studies carried out in the **[ALX Software Engineering Plus](https://www.alxafrica.com/software-engineering-plus/)** course

<br />

#### Technologies

* Bash:     5.1-6ubuntu1
* Docker:   24.0.5
* GCC:      9.4.0
* Ubuntu:   20.04 LTS

<br />

#### Concepts

* Expected is an understanding of the following concepts:
	* _[Agile Teams](https://scaledagileframework.com/agile-teams/)_
	* _[Pair Programming](https://www.geeksforgeeks.org/pair-programming/)_
	* _[Flowcharts](https://www.geeksforgeeks.org/what-is-a-flowchart-and-its-types/)_

* For this project, we expect you to look at these concepts:
    * _[Everything You Need to Know to Start Coding Your Own Shell](/concepts/CODING_OWN_SHELL.md)_
    * _[Approaching a Project](/concepts/APPROACHING_PROJECT.md)_
    * _[Using Docker & WSL on your local host](/concepts/USING_DOCKER.md)_
    * _[Integrating Prior Work](/concepts/PRINTF.md)_

<br />

#### Resources

* Expected is a consumption of these resources:
	* _[Secrets of printf](https://www.academia.edu/10297206/Secrets_of_printf_)_
	* _[printf (3)](https://linux.die.net/man/3/printf)_

<br />

#### Authorized functions and macros

* Memory management:
	* _[malloc	(man 3 malloc)](https://linux.die.net/man/3/malloc)_
	* _[free	(man 3 free)](https://linux.die.net/man/3/free)_

* Output
	* _[write	(man 2 write)](https://linux.die.net/man/2/write)_

* Variadic Argument handling
	* *[va_start	(man 3 va_start)](https://linux.die.net/man/3/va_start)*
	* *[va_end	(man 3 va_end)](https://linux.die.net/man/3/va_end)*
	* *[va_arg	(man 3 va_arg)](https://linux.die.net/man/3/va_arg)*
	* *[va_copy	(man 3 va_copy)](https://linux.die.net/man/3/va_copy)*

<br />

#### Compilation

* Code will be compiled this way:

	```
	$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
	```

* As a consequence
	* Be careful not to push any `c` file containing a `main` function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
	* Our main files will include your main header file (`main.h`): `#include main.h`
	* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`
	* We strongly encourage you to work all together on a set of tests
	* If the task does not specify what to do with an edge case, do the same as printf

<br />
