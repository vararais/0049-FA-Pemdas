#include <iostream>
using namespace std;


class MasukUniversitas {
protected: // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;


	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {

		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { return; }

	virtual void hitungTotalBiaya() { return; }

	virtual void tampilkanTotalBiaya() { return; }

	virtual void input() { return; }

	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void setUangSemesterPertama(int nilai) {
	}
	float getUangSemesterPertama(int nilai) {
		return uangSemesterPertama;
	}
	void setUangBangunan(int nilai) {
	}
	float getUangBangunan(int nilai) {
		return uangBangunan;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
public:
	SNBT() {}

	void input() override {
		cout << " Input Uang Pendaftaran : " << endl;
		cin >> uangPendaftaran;
		cout << " Input Uang Semester Pertama : " << endl;
		cin >> uangSemesterPertama;
		cout << " Input Uang Bangunan : " << endl;
		cin >> uangBangunan;
	}

	void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}

	// isi disini untuk melengkapi class SNBT
};

class SNBP : public MasukUniversitas {
public:
	SNBP() {}

	void input() override {
		cout << " Input Uang Pendaftaran : " << endl;
		cin >> uangPendaftaran;
		cout << " Input Uang Semester Pertama : " << endl;
		cin >> uangSemesterPertama;
		cout << " Input Uang Bangunan : " << endl;
		cin >> uangBangunan;
	}

	void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}

	// isi disini untuk melengkapi class SNBP
};


int main() {

	SNBT snbt;
	SNBP snbp;
	MasukUniversitas* masukuniversitas;

	int pilihan;

	cout << "Pilih Jenis Jalur Masuk : " << endl;
	cout << "1.SNBT" << endl;
	cout << "2.SNBP" << endl;
	cout << "Pilih Jalur Anda : " << endl;
	cin >> pilihan;

	snbt.input();
	snbp.input();

	snbt.hitungTotalBiaya();
	snbp.hitungTotalBiaya();

	


		// isi disini untuk fungsi main
};

