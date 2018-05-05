#include<stdio.h>
///for demo, the Queue will have at most 3 elements.
int main()
{
    int input[10],i,j,n,elements,mxindex=2,frnt=-1,rear=-1,value;
    for(j=0; j<=mxindex; j++)
    {
        input[j]=0;
    }
    printf("Press 1 for insertion mood.\nPress 2 for deletion mood.\
           \nPress 3 for display mood.\nPress 4 for exit mood.\n\n");
    while(1)
    {
        scanf("%d",&n);

        if(n==1)
        {

            if((frnt==0&&rear==mxindex)||(frnt==rear+1))
                printf("Overflowed.\n");
            else
            {
                printf("You are now in insertion mood. Insert data.\n");
                if((frnt==-1)&&(rear==-1))
                {
                    frnt=0;
                    rear=0;
                }
                else if(rear==mxindex&&frnt!=0)
                {
                    rear=0;
                }
                else
                {
                    rear=rear+1;
                }
                scanf("%d",&value);
                input[rear]=value;
                printf("value successfully inserted.\n\n");
            }
            printf("Choose your mood.\n");
        }

        else if(n==2)
        {
            if(frnt==-1)
                printf("Underflow.\n\n");

            else
            {
                if(frnt==rear)
                {
                    frnt=-1;
                    rear=-1;
                }
                else if(frnt==mxindex)
                {
                    frnt=0;
                }
                else
                {
                    input[frnt]=0;
                    frnt=frnt+1;
                }
                printf("Data successfully deleted.\n\n");
            }
            printf("Choose your mood.\n");
        }

        else if(n==3)
        {
            if(frnt==-1)
                printf("Queue is empty.\n");
            else
            {
                printf("Data in queue are: ");
                for(i=0; i<=mxindex; i++)
                {
                    printf("%d ",input[i]);
                }
            }
            printf("\n");
        }

        else if(n==4)
        {
            printf("Program finished.\n");
            exit(0);
        }
    }

    return 0;
}
