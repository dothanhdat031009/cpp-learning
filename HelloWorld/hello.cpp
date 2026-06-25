#include <iostream>
#include <Windows.h>

using namespace std;
float giaTien{ 0 };
string donViTien{ " nghìn Việt Nam đồng" };
double soKg{ 0 };
int soCai{ 0 };
string donVi{ " chưa rõ đơn vị" };
string xacNhan{ "No" };

double thue()
{
	if (soCai == 0)
	{
		return giaTien * soKg * 0.1;
	}
	if (soKg == 0)
	{
		return giaTien * soCai * 0.1;
	}
};
double tong()
{
	if (soCai == 0)
	{
		return (giaTien * soKg) + thue();
	}
	if (soKg == 0)
	{
		return (giaTien * soCai) + thue();
	}
}

int main()
{
	SetConsoleOutputCP(65001);
	while (xacNhan == "No" || xacNhan == "no")
	{
		cout << "Giá tiền sản phẩm hiện tại của bạn là (đơn vị nghìn Việt Nam đồng) : ";
		cin >> giaTien;

		while (giaTien < 0 || giaTien == 0)
		{
			cout << "Giá tiền sản phẩm không hợp lệ. Vui lòng nhập lại. \n"
				 << "Giá tiền sản phẩm hiện tại của bạn là (đơn vị nghìn Việt Nam đồng) : ";
			cin >> giaTien;
		}
		cout << "Nhập đơn vị (số kg hoặc số cái) sản phẩm bạn mua là : ";
		cin >> donVi;
		while (donVi != "kg" && donVi != "Kg" && donVi != "KG" && donVi != "kG" && donVi != "cái" && donVi != "Cái" && donVi != "CÁI" && donVi != "cai")
		{
			cout << "Đơn vị không hợp lệ. Vui lòng nhập lại.\n"
				 << "Nhập đơn vị (số kg hoặc số cái) sản phẩm bạn mua là : ";
			cin >> donVi;
		}
		if (donVi == "kg" || donVi == "Kg" || donVi == "KG" || donVi == "kG" || donVi == "cái" || donVi == "Cái" || donVi == "CÁI" || donVi == "cai")
		{
			if (donVi == "kg" || donVi == "Kg" || donVi == "KG" || donVi == "kG")
			{
				cout << "Cân nặng sản phẩm bạn đang mua là : ";
				cin >> soKg;
				while (soKg < 0 || soKg == 0)
				{
					cout << "Cân nặng sản phẩm không hợp lệ. Vui lòng nhập lại.\n"
						 << "Cân nặng sản phẩm bạn đang mua là : ";
					cin >> soKg;
				}
				cout << "\n"
					 << "Giá tiền sản phẩm hiện tại của bạn là :  " << giaTien << donViTien << "\n"
					 << "Sản phẩm bạn mua có :                    " << soKg << " " << "kg" << "\n";
			}
			if (donVi == "cái" || donVi == "Cái" || donVi == "CÁI" || donVi == "cai")
			{
				cout << "Số lượng sản phẩm bạn đang chọn là : ";
				cin >> soCai;
				while (soCai < 0 || soCai == 0)
				{
					cout << "Số lượng sản phẩm không hợp lệ. Vui lòng nhập lại.\n"
						 << "Số lượng sản phẩm bạn đang chọn là : ";
					cin >> soCai;
				}
				cout << "\n"
					 << "Giá tiền sản phẩm hiện tại của bạn là :  " << giaTien << donViTien << "\n"
					 << "Sản phẩm bạn mua có :                    " << soCai << " " << " cái" << "\n";
			}
		}
		while (donVi != "kg" && donVi != "Kg" && donVi != "KG" && donVi != "kG" && donVi != "cái" && donVi != "Cái" && donVi != "CÁI" && donVi != "cai")
		{
			cout << "Đơn vị không hợp lệ. Vui lòng nhập lại.\n"
				 << "Nhập đơn vị (số kg hoặc số cái) sản phẩm bạn mua là : ";
			cin >> donVi;
		}
		cout << "Thuế GTGT ( 1% ) là :                    " << thue() << donViTien << "\n"
			 << "Tổng tiền bạn cần thanh toán là :        " << tong() << donViTien << "\n"
			 << "\n"
			 << "\n"
			 << "Bạn đã chắc chắn nhập đúng thông tin chưa ? (Yes /No ) : ";
		cin >> xacNhan;
		cout << "\n"
			 << "\n"	
			 << "\n";
	}
	if (xacNhan == "Yes" || xacNhan == "yes")
	{
		if (tong() == 1210)
		{
			cout << "                                   hmmm " << "---- Who is that ?";
		}
		else
		{
			cout << "------         Cảm ơn bạn đã sử dụng chương trình của chúng tôi. Chúc bạn một ngày tốt lành!         ------";
		}
		cout << "\n"
			 << "\n"
			 << "\n";
	}
	return 0;
}