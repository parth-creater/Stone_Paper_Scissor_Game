#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomnumber(int n)
{
	srand(time(NULL));
	return rand() %n;
}
int main()
{
	int a,random;
clrscr();
	printf("**********Stone Paper & Scissor Game***********\n");
	printf("1.Stone\n 2.Paper\n 3.Scissor\n");
	scanf("%d", &a);
       //	stone=0
       //	paper=1
       //	scissor=2
	random=generateRandomnumber(2);

	if(random==0 && a==1 || random==1 && a==2 || random==2 && a==3)
	    printf("Computer Choose %d Match is Drawn", random);
	else if (random==0 && a==2)
	    printf("Computer Choose Stone \n User Choose Paper \n User Win");
	else if (random==0 && a==3)
	    printf("Computer Choose Stone \n User Choose Scissor \n Computer Win");
	else if (random==1 && a==1)
	    printf("Computer Choose Paper \n User Choose Stone \n Computer Win");
	else if (random=1 && a==3)
	    printf("Computer Choose Paper \n User Choose Scissor \n User Win");
	else if (random==2 && a==1)
	    printf("Computer Choose Scissor \n User Choose Stone \n User Win");
	else if (random=2 && a==2)
	    printf("Computer Choose Scissor \n User Choose Scissor \n Computer Win");
	else
	    printf("Please Enter Value Between 1 to 3");
getch();
return 0;
}