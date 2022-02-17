include <stdio.h>
#define SIZE 20

int main()
{
    int l=0,s=0,i;
    int a[SIZE]={7,3,9,10,4};
    //int n=sizeof(a)/sizeof(a[0])
    for(i=0;i<SIZE;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
        }
        else if(a[i]>s){
            s<l;
            s=a[i];
            
        }
    }
    printf("the 2nd largest num is %d",s);

    return 0;
}


