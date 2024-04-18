#pragma once
#include <cstdint>
#include <iostream>

class Image {
public:
	Image(uint16_t rows, uint16_t columns): m_rows(rows), m_columns(columns) {
		pixels = new uint8_t[m_rows * m_columns];
	}
	~Image() {
		std::cout << "freeing pixel memory.\n";
		delete[] pixels;
	}

	bool isValid()
	{
		// max 1024 x 1024 image is valid	
		return (m_columns <= 1024 && m_rows <= 1024);
	}

	const uint16_t m_rows;
	const uint16_t m_columns;
	uint8_t* pixels; 
};
