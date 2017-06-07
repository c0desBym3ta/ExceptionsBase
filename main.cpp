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
	try{
		displaySplash();
		GameMap startMap;
		startMap.loadMapFile("intro.map");
		startMap.draw();
        //Ok guys i think no comments this lines no ?
	}catch (missing_file_exception &e){
		e.printError();
		if(e.isFatal()){
			std::cerr << "Missing importand files. Must stop execution" << std::endl;
			std::exit(-1); //Setting a number to be easier to identify our error..
		}
	}catch (std::runtime_error &e){
		std::cerr << "Reinstalling the game." << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout <<"\nLoading game characters bitmaps..." << std::endl;

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
	}catch(missing_file_exception &e){ //Making reference to the exception itself.
		//..logging our error.....
	}
}
