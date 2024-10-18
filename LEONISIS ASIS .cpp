#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main(){ 
getch();

system("color a");
printf("\n\n\t\t\t\t           =======================================================================================================   ");
printf("\n\t\t\t\t           ||  ******  ******  ******  ******  ******   ******  ***  ***      **      *       *  ******  ****** ||   ");
printf("\n\t\t\t\t           ||  *    *  *       *    *  *      *      *  *    *  *  **  *     *  *     * *     *  *       *      ||   ");
printf("\n\t\t\t\t           ||  ******  ******  ******  ****** *      *  ******  *      *    ******    *   *   *  *       ****** ||   ");
printf("\n\t\t\t\t           ||  *       *       *    *  *      *      *  *    *  *      *   *      *   *     * *  *       *      ||   ");
printf("\n\t\t\t\t           ||  *       ******  *     * *       ******   *     * *      *  *        *  *       *  ******  ****** ||   ");


printf("\n\t\t\t\t           ||***************************************************************************************************||      ");
printf("\n\t\t\t\t           ||***************************************************************************************************||      ");  
printf("\n\t\t\t\t           ||                     *******  ******      **      ******  *    *  ******  ******                   ||      ");
printf("\n\t\t\t\t           ||                        *     *    *     *  *     *       *  *    *       *    *                   ||    ");
printf("\n\t\t\t\t           ||                        *     ******    ******    *       **      ******  ******                   ||     ");
printf("\n\t\t\t\t           ||                        *     *    *   *      *   *       *  *    *       *    *                   ||     ");
printf("\n\t\t\t\t           ||                        *     *     * *        *  ******  *    *  ******  *     *                  ||      ");
printf("\n\t\t\t\t           =======================================================================================================   ");

    printf("\n\n\n\n\n\n\t\t\t\t\tInput number of hired employees: ");
    int emplo1 = 0;   
    int f=0;
    if(scanf("%d", &emplo1) != 1){
    	
		system("color 4");
        printf("\n\t\t\t\t\tInvalid input.\n");
        return 1;
    }
    while(getchar() != '\n'); 
    
    char names[emplo1][50];
    for(int i = 0; i < emplo1; i++){
        printf("\n\n\t\t\t\t\tName of Hired Employee %d: ", i+1);
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    int sales1[emplo1*7];
    int choice;
    while(1){
        system("cls");
        system("color a");
        printf("\n\t\t\t\t\t\t\t\t\t\t*             ******     ******     ******             *          ");
		printf("\n\t\t\t\t\t\t\t\t\t\t*             *    *     *          *                  *           ");
		printf("\n\t\t\t\t\t\t\t\t\t\t*             ******     *  ***     ******             *          ");
		printf("\n\t\t\t\t\t\t\t\t\t\t*             *    *     *    *     *                  *            ");
		printf("\n\t\t\t\t\t\t\t\t\t\t*             *     * o  ******  o  ******             *             "); 
		
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t 1. RECORD SALES");
		printf("\n\n\t\t\t\t\t\t\t\t\t 2. GENERATE PERFORMANCE REPORT");
		printf("\n\n\t\t\t\t\t\t\t\t\t 3. EXIT ");
		printf("\n\n\t\t\t\t\t\t\t\t\tENTER CHOICE: ");
		scanf("%d", &choice); 
		
		
		switch(choice){
			case 1:
				
                for(int i=0, j=0; i<emplo1; i++, j+=7){
                    system("cls");
                   
				   printf("\n\t\t\t        ");
                   printf("\n\t\t\t\t    ((,");
                   printf("\n\t\t\t\t     `>>");
                   printf("\n\t\t\t\t  ,---^---.");
                   printf("\n\t\t\t\t         \\");
                   printf("\n\t\t\t\t|           |");
                   printf("\n\t\t\t\t \\         /");
                   printf("\n\t\t\t\t  `---^---'");
                   printf("\n\t\t\t\t      ||");
                   printf("\n\t\t\t\t     //\\\\");
                   printf("\n\t\t\t\t    ((  ))");
                   printf("\n\t\t\t\t     \\\\_//");
                   printf("\n\t\t\t\t         ||    ");
                   printf("\n\t\t\t\t   *************");
                   printf("\n\t\t\t\t  **           **");
                   printf("\n\t\t\t\t **             **");
                   printf("\n\t\t\t\t **             **");
                   printf("\n\t\t\t\t **             **");
                   printf("\n\t\t\t\t  **           **");
                   printf("\n\t\t\t\t   *************");
                   printf("\n\t\t\t\t                    ");
                    
					printf("\n\t\t\t\t\t\t\t Enter sales data for %s: \n",names[i]);
                    printf("\n\n\t\t\t\t\t\t\t MATCHA LATTE(39.00): ");
                    scanf("%d",&sales1[j]);
                    printf("\n\t\t\t\t\t\t\tSWEETENED BLACK AMERICANO(39.00): ");
                    scanf("%d",&sales1[j+1]);
                    printf("\n\t\t\t\t\t\t\tCARAMEL MACCHIATO(39.00): ");
                    scanf("%d",&sales1[j+2]);
                    printf("\n\t\t\t\t\t\t\tSPANISH LATTE(39.00): ");
                    scanf("%d",&sales1[j+3]);
                    printf("\n\t\t\t\t\t\t\tPANDA PEARL MILKTEA(39.00): ");
                    scanf("%d",&sales1[j+4]);
                    printf("\n\t\t\t\t\t\t\tICE CHOCO(39.00): ");
                    scanf("%d",&sales1[j+5]);
                    printf("\n\t\t\t\t\t\t\tHOT CHOCO(39.00): ");
                    scanf("%d",&sales1[j+6]);
                }
                
                f++;
                break;
			case 2:
    					if(f==0){
    						system("color 4");
    						printf("\n\n\t\t\t\t\t\t\tNo Record Sales Found");
    						printf("\n\n\t\t\t\t\t\t\tPress Any key to continue....  ");
    						getch();
    						break;
								}
						if(f>=1){
        						system("cls");
        						printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t   PERFORMANCE REPORT");
        						printf("\n\t\t\t\t ____________________________________________________________________________________           ");
        						printf("\n\t\t\t\t | \t\t\t\t\t\t\t\t\t\t    |\n\t\t\t\t |    Name of Employee \t\t\tTotal Sales \t\tPerformance Score   |");
        						printf("\n\t\t\t\t |__________________________________________________________________________________|           ");
        							for(int i=0, j=0; i<emplo1; i++, j+=7){
            								int total_sales=0;
            								float perf_score=0.0;
            									for(int k=j;k<j+7;k++){
                									total_sales+=sales1[k];
                									perf_score=((float)total_sales/100)*100;
            									}
            					printf("\n\t\t\t\t |\t%-20s\t\t    %-3d\t\t\t    %.2f%%\t    |", names[i], total_sales, perf_score);
            					printf("\n\t\t\t\t |__________________________________________________________________________________|           ");
        							}
        						printf("\n\n\n\n\t\t\t\t\tPress any key to continue....  ");
        						getch();
           							break;
    								}
    		break;


			case 3:
				exit(0);
			break;
			default:
				system("color 4");
				printf("Invalid Input!");
			break;
		}
	}
		return 0;
	}
	
	
	
	
