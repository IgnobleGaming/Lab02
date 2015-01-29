#include "ReadFile.h"

#if !defined NULL
#define NULL 0
#endif

#include <iostream>
#include <string>


/* Constructor
   Args: file_name - Name of file to open */
ReadFile::ReadFile(const char* file_name)
{
   input_file.open(file_name);
   closed = false;
   eof    = false;
}

/*  Destructor  */
ReadFile::~ReadFile()
{
   close(rf);
   delete rf;
}

/* End of File 
   Returns: True if at end of opened file  */
bool ReadFile::eof()
{
   return eof;
}

/* Close file */
void ReadFile::close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

/* Read current line 
   Returns: Line caught by delimator*/
String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
