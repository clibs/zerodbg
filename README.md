## zerodbg

Useful macros for debugging purposes.

```c
debug("I see what you did there o_O!");
log_info("standing still");
```

Output:

```
 * DEBUG example.c:12: I see what you did there o_O!
 * [INFO] (example.c:13) standing still
```

Or you could redirect logging information to a file using `debug_set_log(FILE * log_file);`.

If you `#define NDEBUG` calls to debug will be ignored and will output nothing.

If you want to output errnos, you can use `debug_errno()` to transform error
number to string, if no error happened the resulted string will be “None”.

#### Installation

    $ clib install zerodbg

* [Introducing Clib][1]
* [clib][2]

For serious logging purposes please use a framework such as [log4c][3] for example.

[1]: https://medium.com/code-adventures/introducing-clib-b32e6e769cb3
[2]: https://github.com/clibs/clib
[3]: http://log4c.sourceforge.net
