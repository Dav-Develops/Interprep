// Always poihter-variables are used to work with files in 'C'
/* we can create, open, read, and write ( write and append) to files
to open a file fopen()
to create (or overwrite text) a file -w 
to write to a file fprintf("")
to read a file -r
OR fgets(str_name, len, file_name);
to save and close a file fclose()

*/
#include<stdio.h>
int main(){
    FILE *file1, *file2;
    file1 = fopen("file1.txt","w");
    fprintf(file1,"Some text here to be written in the file.");
    fclose(file1);

    file2 = fopen("file2.txt","a");  //Opening file2 in append mode.
    fprintf(file2,"File2 is being appended.");
    file2 = fopen("file2.txt","r");  // Now opening it in reading mode.

    char FileContent[100];
    while (fgets(FileContent, 100,file2))
    {
        printf("%s",FileContent);
    }
    fclose(file2);
    return 0;
}