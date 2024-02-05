#include<stdio.h>
#include "cs50.h"
#include<string.h>
int main(void)
{
    string strings[]={"Battleship","Cannon","Gun","Jail","Bullet","Infirmary"};
    string s=get_string("Enter the name:");
    for(int i=0;i<6;i++)
    {
        if(strcmp(strings[i],s)==0)
// string[i]==s doesn't work here//

        {
            printf("Found a match\n");  
            return 0;
        }
    
    }
    printf("String not found\n");
    return 1;

    /*
    Enter the name:asdas
    Segmentation fault

    Because i <7 but only 6 elements in this arrray hence
    it touched memory it shouldn't have

 $ ./LS1
Enter the name:asd
String not found

arunk@MALINI MINGW64 ~/OneDrive/Documents/ArunC/Algorithms (main)
$ echo $?
1

arunk@MALINI MINGW64 ~/OneDrive/Documents/ArunC/Algorithms (main)
$ ./LS1
Enter the name:Gun
Found a match

arunk@MALINI MINGW64 ~/OneDrive/Documents/ArunC/Algorithms (main)
$ echo $?
0
    
    
    */

        
     
}