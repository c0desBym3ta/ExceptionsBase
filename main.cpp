#include <iostream>
#include <string>
#include <stdexcept>
#include "missing_file_exception.h"
#include "GameMap.h"

//Loading our bitmap and throwing an error. Protoype creating
void loadBitmap(std::string fileName) throw(std::runtime_error, 
missing_file_exception);
void displaySplash();

int main() {

    return 0;
}


void loadBitmap(std::string fileName) throw(std::runtime_error,
missing_file_exception){
	//...Suppose to load our file gere.
	bool fileRead;
	//....reading the file..
	fileRead = true;
	if(!fileRead)
		throw missing_file_exception("File not readble or missing", 
fileName, false);

	//..Decompressing our file...
	bool decompress;
	//.........
	if(!decompress)
		throw std::runtime_error("Can not decompress splash");

}

void displaySplash(){
	try{
		//...let our graphics to start....
		loadBitmap("spash_screen.jpg"); //Loading our bitmap....
		//....displaying it....
	
		//Stop the display.
	}catch(missing_file_exception &e){
		//..logging our error.....
	}
}
