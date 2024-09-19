#include <studio.h>
void hanoi_tower(int n,char from,char tem,char tmp,char to)
{
	if( n == 1 ) printf("원판 1을 %C에서 %C으로 옮긴다.",from, to);
		else {
			hanoi_tower( n-1,from,to,tmp);
			printf("원판 %d을  %C에서  %C으로 옮긴다.＼n", n , from , to);
			hanoi_tower( n-1 , tmp , from, to);
	}
}
int main(void) 
{
	hanoi_tower(4,'A','B','C');
	return 0;
}
