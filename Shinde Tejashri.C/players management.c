#include<stdio.h>
#include<string.h>
struct players {
	int jerseyNumber;
	char name[50];
	int runs;
	int wickets;
	int matches;
};
void addplayer(struct players *,int);
void removeplayer(struct players *,int );
void searchplayer(struct players*,int );
void updateplayer(struct players *,int);
void displaysortedplayer(struct players *,int);
void displayallplayer(struct players *,int );
void main()
 {
	struct players prr[100];
	int n,choice;
	printf("Enter your player details number ");
	scanf("%d",&n);
	
	int running = 1;
    while (running) {
        printf("\n---- players Management Menu ----\n");
        printf("1. Add players \n");
        printf("2. Remove players\n");
        printf("3. Search players\n");
        printf("4. update players\n");
        printf("5. displaysorted players\n");
        printf("6. Display All players\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		
		
        switch (choice) {
            case 1:
                addplayer(prr, n);
                break;
            case 2:
                removeplayer(prr, n);
                break;
            case 3:
                searchplayer(prr, n);
                break;
            case 4:
                updateplayer(prr, n);
                break;
            case 5:
                displaysortedplayer(prr, n);
                break;
            case 6:
                displayallplayer(prr, n);
                break;

        }
    }

	
}
// add player
void addplayer(struct players *prr,int size) {
	for (int i=0; i<size; i++) {
		printf("\n------ this is youe details no %d ------\n",i+1);

		printf("enter player jerseyNumber");
		scanf("%d",&prr[i].jerseyNumber);
		getchar();
		printf("enter player name =");
		gets(prr[i].name);

		printf("enter player runs = ");
		scanf("%d",&prr[i].runs);

		printf("enter player wickets");
		scanf("%d",&prr[i].wickets);

		printf("enter player matches =");
		scanf("%f",&prr[i].matches);

	}
}
//remove player 
void removeplayer(struct players *prr,int jerseyNumber) {
	int jno ;
	int fount=0;

	printf("\n enter your remove  jerseyNumber");
	scanf("%d",&jno);
	for (int i=0; i<jerseyNumber; i++) {
		if(prr[i].jerseyNumber==jno) {
			for(int j=i; j<jerseyNumber-1; j++)
				prr[j]=prr[j+1];
			jerseyNumber--;
			fount=1;
			printf("jerseyNumber remove \n");
			break;

		}

	}
	if (!fount)
		printf("jerseyNumber is not found\n");
}
//search player 
void searchplayer(struct players *prr,int  size)
 {
	int choice,jerseyNumber;
	char name[20];
	printf("enter 1 to search jerseyNumber  \n enter 2 to search name = ");
	scanf("%d",&choice);
	getchar();
	if(choice==1) {
		printf("enter your jerseyNumber number ");
		scanf("%d",&jerseyNumber );
		for(int i=0; i<size; i++) {
			if(prr[i].jerseyNumber==jerseyNumber) {
				printf("found players %s \n %d",prr[i].name,prr[i].runs);
			}
		}
	}
	else if ( choice == 2) {
		printf("enter your name of player ");
		gets(name);
		for(int i=0;i<size; i++) {
			if(strcmp(prr[i].name,name)==0) {
				printf("found players %d \n %d",prr[i].jerseyNumber,prr[i].runs);
			}
		}
	}
	else{
		printf("this player is not found \n ");
	}
}
//update players
void updateplayer(struct players *prr,int size)
{
	int ujno ;
	int found=0	;
	printf("enter your update jerseyNumber,");
	scanf("%d",&ujno);
	for (int i=0;i<size;i++)
	{
		if(prr[i].jerseyNumber==ujno)
		{
			printf("this is runs");
			scanf("%d",&prr[i].runs);
			
			printf("this is wickets");
			scanf("%d",&prr[i].wickets);
			
			printf("this is matches");
			scanf("%d",&prr[i].matches);
			found==1;
			break;
			
		}	
	}
	if(!found)
	printf("this player jerseyNumber not found ");
}
void displaysortedplayer(struct players *prr,int size)//display sorted player
{
	 int option;
    printf("Sort by: 1-runs  2-matches: ");
    scanf("%d", &option);
    struct  players temp[size];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((option == 1 && prr[i].runs < prr[j].runs) ||
                (option == 2 && prr[i].matches < prr[j].matches)) {
                temp[i] = prr[i];
                prr[i] = prr[j];
                prr[j] = temp[i];
            }
        }
    }
}
void displayallplayer(struct players *prr,int size)//all players
{
	for (int i=0;i<size;i++)
	{
		printf("jerseyNumber= %d \n",prr[i].jerseyNumber);
		printf("name = %s \n",prr[i].name);
		printf("runs = %d\n",prr[i].runs);
		printf("wickets = %s \n",prr[i].wickets);
		printf("matches = %d \n",prr[i].matches);
	}
}

