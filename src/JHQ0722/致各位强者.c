#include<stdio.h>
int main()
{
	void print(int x); 
	int a,b,m;
	
	char c;
	while(1)
	{
		printf("请打开英文大写，然后输入\t语句号，并选择一个模式：A=连续，B=矩阵，C=空格分隔,D=换行分隔,E=全屏刷屏(程序无法自己停下)\n");
		scanf("%d,%c",&m,&c);
		
		switch(c){ 
		
			case 'A':
			{
				printf("输入\t显示次数\n");
 				int a;
				scanf("%d",&a);
				
				for(int i=0;i<a;i++)
					print(m);
				printf("\n"); 
				break;
			}
			
			case 'B':
				{
					printf("输入\t行数，列数\n第二个数最大为11\n");
					scanf("%d,%d",&a,&b);
					
					if(b>11)b=11;
		
					for(int i=0;i<a;i++){
					for(int j=0;j<b;j++)
					{
						print(m);
						printf("\t");
					}
					printf("\n");
					printf("\n");
				}
				break;
				}
				
			case 'C':
				{
					printf("输入\t显示次数\n");
 					int a;
					scanf("%d",&a);
					
					for(int i=0;i<a;i++){
						print(m);
						printf("\t");
					}
					printf("\n");
					break;
				} 
				
			case 'D':
			{
				printf("输入\t显示次数\n");
 				int a;
				scanf("%d",&a);

				for(int i=0;i<a;i++)
				{
					print(m);
					printf("\n");
				}
				printf("\n");
				break;
			}
			
			
			case 'E':{
				for(int i=1;i;){
					for(int j=1;j<15;j++)
						print(m);
					printf("\n");
				}
				printf("\n");
				break;
			}
		}
		printf("\n");
	 }
 	return 0;
 } 
 
 void print(int x)
 {	
		printf("强者");//修改成大佬名字 
		
		if(x==1)
			printf("太强了!");
		else if(x==2)
			printf("永远的神!");
 }
