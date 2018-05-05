#include <stdio.h>
void towers(int, char, char, char);
int main()

{

    int num;



    printf("Enter the number of disks : ");

    scanf("%d", &num);

    printf("The sequence of moves involved in the Tower of Hanoi are :\n");

    towers(num, 'A', 'C', 'B');

    return 0;

}

void towers(int num, char fromPole, char toPole, char auxPole)

{

    if (num == 1)

    {

        printf("\n Move disk 1 from pole %c to pole %c", fromPole, toPole);

        return;

    }

    towers(num - 1, fromPole, auxPole, toPole);

    printf("\n Move disk %d from pole %c to pole %c", num, fromPole, toPole);

    towers(num - 1, auxPole, toPole, fromPole);

}
