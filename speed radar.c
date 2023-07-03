//hazirlayan: Ataberk Koroglu 05210000668

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define hiz 80
#define distance 7430

typedef struct
{
    int minute,hour,seconds;
} Time;

Time Search(char (*plate)[15],Time *time_in,Time *time_out,FILE *fp,FILE *fp2)
{

    char Plate[15];
    int i,hour,minute,seconds,j;
    for(i=0; fscanf(fp,"%s %d %d %d",plate[i],&time_in[i].hour,&time_in[i].minute,&time_in[i].seconds)==4; i++)
    {

    }

    for(i=0; fscanf(fp2,"%s %d %d %d",Plate,&hour,&minute,&seconds)==4; i++)
    {
        for(j=0; j<4; j++)
        {
            if (strcmp(plate[j],Plate)==0)
            {
                //printf("\n%s\n",plate[j]);
                time_out[j].hour=hour;
                time_out[j].minute=minute;
                time_out[j].seconds=seconds;
                break;
            }
        }

    }
    fclose(fp);
    fclose(fp2);
}
void Difference(Time *time_in,Time *time_out,float *seconds)
{

    int i,j=0;

    float zaman_siniri,Seconds;

    zaman_siniri=((float)distance/hiz);
    for(i=0; i<4; i++)
    {
        Seconds=((time_out[i].hour*3600-time_in[i].hour*3600)+(time_out[i].minute*60-time_in[i].minute*60)+(time_out[i].seconds-time_in[i].seconds));
        seconds[i]=Seconds;
    }

}

int main(void)
{
    FILE *fp,*fp2,*fp3;
    fp=fopen("izmir.txt","r");
    fp2=fopen("cesme.txt","r");
    fp3=fopen("HizCezasi.txt","w");
    if(fp==NULL || fp2==NULL || fp3==NULL)
    {
        printf("\n\e[1;4;31mDosya Acilamadi...\n\e[0m\a");
        return 1;
    }

    float zaman_siniri;
    zaman_siniri=((float)distance/hiz);

    Time time_in[4];
    Time time_out[4];
    float seconds[4];
    char Plate[4][15];
    int i;

    Search(Plate,time_in,time_out,fp,fp2);
    Difference(time_in,time_out,seconds);


    for(i=0; i<4; i++)
    {
        /*printf("\n%s\n",Plate[i]);
        printf("\n%f\t%f",seconds[i],zaman_siniri);*/
        if (((distance/seconds[i])*3.6)>hiz)
        {
            fprintf(fp3,"%s %.2f\n",Plate[i],(distance/seconds[i])*3.6);
        }
    }


    fclose(fp3);

    return 0;
}
