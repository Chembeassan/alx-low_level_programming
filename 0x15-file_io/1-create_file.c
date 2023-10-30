#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
    int fd, i;

    if (filename == NULL)
        return (-1);

    /* Create or open the file with specified permissions */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        /* Calculate the length of the text content */
        for (i = 0; text_content[i]; i++)
        {
        }

        /* Write the text content to the file */
        if (write(fd, text_content, i) == -1)
        {
            close(fd);
            return (-1);
        }
    }

    /* Close the file and return success */
    close(fd);
    return (1);
}
