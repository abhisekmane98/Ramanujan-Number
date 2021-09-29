#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    for(a=1;a<=20;a++)
    {
        for(b=a;b<=20;b++)
        {
            for(c=a;c<=20;c++)
            {
                for(d=c;d<=20;d++)
                {
                    if(a==c || a==d || b==c || b==d)
                        break;
                    if(pow(a,3)+pow(b,3)==pow(c,3)+pow(d,3))
                        printf("%f,%f and %f,%f and Number is %f\n",a,b,c,d,pow(a,3)+pow(b,3));
                }
            }
        }
    }
}
