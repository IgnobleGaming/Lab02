#include "WriteFile.h"
#include <sstream>

/* Constructor */
WriteFile::WriteFile(const char* file_name)
{
    output_file.open(file_name);
    closed = false;
}

/* Destructor */
WriteFile::~WriteFile()
{
	close();
}

/* Closes the file being read in */
void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

/* Writes a line to the text document */
void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
