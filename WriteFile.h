#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

/**
*! Constructor
*
*   Creates a text file filled with information given.
*/
class WriteFile
{
	private:
		ofstream output_file;
		bool closed;

	public:
		//! Constructor
		WriteFile(const char* file_name);
		//! Destructor
		~WriteFile();
		//! Writes the given line to the text file
		void writeLine(String* line);
		//! Closes the file giving the information
		void close();
};

#endif
