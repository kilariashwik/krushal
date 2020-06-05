#include<stdio.h>
Int main()
{
FILE*fp=fopen(“test1.txt”);
FILE*fq=fopen(“test2.txt");
typedef stract edge {
int u;int v;
int weight;
}EDGE;
EDGE*
MST_krnskal(EDGE*e,int u,int v)
EDGE*res=malloc(sizeof(EDGE)*v-1);
{
int temp[v+2];
int J=0,m=0;
for(int i=0;i<n;i++)
int flag1=0;flag2=0;
for(int k=0;k<j;k++)
{
if(e[i*].n==temp[k])
flag1++;
If(e[i*].v==temp[k])
flag2++;
}
if(flag1==1&&flag2.=1)
continue;
If(flag1==1)
{
res[m++]=e[i];
temp[j++]=e[i].v;
}
else if(flag2==1)
{
res[m++]=e[i];
temp[j++]=e[i].u;
}
else
{
res[m++]=e[i];
Temp[j++]=e[i].u;
Temp[j++]=e[i].v;
}
return res;
}
EDGE*x=MST_krnskal(e1);
EDGE*y=MST_krnskal(e2);
}
