#include<stdio.h>
#define key 10
int hashtable[key],value,ke=123;


void creat()
{
    int i;
    int k;

    for(i=0; i<key; ++i)
    {
        hashtable[i]=-1;
    }
    int u;
    printf("enter no of elements\n");
    scanf("%d",&u);
    for(i=0; i<u; ++i)
    {

        printf("enter");
        scanf("%d",&value);
        k=value%2;
        if(hashtable[k]==-1)
        {
            hashtable[k]=value;
        }
        else
        {
            while(k!=key+1)
            {
                ++k;
                if(hashtable[k]==-1)
                {
                    hashtable[k]=value;
                    break;
                }
                else
                    continue;
            }
        }
    }
}
int main()
{
    int i;
    
   
        creat();
    for(i=0; i<key; ++i)
    {
        printf("%d",hashtable[i]);
    }
    return 0;
}