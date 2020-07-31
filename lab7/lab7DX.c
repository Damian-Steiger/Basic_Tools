    /***************************************
    * EECS2031B – Lab 7
    * Author: Steiger, Damian
    * Email: damian06@my.yorku.ca
    * eecs_num: damian06
    * York #: 216433476
    ****************************************/

    #include <stdio.h>
    #include <stdlib.h>

    #define BUFFER_SIZE 50
    #define MAX_LEN 30

    struct integers
    {
        int int1;
        int int2;
    };

    struct node
    {
        int data;
        struct node *next;
    };

    void init();
    void display();
    int len();
    int search(int);

    void insert(int d);
    void insertAfter(int k, int index);
    void delete (int d);

    struct node *head;

    int main()
    {
        int i, k, index;

        struct integers arr[MAX_LEN];

        char buffer[BUFFER_SIZE];
        int int1, int2;
        int count = 0;

        FILE *file;
        file = fopen("data.txt", "r");

        while (fgets(buffer, BUFFER_SIZE, file) != NULL)
        {
            sscanf(buffer, "%d %d", &int1, &int2);
            arr[count].int1 = int1;
            arr[count].int2 = int2;
            count++;
        }

        fclose(file);

        for (i = 0; i < count; i++)
        {
            printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
        }
        printf("\n");
        init();
        i = 0;
        for (; i < count; i++)
        {
            int value;
            value = arr[i].int1 + arr[i].int2;

            insert(value);
            printf("insert %d: (%d)", value, len());
            display();
        }

        int removeList[] = {0, 1, 2, 3, 5, 6, 7, 8, 9, -10000};
        i = 0;
        while ((k = removeList[i]) != -10000)
        {
            delete (k);
            printf("remove %d: (%d)", k, len());
            display();
            i++;
        }

        int addList[] = {7, 3, 5, 6, 8, 9, 2, 0, 1, -10000};
        i = 0;
        while ((k = addList[i]) != -10000)
        {

            insert(k);
            printf("insert %d: (%d)", k, len());
            display();
            i++;
        }

        // insert after
        printf("\n");
        k = -4;
        index = 2;
        printf("insert %d after index %d: (%d)\t", k, index, len());
        insertAfter(k, index);
        display();
        k = -6;
        index = 0;
        printf("insert %d after index %d: (%d)\t", k, index, len());
        insertAfter(k, index);
        display();
        k = -8;
        index = 6;
        printf("insert %d after index %d: (%d)\t", k, index, len());
        insertAfter(k, index);
        display();

        // search
        printf("\n");
        int searchList[] = {5, 50, 9, 19, 0, -4, -10000};
        i = 0;
        while ((k = searchList[i++]) != -10000)
        {

            printf("search %3d .... ", k);

            if (search(k))
                printf("found\n");
            else
                printf("not found\n");
        }
    }

    void init()
    {
        head = NULL;
    }

    void display()
    {
        struct node *curr = head;
        while (curr != NULL)
        {
            printf("%4d", curr->data);
            curr = curr->next;
        }
        printf("\n");
    }

    int len()
    {
        struct node *temp = head;
        int count = 0;
        while (temp)
        {
            temp = (*temp).next;
            count++;
        }
        return count;
    }

    int search(int k)
    {
        struct node *temp = head;

        while (temp)
        {
            if ((*temp).data == k)
                return 1;
            temp = (*temp).next;
        }
        return 0;
    }

    void insert(int d)
    {
        struct node *Nnode = (struct node *)malloc(sizeof(struct node));
        (*Nnode).data = d;
        (*Nnode).next = NULL;

        if (head == NULL)
        {
            head = Nnode;
            return;
        }
        else
        {
            struct node *temp = head;
            while ((*temp).next)
                temp = (*temp).next;
            (*temp).next = Nnode;
        }
    }

    void insertAfter(int d, int where)
    {
        struct node *Nnode = (struct node *)malloc(sizeof(struct node));
        (*Nnode).data = d;
        (*Nnode).next = NULL;

        struct node *temp = head;
        while (temp && where > 0)
        {
            where--;
            temp = (*temp).next;
        }
        (*Nnode).next = (*temp).next;
        (*temp).next = Nnode;
    }

    void delete (int d)
    {
        if (len() == 0)
        {
            fprintf(stderr, "empty");
            return;
        }
        if ((*head).data == d)
        {
            struct node *temporary = head;
            head = (*head).next;

            free(temporary);
        }
        else
        {
            struct node *curr = head;
            while (curr->next->data != d)
                curr = curr->next;

            struct node *temporary = curr->next;
            curr->next = curr->next->next;
            free(temporary);
        }
    }
