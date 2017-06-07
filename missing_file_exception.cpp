//
// Created by s3th on 6/7/17.
//

#include "missing_file_exception.h"

//A little change to our inline implementation. The cause is the exception library. Google it.
missing_file_exception::missing_file_exception(std::string whatMsg, std::string file_name, bool fatal): std::runtime_error{whatMsg}, fileName{file_name}, fatal{fatal} {
    //If you want you can make some experiments. So you can add more code here.
}

void missing_file_exception::printError() const {
    std::cerr << "Missing file: " << fileName << std::endl; //Using cerr for console errors.
}