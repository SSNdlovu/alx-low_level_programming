* `0. Tread lightly, she is near`
  * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text file and
  prints it to the `POSIX` standard output.
  * The parameter `letters` is the number of letters the function should read and print.
  * If the file is `NULL` or cannot be opened or read - returns `0`.
  * If the `write` call fails or does not write the expected number of bytes - returns `0`.
  * Otherwise - returns the actual number of bytes the function can read and print.

* `1. Under the snow`
  * [1-create_file.c](./1-create_file.c): C function that creates a file.
  * The paramter `filename` is the name of the file to create.
  * The parameter `text_content` is a null-terminated string to write to the file.
  * If `text_content` is `NULL`, the function creates an empty file.
  * The created file has the permissions `rw-------`.
  * If the file already exists, the existing permissions are not changed.
  * Existing files are truncated.
  * If `filename` is `NULL` or the funciton fails - returns `-1`.
  * Otherwise - returns `1` on success.

