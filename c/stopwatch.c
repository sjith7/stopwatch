#include<stdio.h>
#include<unistd.h>
void main(){
	int totalSeconds=0, days=0, hours=0, minutes=0, seconds=0;
	printf("Welcome to Stopwatch \n\n");
	printf("Day  Hrs  Min  Sec\n");

	while (1){
		if(totalSeconds != 0){
	  	   days    = totalSeconds/86400;
		   hours   = (days>0)? totalSeconds%86400/3600: totalSeconds/3600;
		   minutes = (hours>0)? totalSeconds%86400%3600/60: totalSeconds/60;
		   seconds = (minutes>0)? totalSeconds%86400%3600%60: totalSeconds;
		}

		printf("%3.3d : %2.2d : %2.2d : %2.2d",days, hours, minutes, seconds);
		fflush(stdin);
		sleep(1);
		fflush(stdout);
		printf("\33[2K\r");
		totalSeconds++;
	}
}
