//SEFA ENES ERGİN- sefaenesergin@gmail.com
//Çarpma işlemini kullanmadan iki sayının çarpımı...
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a,b;
    printf("Lütfen 1.sayıyı giriniz...\n");
    scanf("%d",&a);
    printf("Lütfen 2.sayıyı giriniz...\n");
    scanf("%d",&b);
    int s=0;
    for(int i=1;i<=a;i++){// bu for döngüsü sayesinde b sayısı a kez döndürülüyor. Bu sayede bir çarpım elde ediliyor
        s+=b;
    }
    printf("%d * %d = %d\n", a,b,s);
    return 0;
}
