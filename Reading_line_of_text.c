Using getchar() to read a line of text

#include <stdio.h>
int main()
{
    char name[30], ch;
    int i = 0;
    printf("Enter name: ");
    while(ch != '\n')    // terminates if user hit enter
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';       // inserting null character at end
    printf("Name: %s", name);
    return 0;
}


Using standard library function to read a line of text
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    gets(name);     //Function to read string from user.
    printf("Name: ");
    puts(name);    //Function to display string.
    return 0;
}

Output:
Enter name:Md.Mainul Hasan
Name:Md.Mainul Hasan
