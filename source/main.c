#include <string.h>
#include <stdio.h>
#include <stdlib.h>	
#include <switch.h>


/*

HAHAHAHAH this is so funny code :) 
I fixed it to work with newer libnx :)  
I would make "Fuck you" text much bigger and add in the middle finger pixel image  
It can be done by SDL :)

ELY M.  

*/

int main(int argc, char **argv)
{


    consoleInit(NULL);
	setInitialize();


    printf("Heres a handy guide!\n");
	printf("A = Fuck you.\n");
	printf("B = Bitch\n"); 
	printf("X = Shut up\n");  
	printf("Y = Cunt\n");
	printf("Press on left joystick will bring a condom ascii art\n");
	printf("Push up on left joystick will bring a middle finger ascii art\n");
	
	printf("pressing - will clear the screen (including this guide) \n");
	
	while(appletMainLoop())
    {
        //Scan all the inputs. This should be done once for each frame
        hidScanInput();
        //hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
		
		if(kDown & KEY_ZL)
		{
			printf(" HAHAHAHAHAHA.");
		}
		
		if(kDown & KEY_ZR)
		{
			printf(" LOL.");
		}
		
		if(kDown & KEY_R)
		{
			printf(" Suck me.");
		}
		
		if(kDown & KEY_L)
		{
			printf(" Suck my cock.");
		}
		
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
		printf(" Cunt");
		}
		
		if(kDown & KEY_LSTICK) 
		{
		printf("\n\n\n"); 	
		printf("\t   _/~\\_\n");
		printf("\t  /     \\\n");	
		printf("\t (       )\n");
		printf("\t | - -  -|\n");
		printf("\t } -  -  {\n");
		printf("\t }- -  - {\n");	
		printf("\t } - -  -{\n");
		printf("\t }-  - - {\n");
		printf("\t }- -  - {\n");
		printf("\t } - - - {\n");
		printf("\t | - - - |\n");
		printf("\t |_______|\n");
		printf("\t(_________)\n");
		printf("\n\n");

		}

		if(kDown & KEY_LSTICK_UP) 
		{
		printf("\n\n");		
		printf("\t         /\"\\ \n");
		printf("\t        |\\./| \n");
		printf("\t        |   | \n");
		printf("\t        |   | \n");
		printf("\t        |>~<| \n");
		printf("\t        |   | \n");
		printf("\t     /'\\|   |/'\\..\n");
		printf("\t /~\\|   |   |   | \\ \n");
		printf("\t|   |   |   |   |  \\ \n");
        printf("\t|   |   |   |   |   \\ \n");
        printf("\t| ~   ~   ~   ~ |`   ) \n");
        printf("\t|                   / \n");
        printf("\t \\                 / \n");
        printf("\t  \\               / \n");
        printf("\t   \\            / \n");
        printf("\t    |          | \n");
        printf("\t    |          | \n");
        printf("\t    |          | \n");
		printf("\n\n");
		
		
		
		}				
				
				
		

		if(kDown & KEY_MINUS)
		{
		consoleClear();

		}
		
		if(kDown & KEY_A)
		{
			printf(" Fuck You");
		}
		
        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu
		
		consoleUpdate(NULL);
		

    }

    consoleExit(NULL);
    return 0;
}
