#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;
/*!
 *--ReadFile
 *
 *	Is a class that holds a text file that is being read from
 **/
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;

	public:
//! Constructor that accepts a file name
		ReadFile(const char* file_name);
//! The Destructor that removes the file from memory
        ~ReadFile();
//! Parses the current line into a String and returns it to be read
		String* readLine();
//! Return true if reader is at the end of the file
		bool eof();
//! Function to close the file given in the parameter
		void close();
};
#endif
