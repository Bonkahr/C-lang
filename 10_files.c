#include <stdio.h>

/* Files.
    * We have been storing data in memory which is vatile. For permanent storage of data, we store it in files.
    * A file is a set of data or characters that can be text or a programme.
    * There are two ways of manipulating file data in C
        * Low level - uses system calls
        * High level - uses C functions from the  C's I/O standard library. 
    * I/O functions available in C are:
        * fopen() -> creates/opens a file.
        * fclose() -> closes a file which was alredy opened for processing.
        * getc() -> Reads a character from an opened file.
        * putc() -> Writes a charater to an opened file
        * fprintf() -> Writes a set of data values to a file.
        * fscanf() -> Reads a set of data values from a file.
        * getw() -> Reads an integer from a file.
        * putw() -> Writes an integer to a file.
    * Opening a file
        * While trying to open a file, we need to have:-
            * Filename -> the given name in the disk.
            * Data structure -> type of date (always - file)
            * Purpose -> mode to open the file.
                * r - opens text file in reading mode.
                * w - opens  text file or creates a file if it doesn't exist, previous contents are deleted.
                * a - opens text file append mode. Contents are reserved.
                * r+, w+, a+ - opens a text file in both read and write.
                * rb - opens a binary file in read mode.
        * When a file is opened, using the fopen, a file pointer is returned.
        * If the file can't be opened, a null pointer is returned.
        * Once all operations are done, the file is supposed to be closed . Done to clear the buffers and flush all informations associated with the file and remove any accidental manipulation of the file.
    * getc(),putc(), getw() and putw() - are used to read one character/integer at a time.
    * fprinft() and fsacanf() -> more like the fprint() and fscan() - they take in the string with all the formatting.
    * feof() -> Used to test for an end of file condition. It takes the file pointer as it't only arg and retuns a non-zero if all the data was read correctly and zero for otherwise.
*/

int main()
{
    // Opening a file
    FILE *fp;

    fp = fopen("04_arrays.c", "r");

    if (fp == NULL)
    {
        printf("Error reading the file, file doesn't exist!\n");
    }
    else
    {
        printf("Your file is ready to use!\n");
    }
    fclose(fp);

    return 0;
}