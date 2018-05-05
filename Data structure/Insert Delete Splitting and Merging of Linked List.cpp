#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node a,b,*newnode1,*newnode2,*newnode,*head,*ptr,*ptr1,*ptr2,*ptr3,*head1,*head2;
    int choice,sval,inval,svalue,c,sdel;
    newnode1=(struct node*)malloc(sizeof(struct node));
    printf("Enter value to be inserted: ");
    scanf("%d",&newnode1->value);
    printf("\n");
    head=newnode1;
    newnode1->next=NULL;
    printf("press 1 for insert in first\npress 2 for insert in last\npress 3 for insert between first and last\
           \npress 4 for split\npress 5 for merge\npress 6 for delete\npress 7 for display\n\n");
    while(1)
    {

        printf("Enter choice: ");
        scanf("%d",&choice);
        //insertion at the first position of linked list
        if(choice==1)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter value to be inserted: ");
            scanf("%d",&newnode->value);
            ptr=newnode;
            ptr->next=head;
            head=ptr;
            ptr->value=newnode->value;
            ptr1=head;
            printf("Head %d\n",head);
            while(ptr1!=NULL)
            {
                printf("%d   %2d   %d\n",ptr1,ptr1->value,ptr1->next);
                ptr1=ptr1->next;
            }
            printf("\n");
        }

        //insertion at the last position of linked list
        else if(choice==2)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter value to be inserted: ");
            scanf("%d",&newnode->value);
            ptr=newnode;
            ptr1=head;
            while(ptr1->next!=NULL)
            {
                ptr1=ptr1->next;
            }
            ptr1->next=ptr;
            ptr->value=newnode->value;
            ptr->next=NULL;
            ptr1=head;
            printf("Head %d\n",head);
            while(ptr1!=NULL)
            {
                printf("%d   %2d   %d\n",ptr1,ptr1->value,ptr1->next);
                ptr1=ptr1->next;
            }
            printf("\n");
        }

        //insertion between first and last position of linked list
        else if(choice==3)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter value to be inserted: ");
            scanf("%d",&newnode->value);
            printf("After which value you want to insert: ");
            scanf("%d",&sval);
            ptr=newnode;
            ptr1=head;
            while(ptr1->next!=NULL&&ptr1->value!=sval)
            {
                ptr1=ptr1->next;
            }
            if(ptr1->next==NULL)
            {
                printf("Search value not found.\n\n");
            }
            else
            {
                ptr->next=ptr1->next;
                ptr->value=newnode->value;
                ptr1->next=ptr;
                ptr1=head;
                printf("Head %d\n",head);
                while(ptr1!=NULL)
                {
                    printf("%d     %2d   %d\n",ptr1,ptr1->value,ptr1->next);
                    ptr1=ptr1->next;
                }
                printf("\n");
            }
        }

        //splitting the linked list
        else if(choice==4)
        {
            ptr1=head;
            if(ptr1->next==NULL)
                printf("Split is not possible.\n");
            else
            {
                printf("\nAfter which value do you want to split: ");
                scanf("%d",&svalue);
                while(ptr1->value!=svalue)
                {
                    ptr1=ptr1->next;
                }
                head1=head;
                head2=ptr1->next;
                ptr1->next=NULL;

                printf("\nFirst part of list:\n");
                ptr1=head1;
                printf("Head1= %d\n",head1);
                while(ptr1!=NULL)
                {
                    printf("%d  %d  %d\n",ptr1,ptr1->value,ptr1->next);
                    ptr1=ptr1->next;
                }

                printf("\nSecond part of list:\n");

                ptr2=head2;
                printf("Head2= %d\n",head2);
                while(ptr2!=NULL)
                {
                    printf("%d  %d  %d\n",ptr2,ptr2->value,ptr2->next);
                    ptr2=ptr2->next;
                }
            }
            printf("\n");
        }

        //Merging the split linked list
        else if(choice==5)
        {
            ptr3=head1;
            while(ptr3->next!=NULL)
            {
                ptr3=ptr3->next;
            }
            ptr3->next=head2;

            printf("\nAfter merge list is: ");
            head=head1;
            ptr1=head1;
            printf("Head= %d\n",head);
            while(ptr1!=NULL)
            {
                printf("%d ",ptr1->value);
                ptr1=ptr1->next;
            }
            printf("\n");
        }

        //deletion from the merged linked list
        else if(choice==6)
        {
            printf("press 1 for delete from first\npress 2 for delete from last\npress 3 for delete from middle\n\n");
            scanf("%d",&c);
            if(c==1)
            {
                head=head->next;
            }
            else if(c==2)
            {
                ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr1=ptr;
                    ptr=ptr->next;
                }
                ptr1->next=NULL;
            }
            else if(c==3)
            {
               ptr=head;
               printf("Which value do you want to delete: ");
               scanf("%d",&sdel);
                while(ptr->value!=sdel)
                {
                    ptr1=ptr;
                    ptr=ptr->next;
                }
                ptr1->next=ptr->next;
            }
            printf("\n");
        }

        else if(choice==7)
        {
            printf("Head %d\n",head);
            printf("Current nodes of linked list:\n");
            ptr1=head;
            while(ptr1!=NULL)
            {
                printf("%d     %2d   %d\n",ptr1,ptr1->value,ptr1->next);
                ptr1=ptr1->next;
            }
            printf("\n");
        }
    }
    return 0;
}
