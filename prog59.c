#include <stdio.h>

int main()
{
	char p1[50], p2[50];
	printf("Enter player 1 Name:"); scanf("%s",p1);
	printf("Enter player 2 Name:"); scanf("%s",p2);
	int board[101]={0,00,38,00,14,00,00,00,00,31,00,
			  00,00,00,00,00,00,07,00,00,00,
			  42,00,00,00,00,00,00,84,00,00,
			  00,00,00,00,00,00,00,00,00,00,
			  00,00,00,00,00,00,00,00,00,66,
			  67,00,00,34,00,00,00,00,00,00,
			  00,19,00,60,00,00,00,00,00,00,
			  00,91,00,00,00,00,00,00,98,00,
			  00,00,00,00,00,00,36,00,00,00,
			  00,00,73,00,75,00,00,00,79,00};

	//printf("%s  %s\n",p1,p2);

	int i;
	for(i=1; i<=100; i++)
		printf("%d ",board[i]);

	int p1pos=0, p2pos=0;

	int playerturn=1;

	while(1)
	{
		int dicevalue=rand()%10;

		if (playerturn==1)
		{
			if (board[p1pos]==0) 	p1pos=p1pos+dicevalue;
			else			p1pos=board[p1pos];
		}
		else if (playerturn==2)
		{
			if (board[p2pos]==0) 	p2pos=p2pos+dicevalue;
			else			p2pos=board[p2pos];
		}
		printf("\nplayer %d turn",playerturn);
		printf("\nplayer %d dice value is %d",playerturn, dicevalue); 
		printf("\n%s position: %d --  %s position: %d\n\n",p1,p1pos, p2, p2pos);getchar(); 
		
		if (playerturn==1) playerturn=2; else playerturn=1;

		if (p1pos>100) 
		{
			printf("%s Wins",p1);
			break;
		}
		else if (p2pos>100)
		{
			printf("%s Wins",p2);
			break;
		}
		else
			continue;
	}

	return 0;

}
