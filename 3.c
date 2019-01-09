#include<stdio.h>
#include<stdlib.h>

void main(){
int mat[20][20],n,i,j,k,d[20],source;
printf("Enter the number of nodes\n");
scanf("%d",&n);
 printf("Enter the cost matrix\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&mat[i][j]);
if(i!=j && mat[i][j]==0)
mat[i][j]=999;
}}

for(i=0;i<n;i++)
d[i]=999;

int p[20]={-1};
printf("source");
scanf("%d",&source);

d[source]=0;

for(k=0;k<n;k++){
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(d[j]>d[i]+mat[i][j]){
d[j]=d[i]+mat[i][j];
p[j]=i;
}
}
}
}

for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(d[j]>d[i]+mat[i][j]){
printf("negative cycle exists");
exit(0);
}
}}

for(i=0;i<n;i++){
printf("distance from %d to %d is %d\n",source,i,d[i]);
}
}
