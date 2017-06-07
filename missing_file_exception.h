//
// Created by s3th on 6/7/17.
//

#ifndef EXCEPTIONSBASE_MISSING_FILE_EXCEPTION_H
#define EXCEPTIONSBASE_MISSING_FILE_EXCEPTION_H

#include <iostream>
#include <string>
#include <stdexcept> //include the standard exception library.

class missing_file_exception : std::runtime_error { //Taking for use the runtime error from the library
public:
    missing_file_exception(std::string whatMsg, std::string fileName, bool fatal = false); //creating the constructor
    std::string getFileName() const { return fileName;} //Method that gets the file name
    void printError() const; //Method tha prints the error.
    bool isFatal(){ return fatal;} //Checking if it is fatal error.

private:
    std::string fileName;
    bool fatal;
};


#endif //EXCEPTIONSBASE_MISSING_FILE_EXCEPTION_H
