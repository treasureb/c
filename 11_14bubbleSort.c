#include  <stdio.h>

void bubble_sort(int a[],int n)
{    
 int i,j,temp;    
 for(j=0;j<n-1;j++)        
  for(i=0;i<n-1-j;i++)        
  {            
   if(a[i]>a[i+1])//����Ԫ�ش�С����������            
   {                
    temp=a[i];                
    a[i]=a[i+1];                
    a[i+1]=temp;           
   }        
  }
}

void output(int a[], int n)
{
 int i;
 for(i=0;i<n;i++)    
 {        
  printf("%d ",a[i]);   
 }    
}

int main()
{
 int number[100],count=0;
 char y;
 printf("������������������س�������\n");
 do 
 {
  scanf("%d",&number[count++]);  
 }while((y=getchar()) != '\n');
 bubble_sort(number,count);
 output(number,count);
 return 0;
}
  
