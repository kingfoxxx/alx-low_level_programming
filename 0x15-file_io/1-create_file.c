#include "main.h"


/**
 * create_file - Creates a file in text content
 * @filename: Name of the file 2 create.
 * @text_content: Text 2 write in the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)

{

	int fz, write_f;

	/*Check content file*/
	if (!filename)
		return (-1);

	/*Open file*/
	fz = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fz == -1) /*If it fails*/
	{
		return (-1);
	}

	if (!text_content)
		return (1);

	/*Write file*/
	write_f = write(fz, text_content, strlen(text_content));
	close(fz);
	if (write_f == -1) /*If it fails*/
	{
		close(fz); /*Close file*/
		return (-1);
	}

	return (1);

}
