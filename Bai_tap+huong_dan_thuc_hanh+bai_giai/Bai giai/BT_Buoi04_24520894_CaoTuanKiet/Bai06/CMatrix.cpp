// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "CMatrix.h"

CMatrix::CMatrix(int m, int n) {
	maTran.resize(m, vector<double>(n));
}

CMatrix::CMatrix(vector<vector<double>> maTranMoi) {
	maTran = maTranMoi;
}

CMatrix::CMatrix(CVector vtKhac) {
	size_t vectorSize = vtKhac.getDim();
	maTran.resize(vectorSize, vector<double>(1));
	for (size_t i = 0; i < vectorSize; i++) {
		maTran[i][0] = vtKhac.getToaDo(i);
	}
}

double CMatrix::dinhThuc() {
	//Ket hop quy hoach dong (dynamic programming) va phan tich LU (LU decomposition) de tinh dinh thuc
	if (isEmpty() || (maTran.size() != maTran[0].size())) return 0;
	int n = maTran.size();
	vector<vector<double>> LU = maTran;

	double det = 1;
	for (int i = 0; i < n; ++i) {
		int max_row = i;
		for (int j = i + 1; j < n; ++j) {
			if (abs(LU[j][i]) > abs(LU[max_row][i])) max_row = j;
		}

		if (max_row != i) {
			swap(LU[i], LU[max_row]);
			det *= -1;
		}

		if (LU[i][i] == 0) return 0;

		for (int j = i + 1; j < n; ++j) {
			LU[j][i] /= LU[i][i];
			for (int k = i + 1; k < n; ++k) {
				LU[j][k] -= LU[j][i] * LU[i][k];
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		det *= LU[i][i];
	}
	return det;
}

bool CMatrix::isEmpty() {
	return maTran.empty() || maTran[0].empty();
}

CMatrix CMatrix::hoanVi() {
	if (isEmpty()) return 0;
	size_t m = maTran.size();
	size_t n = maTran[0].size();
	vector<vector<double>> maTranHoanVi(n, vector<double>(m));
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			maTranHoanVi[i][j] = maTran[j][i];
		}
	}
	return CMatrix(maTranHoanVi);
}

CMatrix CMatrix::nghichDao() {
	if (maTran.size() != maTran[0].size()) return 0;

	double det = dinhThuc();
	if (det == 0 || fabs(det) < 1e-12) return 0;

	size_t n = maTran.size();
	vector<vector<double>> nghichdao(n, vector<double>(n));

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			vector<vector<double>> maTranCon(n - 1, vector<double>(n - 1));
			for (size_t x = 0, xi = 0; x < n; ++x) {
				if (x == i) continue;
				for (size_t y = 0, yj = 0; y < n; ++y) {
					if (y == j) continue;
					maTranCon[xi][yj++] = maTran[x][y];
				}
				++xi;
			}

			double dongThuaSo = pow(-1, i + j) * CMatrix(maTranCon).dinhThuc();
			nghichdao[j][i] = dongThuaSo / det;
		}
	}

	return CMatrix(nghichdao);
}

istream& operator>>(istream& is, CMatrix& mt) {
	int m, n;
	cout << "Nhap so hang cua ma tran: ";
	do {
		is >> m;
		if (m < 0) cout << "So hang khong hop le! Xin hay nhap lai." << endl;
	} while (m < 0);

	cout << "Nhap so cot cua ma tran: ";
	do {
		is >> n;
		if (n < 0) cout << "So cot khong hop le! Xin hay nhap lai." << endl;
	} while (n < 0);

	mt.maTran.resize(m, vector<double>(n));

	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			cout << "Nhap gia tri cua o vi tri (" << i + 1 << ", " << j + 1 << ") : ";
			is >> mt.maTran[i][j];
		}
	}

	return is;
}

ostream& operator<<(ostream& os, CMatrix mt) {
	for (vector<double> cot : mt.maTran) {
		for (double so : cot) {
			os << so << " ";
		}
		os << endl;
	}

	return os;
}

CMatrix CMatrix::operator+(CMatrix mtKhac) {
	if (maTran[0].size() != mtKhac.maTran[0].size() || maTran.size() != mtKhac.maTran.size()) return 0;
	size_t m = maTran.size();
	size_t n = maTran[0].size();
	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			mtKhac.maTran[i][j] += maTran[i][j];
		}
	}
	return CMatrix(mtKhac.maTran);
}

CMatrix CMatrix::operator-(CMatrix mtKhac) {
	if (maTran[0].size() != mtKhac.maTran[0].size() || maTran.size() != mtKhac.maTran.size()) return 0;
	size_t m = maTran.size();
	size_t n = maTran[0].size();
	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			mtKhac.maTran[i][j] = maTran[i][j] - mtKhac.maTran[i][j];
		}
	}
	return CMatrix(mtKhac.maTran);
}

CMatrix CMatrix::operator*(CMatrix mtKhac) {
	size_t myMaTranM = maTran.size();
	size_t otherMaTranM = mtKhac.maTran.size();
	size_t myMaTranN = maTran[0].size();
	size_t otherMaTranN = mtKhac.maTran[0].size();
	if (myMaTranN != otherMaTranM) return 0;

	CMatrix newMaTran(myMaTranM, otherMaTranN);

	for (size_t i = 0; i < myMaTranM; i++) {
		for (size_t j = 0; j < otherMaTranN; j++) {
			double tong = 0;
			for (size_t k = 0; k < myMaTranN; k++) {
				tong += (maTran[i][k] * mtKhac.maTran[k][j]);
			}
			newMaTran.maTran[i][j] = tong;
		}
	}

	return newMaTran;
}

CMatrix CMatrix::operator*(double soNhan) {
	size_t m = maTran.size();
	size_t n = maTran[0].size();
	vector<vector<double>> maTranMoi = maTran;
	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			maTranMoi[i][j] *= soNhan;
		}
	}
	return CMatrix(maTranMoi);
}

CMatrix operator*(double soNhan, CMatrix mt) {
	size_t m = mt.maTran.size();
	size_t n = mt.maTran[0].size();
	vector<vector<double>> maTranMoi = mt.maTran;
	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			maTranMoi[i][j] *= soNhan;
		}
	}
	return CMatrix(maTranMoi);
}

CMatrix operator*(CVector vector, CMatrix maTran) {
	return CMatrix(vector) * maTran;
}

CMatrix CMatrix::operator/(CMatrix mtKhac) {
	CMatrix maTranNghichDao = mtKhac.nghichDao();
	if (maTranNghichDao.isEmpty()) return 0;
	return (*this) * maTranNghichDao;
}