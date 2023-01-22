#include <stdio.h>
#include<conio.h>
void board();
int win();
int i;
char b[9]={'1','2','3','4','5','6','7','8','9'};
void board()
{
clrscr();
printf("\n _____ _____ _____ ");
printf("\n|     |     |     |");
printf("\n|  %c  |  %c  |  %c  |", b[0], b[1], b[2]);
printf("\n|_____|_____|_____|");
printf("\n|     |     |     |");
printf("\n|  %c  |  %c  |  %c  |", b[3], b[4], b[5]);
printf("\n|_____|_____|_____|");
printf("\n|     |     |     |");
printf("\n|  %c  |  %c  |  %c  |", b[6], b[7], b[8]); 
printf("\n|_____|_____|_____|");
	
}
int win(int p)
{
	
if(b[0]==b[1]&&b[2]==b[1])
	{
		printf("\n%d win",p);
		i=9;
	}
else if(b[3]==b[4]&&b[4]==b[5])
        {
		printf("\n %d win",p);
		i=9;
        }
else if	(b[7]==b[6]&&b[6]==b[8])
        {
                printf("\n%d win",p);
                i=9;
        }
else if(b[0]==b[4]&&b[4]==b[8])
	{
	printf("\n%d win",p);
	i=9;
	}
else if(b[2]==b[4]&&b[2]==b[6])
        {	
	printf("\n%d win",p);
	i=9;
        }
else if(b[2]==b[5]&&b[2]==b[8])
        {
	printf("\n%d win",p);
	i=9;
        }
else if(b[4]==b[1]&&b[1]==b[7])
        {
	printf("\n%d win",p);
	i=9;
         }
	
else if(b[0]==b[3]&&b[3]==b[6])
	{
	printf("\n%d win",p);
	i=9;
	}
}
int main()
{
	
	int p = 1, n;
	char m;
	board();
	for (i=0;i<9;i++)
	{
		
	
	printf("\nenter %d player=", p);
	(p == 1) ? m = 'X' : m = 'O';
	(p == 1) ? p = 2 : p = 1;
	scanf("%d", &n);
	b[n-1]=m;
	board();
	(p==2)?win(1):win(2);
	
	getch();
}
}
