#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10],t[10][10],g[10][10],v[10][10],w,d,q,o,m,n,i,j,f,k;
 char as;
 printf("enter r&c of m1\n");
 scanf("%d%d",&m,&n);
 printf("\nenter the elements of m1\n");
 for(i=0;i<m;i=i+1)
  {
   for(j=0;j<n;j=j+1)
    {
     scanf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("enter r&c of m2\n");
 scanf("%d%d",&m,&n);
 printf("\nenter the elements of m2\n");
 for(i=0;i<m;i=i+1)
  {
   for(j=0;j<n;j=j+1)
    {
     scanf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  do
  {
   printf("enter the choice 1 add 2 sub 3 transpose 4 mult 5 inverse 6 div\n");
   scanf("%d\n",f);
   switch(f)
   {
   case 1:
    {
        printf("     ADDITION\n");
        for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
            c[i][j]=a[i][j]+b[i][j];
            }
         }

        for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
            printf("%d\t",c[i][j]);
            }
          printf("\n");
         }
        break;
    }
    case 2:
    {
        printf("     SUBTRACTION\n");
        for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
            c[i][j]=a[i][j]-b[i][j];
            }
         }

        for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
            printf("%d\t",c[i][j]);
            }
          printf("\n");
         }
        break;
    }
    case 3:
     {
         printf("   TRANSPOSE\n");
       for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
            t[j][i]=a[i][j];
            g[j][i]=b[i][j];
            }
         }

       for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
             printf("m1=\n");
             printf("%d\t",t[j][1]);
            }
          printf("\n");

         }
         for(i=0;i<m;i=i+1)
         {

           for(j=0;j<n;j=j+1)
            {
             printf("m2=\n");
             printf("%d\t",g[j][1]);
            }
          printf("\n");

         }
        break;
     }
    case 4:
    {


        printf("    MULTIPLICATION\n");
        for(i=0;i<m;i=i+1)
        {
            for(j=0;j<n;j=j+1)
            {
                c[i][j]=0;
                for(k=0;k<n;k=k+1)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i=i+1)
        {
            for(j=0;j<n;j=j+1)
            {
                printf("%d\t",c[i][j]);
            }
          printf("\n");
        }
   }
    case 5:
    {
     printf("\n    INVEFRSE\n");
     printf("enter the matrix to find inv\n");
     scanf("%d",&q);
    if(q=1)
    {

    for(i=0;i<m;i=i+1)
    {
      for(j=0;j<n;j=j+1)
        {
         a[m-1+i][j]=a[i][j];

         }

    }
    for(j=0;j<n;j=j+1)
       {
       for(i=0;i<m;i=i+1)
        {
          a[i][n-1+j]=a[i][j];
        }
       }
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             c[i][j]=a[i+1][j+1]*a[i+2][j+2]-a[i+2][j+1]*a[i+3][j+2];
         }

     }
     printf("\nCOFACTOR=%d\n");
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             printf("%d\t",c[i][j]);
         }
      printf("\n");
     }

         for(j=0;j<n;j=j+1)
         {
             w=a[j+1][j+1]*a[j+2][j+2]-a[j+2][j+1]*a[j+3][j+2];
             a[i][j]=w;
             d=d+(-1)^j*a[j][0];
         }
         printf("\nDETERMINENT=%d",d);
    for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             t[j][i]=c[i][j]*-1^(i*j);
         }
     }
     printf("\nINVERSE=\n");
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             t[i][j]=t[i][j]*1/d;
             printf("%d\t",t[i][j]);
         }
      printf("\n");
     }
    }
    else
    {
        for(i=0;i<m;i=i+1)
     {
      for(j=0;j<n;j=j+1)
        {
         b[m-1+i][j]=b[i][j];

         }

     }
    for(j=0;j<n;j=j+1)
       {
       for(i=0;i<m;i=i+1)
        {
          b[i][n-1+j]=b[i][j];
        }
       }
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             c[i][j]=b[i+1][j+1]*b[i+2][j+2]-b[i+2][j+1]*b[i+3][j+2];
         }

     }
     printf("\nCOFACTOR=%d\n");
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             printf("%d\t",c[i][j]);
         }
      printf("\n");
     }

         for(j=0;j<n;j=j+1)
         {
             b[0][j]=b[j+1][j+1]*b[j+2][j+2]-b[j+2][j+1]*b[j+3][j+2];

             d=d+(-1)^j*b[j][0];
         }
         printf("\nDETERMINENT=%d",d);
    for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             t[j][i]=c[i][j]*-1^(i*j);
         }
     }
     printf("\nINVERSE=\n");
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             t[i][j]=t[i][j]*1/d;
             printf("%d\t",t[i][j]);
         }
      printf("\n");
     }


    }
     break;
    }
    case 6:

    {
        printf("\n    DIVISION\n");

        for(i=0;i<m;i=i+1)
     {
      for(j=0;j<n;j=j+1)
        {
         b[m-1+i][j]=b[i][j];

         }

     }
    for(j=0;j<n;j=j+1)
       {
       for(i=0;i<m;i=i+1)
        {
          b[i][n-1+j]=b[i][j];
        }
       }
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             c[i][j]=b[i+1][j+1]*b[i+2][j+2]-b[i+2][j+1]*b[i+3][j+2];
         }

     }
     printf("\nCOFACTOR=%d\n");
     for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             printf("%d\t",c[i][j]);
         }
      printf("\n");
     }

         for(j=0;j<n;j=j+1)
         {
             b[i][j]=b[j+1][j+1]*b[j+2][j+2]-b[j+2][j+1]*b[j+3][j+2];

             d=d+(-1)^j*b[j][0];
         }
         printf("\nDETERMINENT=%d",d);
    for(i=0;i<m;i=i+1)
     {
         for(j=0;j<n;j=j+1)
         {
             t[j][i]=c[i][j]*-1^(i*j);
         }
     }
         for(i=0;i<m;i=i+1)
        {
            for(j=0;j<n;j=j+1)
            {
                v[i][j]=0;
                for(k=0;k<n;k=k+1)
                {
                    v[i][j]=v[i][j]+a[i][k]*t[k][j];
                }
            }
        }
     printf("\n  DIVISION=\n");
         for(i=0;i<m;i=i+1)
        {
            for(j=0;j<n;j=j+1)
            {
                printf("%d\t",v[i][j]);


            }
        printf("\n");
        }

      break;
   }
   printf("\ndo u want 2 continue\n");
   scanf("%c",&as);
  }
 }
 while(as=='y'||as=='Y');
 return 0;
}
















