#include "stdio.h"
int a[100],b[100],c[100];
int n,m,p;
void nhapMang(int x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int timKiem(int x[100], int n, int tk){
	int kq = 0;
	for(int i=0; i<n; i++){
		if(x[i]==tk){
			kq = 1;
			return 1;
		}
	}
	return kq;
}

void thucHienTimKiem(int x[100], int n){
	int tk;
	printf("\n");
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d", &tk);
	int kq = timKiem(x, n, tk);
	if(kq==1){
		printf("Tim thay so can tim!");
	}else{
		printf("Khong tim thay!");
	}	
}
int kiemtrachan(int x[], int n){
	for( int i=0;i<n;i++)
		if(x[i]%2!=0)
		{
			return -1;
			break;
		}
	return 1;
}
int kiemtrale(int x[], int n){
	for( int i=0;i<n;i++)
		if(x[i]%2==0)
		{
			return -1;
			break;
		}
	return 1;
}
void gopmang(int a[],int n,int b[],int m,int c[],int &p){
 p=n+m; 
 for(int i=0;i<p;i++)
  {
   if(i<n) 
     c[i]=a[i];
   else c[i]=b[i-n];  
  }
}
void TachMang(int a[], int b[], int c[], int &n, int &m, int &p)
{
	printf("\nNhap vao so phan tu muon tach vao mang B[] =  ");
	scanf("%d",&m);
	printf("Nhap vao so phan tu muon tach vao mang C[] =  ");
	scanf("%d",&p);
	int j=0;
	for (int i=0; i<n; i++)
	{
		if ( i < m)
		{
			b[i]=a[i];
		}
		else 
		{
			c[j]=a[i];
			j++;
		}
	}
	return;
}

int timMin(int x[], int n){
	int min = x[0];
	for(int i=1; i<n; i++){
		if(min>x[i])
			min = x[i];
	}
	return min;
}

int timMax(int x[], int n){
	int max = x[0];
	for(int i=1; i<n; i++){
		if(max<x[i])
			max = x[i];
	}
	return max;
}
void swap(int &a, int &b){
	int tam=a;
	a = b;
	b = tam;
}

void sapXepTang(int x[], int n){
	for(int i=0; i<n-1; i++){
		int vitrinhonhat = i;
		for(int j=i+1; j<n; j++){
			if(x[j]<x[vitrinhonhat])
				vitrinhonhat = j;
		}
		swap(x[i],x[vitrinhonhat] );
	}
}
void sapXepGiam(int x[100], int n){
	for(int i=0; i<n-1; i++){
		int vitrilonnhat = i;
		for(int j=i+1; j<n; j++){
			if(x[j]>x[vitrilonnhat])
				vitrilonnhat = j;
		}
		swap(x[i],x[vitrilonnhat] );
	}
}

void printMang(int x[100], int n){
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
void xoaMangTaiViTri(int x[100], int &n, int vi_tri){
	for(int i=vi_tri; i<n-1; i++){
		x[i] = x[i+1];
	}
	n--; 
}

void xoaMangTheoGiaTri(int x[100], int &n){
	int gt;
	printf("\n");
	printf("\nNhap vao gia tri can xoa: ");
	scanf("%d", &gt);
	for(int i=0; i<n; i++){
		if(x[i]==gt)
			xoaMangTaiViTri(x, n, i);
	}
}
void themVaoCuoiMang(int x[100], int &n){
	int m;
	printf("\nnhap so muon them vao cuoi mang ");
	scanf("%d",&m);
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao mang!");
	}
	
	x[n] = m;
	n++;
}	

void themVaoDauMang(int x[100], int &n){
	int m;
	printf("\nnhap so muon them vao dau mang ");
	scanf("%d",&m);
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao mang!");
	}
	
	n++;
	for(int i=n-1; i>0; i--){
		x[i]=x[i-1];
	}
	x[0]=m;
	

}

void themVaoViTriK(int x[100], int &n){
	int k,m;
	printf("\nnhap vi tri a[k] muon them vao : ");
	scanf("%d",&k);
	printf("nhap so muon them vao vi tri a[k] : ");
	scanf("%d",&m);
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao mang!");
	}
	
	n++;
	for(int i=n-1; i>k; i--){
		x[i]=x[i-1];
	}
	x[k]=m;

}

void suaphantu(int x[100],int n){
	int vitri,sua;
	printf("\nNhap vao vitri can sua: ");
	scanf("%d", &vitri);
	printf("Nhap vao so thay vao : ");
	scanf("%d", &sua);
	x[vitri]=sua;
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	thucHienTimKiem(a, n);
        if( kiemtrachan(a,n)==-1){
    	printf("\n");
    	printf("\nMang khong toan chan\n");
	}else{
		printf("\n");
		printf("\nMang toan la so chan\n");
	}
	if( kiemtrale(a,n)==-1){
    	printf("\n");
    	printf("\n Mang khong toan le\n");
	}else{
		printf("\n");
		printf("\nMang toan la so le\n");
	}
	printf("\n");
	printf("Tach Mang");
	TachMang(a,b,c,n,m,p);
        xuatMang(b,m);
        printf("\n");
        xuatMang(c,p);
        printf("\n");
        printf("\nGop Mang\n");
        gopmang(a,n,b,m,c,p);
        xuatMang(c,p);
	printf("\n");
	printf("\n Max = %d", timMax(a, n));
	printf("\n Min = %d", timMin(a, n));
	xoaMangTheoGiaTri(a, n);
	xuatMang(a, n);
	printf("\n");
	printf("\n Mang tang dan: ");
	sapXepTang(a, n);
	printMang(a, n);
	printf("\n Mang giam dan: ");
	sapXepGiam(a, n);
	printMang(a, n);
	printf("\n");
	themVaoCuoiMang(a, n);
	xuatMang(a, n);
	printf("\n");
	themVaoDauMang(a, n);
	xuatMang(a, n);
	printf("\n");
	themVaoViTriK(a, n);
	xuatMang(a, n);
        printf("\n");
        suaphantu(a,n);
	xuatMang(a, n);	
	printf("\n");
}
	
