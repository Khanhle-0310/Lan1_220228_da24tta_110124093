#include <stdio.h>
#define ngay 31
void xuatChiTieu(float a[], int n);
void nhapChiTieu(float a[], int n);
float tongChiTieu(float a[], int n);
float trungBinhChiTieu(float a[], int n);
void timNgayChiTieuCaoNhat(float a[], int n);
int main() 
{
    int n;
    float a[ngay];
	do
	{
		printf("So ngay chi tieu (28 - 31)");
		scanf("%d", &n);
	}while(n<28||n>31);
    nhapChiTieu(a, n);
    printf("\n");
    xuatChiTieu(a, n);
    printf("\n");
	float tongChiTieu = tinhTongChiTieu(a, n);
    printf("\nTong chi tieu trong thang: %.2f dong\n", tongChiTieu);

    float trungBinhChiTieu = tinhTrungBinhChiTieu(a, n);
    printf("\nTrung binh chi tieu moi ngay: %.2f dong\n", trungBinhChiTieu);
    timNgayChiTieuCaoNhat(a, n);
    return 0;
}
void timNgayChiTieuCaoNhat(float a[], int n) {
    float caoNhat = a[0];
    int ngayCaoNhat = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > caoNhat) {
            caoNhat = a[i];
            ngayCaoNhat = i + 1;
        }
    }

    printf("\nNgay chi tieu cao nhat: Ngay %d, %.2f dong\n", ngayCaoNhat, caoNhat);
}

float trungBinhChiTieu(float a[], int n) 
{
    float tong = tongChiTieu(a, n);
    return tong / n;
}

float tongChiTieu(float a[], int n) 
{
    float tong = 0;
    for (int i = 0; i < n; i++) 
	{
        tong += a[i];
    }
    return tong;
}

void xuatChiTieu(float a[], int n) 
{
    printf("\nChi tieu tung ngay:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("Ngay %d: %.2f dong\n", i + 1, a[i]);
    }
}

void nhapChiTieu(float a[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        do 
		{
            printf("Nhap so tien chi tieu cho ngay %d (>= 0): ", i + 1);
            scanf("%f", &a[i]);
            if (a[i] < 0) 
			{
                printf("So tien chi tieu khong hop le, vui long nhap lai.\n");
            }
        } while (a[i] < 0);
    }
}

