#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int c=0,word=0,line=1;
    fp=fopen("hi.txt","r");
    if (fp==NULL){
        printf("Error in opening the file");
        return 1;
    }
    printf("\nThe data in file is:\n");
    while((ch=getc(fp))!=EOF)
        printf("%c",ch);
    fclose(fp);
    fp=fopen("hi.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        c++;
        if ((ch==' ')||(ch=='.'))
        {
            word++;
        }
        if (ch=='\n')
        {
            line++;
        }
    }
    fclose(fp);
    printf("\nThe no of characters:%d\n The no of words: %d\nThe no of lines: %d",c,word,line);
    fp=fopen("output.txt","w");
    fprintf(fp,"\nThe no of characters:%d\n The no of words: %d\nThe no of lines: %d",c,word,line);
    fclose(fp);
    printf("\n The output is stored in output.txt");
    return 0;    
}