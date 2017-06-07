//
// Created by s3th on 6/7/17.
//

#ifndef EXCEPTIONSBASE_GAMEMAP_H
#define EXCEPTIONSBASE_GAMEMAP_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "missing_file_exception.h"

class GameMap {
public:
    //I let you make the methods, constructor and destructors.
    void loadMapFile(std::string fileName) throw(std::runtime_error, missing_file_exception);
    void draw();
};


#endif //EXCEPTIONSBASE_GAMEMAP_H
