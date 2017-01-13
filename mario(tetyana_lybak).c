#include <stdio.h>
#include <cs50.h>
int main(void)
{
int height;
int all_rows;
int space;
do
{
printf("Please enter a number of height 1..23: ");
height=GetInt();
}
while ((height<1)||(height>23));
for (all_rows=1; all_rows<=height; all_rows++)
{
for (space=(height+1); space>=1; space--)
if (all_rows<(space-1))
{
printf(" ");
}
else 
{
printf("#");
}
printf("\n");
}
}