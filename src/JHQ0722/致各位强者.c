#include<stdio.h>
int main()
{
	void print(int x); 
	int a,b,m;
	
	char c;
	while(1)
	{
		printf("���Ӣ�Ĵ�д��Ȼ������\t���ţ���ѡ��һ��ģʽ��A=������B=����C=�ո�ָ�,D=���зָ�,E=ȫ��ˢ��(�����޷��Լ�ͣ��)\n");
		scanf("%d,%c",&m,&c);
		
		switch(c){ 
		
			case 'A':
			{
				printf("����\t��ʾ����\n");
 				int a;
				scanf("%d",&a);
				
				for(int i=0;i<a;i++)
					print(m);
				printf("\n"); 
				break;
			}
			
			case 'B':
				{
					printf("����\t����������\n�ڶ��������Ϊ11\n");
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
					printf("����\t��ʾ����\n");
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
				printf("����\t��ʾ����\n");
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
		printf("ǿ��");//�޸ĳɴ������� 
		
		if(x==1)
			printf("̫ǿ��!");
		else if(x==2)
			printf("��Զ����!");
 }
