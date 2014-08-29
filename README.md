## zerodbg

Useful macros for debugging purposes.

```c
debug("I see what you did there o_O!");
log_info("standing still");
```

Output

```
 * DEBUG example.c:12: I see what you did there o_O!
 * [INFO] (example.c:13) standing still
```

Or you could redirect logging information to a file using `debug_set_log(FILE * log_file);`.

#### Installation

    $ clib install zerodbg

* [Introducing Clib](https://medium.com/code-adventures/introducing-clib-b32e6e769cb3)
* [clib](https://github.com/clibs/clib)

For serious logging purposes please use a framework.
