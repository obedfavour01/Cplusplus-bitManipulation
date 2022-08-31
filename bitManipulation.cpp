// bitManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>



std::bitset<4> rotLeft(std::bitset<4> x) {
	std::bitset<4> y{};
	y = x << 1;
		y.set(0);
	return y;
}
int main()
{
	//std::bitset<8> mybitset{ 0b0000'0101 }; //8 bits in size means room for 8 flags

	//std::cout << "bit 1 has value of  :" << mybitset.test(3) << "\n";
	//std::cout << "bit 5 has value of   :" << mybitset.set(5) << "\n";
	//std::cout << "bit 4 has value of : :" << mybitset.reset(4) << "\n";

	//	std::cout <<"bit  :" << mybitset.flip() << "\n";


	//	std::bitset<4> myset{ 0b0011 };

	//	std::cout << "myset: " << (myset) << "\n";
	//	std::cout << "shift left by 1: " << (myset << 1) << "\n";
	//	std::cout << "shift right by 1: " << (myset >> 1) << "\n";
	//	std::cout << "not: " << (~myset) << "\n";


		//std::cout << rotLeft(0b1001) << "\n";



	constexpr std::uint8_t mask0{ 0b0000'0001 }; // represents bit 0
	constexpr std::uint8_t mask1{ 0b0000'0010 }; // represents bit 1
	constexpr std::uint8_t mask2{ 0b0000'0100 }; // represents bit 2
	constexpr std::uint8_t mask3{ 0b0000'1000 }; // represents bit 3
	constexpr std::uint8_t mask4{ 0b0001'0000 }; // represents bit 4
	constexpr std::uint8_t mask5{ 0b0010'0000 }; // represents bit 5
	constexpr std::uint8_t mask6{ 0b0100'0000 }; // represents bit 6
	constexpr std::uint8_t mask7{ 0b1000'0000 }; // represents bit 7


	std::uint8_t flags{ 0b0000'0101 };

	std::cout << "Bit 0 is " << ((flags & mask0) ? "On" : "Off") << "\n";

	std::cout << "Bit 4 is " << ((flags & mask4) ? "On\n" : "Off\n");


	flags |= mask1; // flags = flags | mask1  ; turn on bit 1

	std :: cout << "Bit 1 is " << ((flags & mask1) ? "On" : "Off") << "\n";


}
 