#include <iostream>
using namespace std;

void Nhap(int &n, int &m){
	cout << "Nhap so doi bong: ";
	cin >> n;
	cout << "Nhap so tran dau: ";
	cin >> m;
}

void NhapMang(int n, int m, int a[][100]){
	int i, j;
	for (i = 0; i < n; i++){
		cout << "Nhap diem cua doi bong thu "<< i + 1 << ": "<< endl;
		for (j = 0; j < m; j++){
			cout << "Tran thu "<< j + 1 <<" : ";
			cin >> a[i][j];
		}
	}
}

int KiemTraChuoiThua(int n, int m, int a[][100]){
	int i;
	for (i = 0; i < m; i++){
		if (a[n][i] != 0){
			return 0;
		}
	}
	return 1;
}

int TinhDiem(int n, int m, int a[][100]){
	int i, diem = 0;
	for (i = 0; i < m; i++){
		diem += a[n][i];
	}
	return diem;
}

void DiemCaoNhat(int n, int m, int a[][100]){
	int i, vitri = 1, max = TinhDiem(0, m, a);
	for (i = 1; i < n; i++){
		if (TinhDiem(i, m, a) > max){
			max = TinhDiem(i, m, a);
		}
	}
	cout << "Doi co so diem cao nhat la: ";
	for (i = 0; i < n; i++){
		if (TinhDiem(i, m, a) == max){
			cout << i + 1 << " ";
		}
	}
}

void SoTranThua(int n, int m, int a[][100]){
	int i, j, dem = 0;
	for (i = 0; i < n; i++){
		if (KiemTraChuoiThua(i, m, a) == 1){
			dem++;
		}
	}
	if (dem != 0){
		cout << "Cac doi thua "<< m <<" tran la: ";
		for (i = 0; i < n; i++){
			if (KiemTraChuoiThua(i, m, a) == 1){
				cout << i + 1 << " ";
			}
		}	
	} else {
		cout << "Khong co doi nao thua "<< m << " tran !" << endl;
	}
}

int main(){
	int n,m;
	Nhap(n, m);
	int a[100][100];
	NhapMang(n, m, a);
	SoTranThua(n, m, a);
	DiemCaoNhat(n, m, a);
}

