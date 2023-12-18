#include"stdio.h"
void findx(int a[],int n,int b[],int* m,int x){
    *m=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            b[*m]=i;
            (*m)++;
        }
    }
}
void outb(int b[],int *m){
    for(int i=0;i<*m;i++){
        printf("\n%d",b[i]);
    }
}
int main(){
    int a[100],b[100],n,m;
    int x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    findx(a,n,b,&m,x);
    outb(b,&m);

}