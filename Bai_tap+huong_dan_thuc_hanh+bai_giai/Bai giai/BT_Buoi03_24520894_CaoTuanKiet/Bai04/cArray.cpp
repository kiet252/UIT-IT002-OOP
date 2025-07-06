// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cArray.h"

bool cArray::kiemTraSoNguyenTo(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

cArray::cArray() : array() {}

cArray::cArray(int n) {
	array.resize(n);
	srand(time(0));
	for (int i = 0; i < n; i++) {
		array[i] = (rand() % 30000 - 15000);
	}
}

void cArray::xuat() {
	cout << "Mang gom cac phan tu: " << endl;
	for (const int& x : array) {
		cout << x << " ";
	}
	cout << endl;
}

int cArray::demLanXuatHien(int soCanTim) {
	int lan = 0;
	for (const int& x : array) {
		if (x == soCanTim) lan++;
	}
	return lan;
}

bool cArray::kiemTraTangDan() {
	int size = array.size();
	for (int i = 0; i < size - 1; i++) {
		if (array[i] > array[i + 1]) return false;
	}
	return true;
}

int cArray::timSoLeNhoNhat() {
	int i = 0;
	int size = array.size();
	while (i < size && array[i] % 2 == 0) i++;
	if (i >= size) return -1;
	int currOddMin = array[i];
	for (int j = i; j < size; j++) {
		if (array[j] < currOddMin && array[j] % 2 != 0) currOddMin = array[j];
	}
	return currOddMin;
}

int cArray::timNguyenToLonNhat() {
	int i = 0;
	int size = array.size();
	while (i < size && !cArray::kiemTraSoNguyenTo(array[i])) i++;
	if (i >= size) return -1;
	int currMaxTo = array[i];
	for (int j = i; i < size; i++) {
		if ( array[j] > currMaxTo && cArray::kiemTraSoNguyenTo(array[j]) ) currMaxTo = array[j];
	}
	return currMaxTo;
}

void cArray::sapXepTangDanQuicksort(int left, int right) {
	if (left >= right) return;
	int i = left, j = right;
	int pivot = array[((left + right) / 2)];
	while (i <= j) {
		while (array[i] < pivot) i++;
		while (array[j] > pivot) j--;

		if (i > j) break;

		swap(array[i], array[j]);
		i++; j--;
	}
	sapXepTangDanQuicksort(left, j);
	sapXepTangDanQuicksort(i, right);
}

void cArray::sapXepGiamDanQuicksort(int left, int right) {
	if (left >= right) return;
	int i = left, j = right;
	int pivot = array[((left + right) / 2)];
	while (i <= j) {
		while (array[i] > pivot) i++;
		while (array[j] < pivot) j--;

		if (i > j) break;

		swap(array[i], array[j]);
		i++; j--;
	}
	sapXepGiamDanQuicksort(left, j);
	sapXepGiamDanQuicksort(i, right);
}