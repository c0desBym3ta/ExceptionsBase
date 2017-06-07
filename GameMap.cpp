//
// Created by s3th on 6/7/17.
//

#include "GameMap.h"

//You know what to do ;)


//Ok here we are throwing inside to the error our missing file exception we create earlier.
void GameMap::loadMapFile(std::string fileName) throw(std::runtime_error, missing_file_exception) {
    bool fileRead;
    //..Supposed that here is opened a file.
    fileRead = true;
    if(!fileRead) //..Showing our error..
            throw missing_file_exception("Can not opena map ", fileName, true);

    bool corrupted; //No need for this variable. but saying that i wanna know if my file is corrupted.
    //...let\s ssay that here we are checking our map.
    corrupted = true;
    if(corrupted)
        throw std::runtime_error("Map file corrupted. ");
}

void GameMap::draw() {
    //...Displaying our map.. make your own map..
}