#include <string.h>
#include <stdio.h>
#include <stdlib.h>	
#include <switch.h>


/*

HAHAHAHAH this is so funny code :) 
I fixed it to work with newer linnx :)  
I would make "Fuck you" text much bigger and add in the middle finger pixel image  
It can be done by SDL :)

ELY M.  

*/

int main(int argc, char **argv)
{

    //Initialize console. Using NULL as the second argument tells the console library to use the internal console structure as current one.
    consoleInit(NULL);
	setInitialize();

    //Move the cursor to row 16 and column 20 and then prints "Hello World!"
    //To move the cursor you have to print "\x1b[r;cH", where r and c are respectively
    //the row and column where you want your cursor to move
    printf("Heres a handy guide! Pressing A will say 'Fuck you.', pressing B will say 'Bitch', pressing X will say 'Shut up' and pressing Y will clear the screen (including this guide) ");
	
	while(appletMainLoop())
    {
        //Scan all the inputs. This should be done once for each frame
        hidScanInput();
        //hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
		
		if(kDown & KEY_B)
		{
			printf(" Bitch.");
		}

		if(kDown & KEY_X)
		{
			printf(" Shut up.");
		}
		
		if(kDown & KEY_Y)
		{
		consoleClear();

		}
		
		if(kDown & KEY_A)
		{
			printf(" Fuck You.");
		}
		
        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu
		
		consoleUpdate(NULL);
		

    }

    consoleExit(NULL);
    return 0;
}
