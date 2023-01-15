#include<stdio.h>
int main(){
	
	/*Taking input starts*/
	int sheep, wolfa, wolfb,wolf3, wolf4, wolf5, wolf6;
	printf("What is the position of wolf A? \n");
	scanf("%d", &wolfa);
	
	printf("What is the position of wolf B? \n");
	scanf("%d", &wolfb);
	
	printf("What is the position of sheep? \n");
	scanf("%d", &sheep);
	/*Taking input ends*/
	
	/*Variable Declaration*/
	wolf3=sheep-wolfa;
	wolf4=sheep-wolfb;
	wolf5=wolfa-sheep;
	wolf6=wolfb-sheep;	
	
if (sheep>wolfa && sheep>wolfb)
	{
	if(wolf3>wolf4)
		printf("\n WolfB");
	else if(wolf3<wolf4)
		printf("\n WolfA");
	else if(wolf3=wolf4)
		printf("\n Wolves distracted, Sheep escaped");
	}
if (sheep<wolfa && sheep<wolfb) 
	{
	if (wolf5>wolf6)
		printf("\n WolfB");
	else if (wolf5<wolf6)
		printf("\n WolfA");
	else if(wolf5=wolf6)
		printf("\n Wolves distracted, Sheep escaped");
	}
if(sheep>wolfa && sheep<wolfb)
	{
	if (wolf3>wolf6)
		 printf("\n WolfB");
	else if (wolf3<wolf6)
		 printf("\n WolfA");
	else if(wolf3=wolf6)
		printf("\n Wolves distracted, Sheep escaped");
	}
if(sheep<wolfa && sheep>wolfb)
	{
	if (wolf4>wolf5)
		 printf("\n WolfA");
	else if (wolf4<wolf5)
		 printf("\n WolfB");
	else if(wolf4=wolf5)
		printf("\n Wolves distracted, Sheep escaped");
	}
}