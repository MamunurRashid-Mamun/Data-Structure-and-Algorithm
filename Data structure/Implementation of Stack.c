#include<stdio.h>
#include<stdlib.h>
///for demo, the Queue will have at most 2 elements.
int main()
{
    int i,j,n,a[50],mx=2,top=-1,v=0;

    printf("Press 1 for insertion mood.\nPress 2 for deletion mood.\
           \nPress 3 for display mood.\nPress 4 for exit mood.\n\n");

    while(1)
    {
        scanf("%d",&n);
        if(n==1)
            {
                printf("You are now in insertion mood. Insert data.\n");
                if(top==mx)
                {
                    printf("Stack overflow.\n");
                }
                else
                {
                    //if stack is not overflowed then insert data
                    top=top+1;
                    scanf("%d",&v);
                    a[top]=v;
                    printf("value successfully inserted.\n\n");
                }
                printf("Choose your mood.\n");

            }



        else if(n==2)
            {
                //printf("You are now in deletion mood.\n");
                if(top==-1)
                    printf("underflow\n\n");
                else
                {
                    /*if there is any data in the stack then delete the
                    element at the top position.*/
                    top=top-1;
                    printf("Data successfully deleted.\n\n");
                }
                printf("Choose your mood.\n");
            }
        else if(n==3)
            {
                printf("You are now in display mood. data remain in are: ");
                for(i=0; i<=top; i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n\n");
                printf("Choose your mood.\n");
            }
        else
        {
            printf("Program exited.");
            exit (0);
        }
    }
    return 0;
}
