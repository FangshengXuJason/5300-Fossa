#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "db_cxx.h"

const char *EXIT = "quit";

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << " Usage: " << argv[0] << " [path to a writable directory]" << std::endl;
        return EXIT_FAILURE;
    }
    const char *HOME = argv[1];
    std::string input;

    do {
        std::cout << "SQL> ";
        std::cin >> input;
        std::cout << "You entered: " << input << std::endl;
    } while(input != EXIT);

    const char *home = std::getenv("HOME");

    // TODO: add print message with location of database environment

    // TODO: prompt user for a SQL> query

    // TODO: after parsing, print the message parsed

    // TODO: Add support for create table

    // TODO: add support to select from

    // TODO: add support to join

    // TODO: add support to where clause

    // TODO: add support to alias

    // TODO: print message for invalid sql statements

    return EXIT_SUCCESS;
}