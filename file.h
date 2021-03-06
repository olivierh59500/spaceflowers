#include <stdlib.h>
#include <stdio.h>

#define RAR_SUPPORT
#define ARCHIVE "data.ulf"
#define PASSWORD "roar1337"

typedef struct{
	unsigned int size;
	unsigned char *data;
	unsigned int pos;
}file;

file* file_open( char *filename );
int file_close( file *file );

int file_tell( file *file );
size_t file_read( void *buffer, size_t size, size_t number, file *file );
int file_seek( file *file, __int64 offset, int mode );
