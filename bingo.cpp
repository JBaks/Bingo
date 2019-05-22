#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
	int niz[48]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48};
	int iznos[31]={20000,10000,7500,5000,2500,1000,500,300,200,150,100,90,80,70,60,50,40,30,25,20,15,10,9,8,7,6,5,4,3,2,1};
	
	int i,brojevi[6],j,pom=0,pobjeda=0,br_p,obicno;
	

	printf("Unesite 6 brojeva po vasem izboru:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&brojevi[i]);
		if(brojevi[i]<1 || brojevi[i]>48 || brojevi[i]==brojevi[i-1]||brojevi[i]==brojevi[i-2]||brojevi[i]==brojevi[i-3]||brojevi[i]==brojevi[i-4]||brojevi[i]==brojevi[i-5])
		{
			printf("Unesite ponovo:\n");
			i--;
		}
		//Jos jedan primjer ako imamo 2 ista broja!
		/*else
        	{
            	for(int k=0;k<i;k++){   
                	if(brojevi[i]==brojevi[k]){
                    		printf("Unesite ponovo:\n");
                    		i--;
                	}
            	}
		}*/


	}
	printf("Vasi brojevi su:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",brojevi[i]);
	}
	printf("\n");
	printf("\n");

	srand(time(NULL));
	for(i=0;i<48;i++)
	{
		j=(rand()%48);

		pom=niz[i];
		niz[i]=niz[j];
		niz[j]=pom;
		
		for(int br=0;br<6;br++){
            		if((niz[i]==brojevi[br])&&(i<5))
					{
                		pobjeda++;
                		
            		}
            		}
		}
		
		for(i=0;i<35;i++)				
		{
		    obicno=1;

			if(i<4)
			{
			    for(int b=0;b<6;b++){
                    if(niz[i]==brojevi[b]){
                        printf("%d *\n",niz[i]);
                        obicno=0;
                    }
			    }
			    if(obicno==1)
                    printf("%d\n",niz[i]);


			}
			else{
                for(int b=0;b<6;b++){
                    if(niz[i]==brojevi[b]){
                        printf("%d  %d *\n",niz[i],iznos[i-4]);
                        obicno=0;
                    }
			    }
                if(obicno==1)
                    printf("%d  %d\n",niz[i],iznos[i-4]);

			}
			
		
			
			delay(1);
		}
		printf("\n");
		printf("\n");
		
		
		if(pobjeda==5)
		{
			printf("Cestitamo!! Osvojili ste 20 000 KM \n");
		}
		

}
