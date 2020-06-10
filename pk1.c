#include <stdio.h>
int main()
{
char string4[80];
int rotatorN;

printf("Enter String: ");
gets(string4);
printf("Enter Number: ");
scanf("%i", &rotatorN);

int n = 0, rotateSwap = 0;

int i;
for(i=0; string4[i] != '\0'; i++)
{
if((string4[i] >='a' && string4[i] <='z') || (string4[i] >= 'A' && string4[i]<= 'Z'))
{
n = 'z' - string4[i];
if( rotatorN > n )
{
rotateSwap = rotatorN - n - 1;
string4[i] = 'a';
string4[i] += rotateSwap;
}
else --
string4[i] += rotatorN;

}
}

int j;
for(j = 0; string4[j] !='\0'; j++)
{
printf("%c", string4[j]);
}

printf("\n");

return 0;
}
