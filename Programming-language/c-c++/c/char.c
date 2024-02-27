#include <stdio.h>
#include <stdlib.h>

//int main(){
//    char dau_hoi = '?';
//    printf("dau hoi %c\n", dau_hoi);
//    char ky_tu_dac_biet = '\\';
//    printf("ky tu dac biet %c\n", ky_tu_dac_biet);
//    char mang_ky_tu[3] = {'d', 'a', 't'};
//    printf("mang ky tu %c%c%c\n", mang_ky_tu[0], mang_ky_tu[1], mang_ky_tu[2]);
//    char mang_mot_ky_tu[] = ""; \\mang co mot ky tu ket thuc chuoi \0
//    printf("mang mot ky tu %s\n", mang_mot_ky_tu);
//    char mang_ky_tu_dat_letran[] = "dat - letran";
//    printf("mang ky tu %s\n", mang_ky_tu_dat_letran);
//    // char mang_mot_ky_tu[] = "";
//    printf("%c %c %c %c \n", mang_ky_tu_dat_letran[0], mang_ky_tu_dat_letran[4] , mang_ky_tu_dat_letran[6], mang_ky_tu_dat_letran[8]);
//    return 0;
//}


int main(){
    char mang[] = "datxyz";
    mang[3] = 0;
    printf("%s \n", mang);

    return 0;
}