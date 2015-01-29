#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;
/**
 *
 *
 *
 **/
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;

	public:
		ReadFile();
//! Constructor that accepts a character array signifying the name of the file
		ReadFile(const char* file_name);
//! The Destructor that removes the file given as a parameter		
		void destroyReadFile();
//! Parses the current line into a String and returns it to be read
		String* readLine();
//! Return true if reader is at the end of the file
		bool eof();
//! Function to close the file given in the parameter 
		void close();
}
#endif
