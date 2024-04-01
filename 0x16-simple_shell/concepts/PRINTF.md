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

<br />

#### Resources

* Expected is a consumption of these resources:
	* _[Secrets of printf](https://www.academia.edu/10297206/Secrets_of_printf_)_
	* _[printf (3)](https://linux.die.net/man/3/printf)_

<br />

#### Project Requirements

* Allowed editors:
	* _[vi](https://www.geeksforgeeks.org/vi-editor-unix/)_
	* _[vim](https://www.geeksforgeeks.org/getting-started-with-vim-editor-in-linux/)_
	* _[emacs](https://www.geeksforgeeks.org/emacs-command-in-linux-with-examples/)_

* All source code:
	* To be compiled on `Ubuntu 20.04 LTS`, with `gcc` as the compiler of choice, using the options
		* `-Wall -Werror -Wextra -pedantic -std=gnu89`
	* To have prototypes to be placed in a header
		* Name the header, `main.h`
		* Ensure that header is included guarded
	* To have no more than 5 functions per file
	* To end with a new line
	* To have no errors and no warnings during compilation
	* To use the _[Betty](https://www.showwcase.com/show/34588/betty-style-guidelines)_ style.
	* To have it's best practices checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
	* Global variables are disallowed

* _ALX_ will using its own `main.c` files at compilation, which may be different from the ones shown in the examples

* A README.md file at the root of the repo, containing a description of the repository

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
