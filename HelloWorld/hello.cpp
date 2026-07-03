#include <iostream>

double gia_tien, so_luong, tong ;
int id = 0 ;
namespace khach_hang
{
	int khach_hang()
	{
		while (id <= 99999999 || id >= 1000000000)
		{
			std::cout << "Vui lòng nhập Số điện thoại của bạn : ";
			std::cin >> id ;
			if (id <= 99999999 || id >= 1000000000)
			{
				std::cout << "Bạn nhập sai Số điện thoại !"
					 	  << "\n"
						  << "Vui lòng nhập lại !"
						  << "\n";
			}
		}
		return 0 ;
	}
}
std::string tiep_tuc = "Yes";
int main()
{
	khach_hang::khach_hang() ;
	
	while (tiep_tuc == "Yes" || tiep_tuc == "yes" || tiep_tuc == "YES")
	{
		if (id == 868986725)
		{
			std::cout << "Bạn là chủ cửa hàng nên không cần thanh toán !";
			break;
		}
		std::cout << "Vui lòng nhập giá tiền mỗi loại sản phẩm : ";
		std::cin >> gia_tien ;
		if (gia_tien <= 0)
		{
			std::cout << "Bạn nhập sai giá tiền !"
					   << "\n"
					  << "Vui lòng nhập lại !";
		}
		else
		{
			std::cout << "Vui lòng nhập số lượng sản phẩm : ";
			std::cin >> so_luong ;
			tong = tong + ( so_luong * gia_tien ) * (1 + 0.008) ;
		}

		std::cout << "\n"
				  << "Bạn còn sản phẩm nữa không ? (Yes / No) : ";
		std::cin >> tiep_tuc ;

		while (tiep_tuc !=  "Yes" && tiep_tuc != "yes" && tiep_tuc != "YES" && tiep_tuc != "No" && tiep_tuc != "no" && tiep_tuc != "NO")
		{
			std::cout << "\n" 
					  << "Vui lòng nhập đúng !" ;
			if (tiep_tuc !=  "Yes" && tiep_tuc != "yes" && tiep_tuc != "YES" && tiep_tuc != "No" && tiep_tuc != "no" && tiep_tuc != "NO")
			{
				std::cout << "\n"
							<< "Bạn còn sản phẩm nữa không ? (Yes / No) : ";
				std::cin >> tiep_tuc ;
			}
		}
	}
	if (tiep_tuc == "No" || tiep_tuc == "no" || tiep_tuc == "NO")
	{
		std::cout << "Số tiền bạn cần thanh toán là : "
				  << tong ;
		std::cout << "\n"
			      << "\n"
				  << "                   Vui lòng hãy thanh toán ở máy thanh toán !                   " ;
	}
	std::cout << "\n"
			  << "\n"
			  << "\n"
			  << "             --- Cảm ơn bạn đã tin dùng mua hàng bên chúng tôi ---              "
			  << "\n"
			  << "\n"
			  << "\n";
	return 0 ;
}
