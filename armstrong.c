# Kaviya
int main()
{
int n1,n2,i,temp,rem,num;
printf("enter 2 intervals");
scanf("%d%d",&n1,&n2);
printf("Armstrong number between %d and %d are",n1,n2);
for(i=n1+1;i<n2;i++)
{
temp=i;
num=0;
while(temp!=0)
{
rem(temp%10);
num=num+(rem*rem*rem);
temp=temp/10;
}
if(i==num)
{
printf("%d",i);
}
return 0;
}
