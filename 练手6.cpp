# include <stdio.h>

int main (void)
{
	int year ;
	printf ("������Ҫȷ�ϵ���ݣ�");
	scanf ("%d", &year);
	
	if ((year % 4 == 0 && year & 100 != 0) && (year % 400 == 0))
	    printf ("�������꣡\n");
	else 
	    printf ("�ⲻ�����꣡\n");
	    
return 0;

}
