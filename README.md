# Orders Management System

A console-based inventory management system written in C++ for managing products in a store. This application provides a simple and efficient way to handle product inventory, pricing, and organization.

## Features

- ✅ **Add Products**: Add new products with name, price, and quantity
- ✅ **Update Prices**: Modify product prices by name
- ✅ **List Products**: Display all products in the inventory
- ✅ **Sort by Price**: Sort products in ascending order by price
- ✅ **Print Inventory**: Display detailed product information
- ✅ **User-Friendly Interface**: Interactive menu-driven console application

## Prerequisites

Before building and running this application, ensure you have the following installed:

- **C++ Compiler**: GCC, Clang, or MSVC with C++17 support
- **Meson Build System**: Version 0.53.0 or later
- **Ninja Build Tool**: For fast compilation (usually installed with Meson)

### Installation on Ubuntu/Debian:
```bash
sudo apt update
sudo apt install build-essential meson ninja-build
```

### Installation on macOS:
```bash
brew install meson ninja
```

### Installation on Windows:
```bash
# Using Chocolatey
choco install ninja meson

# Or using pip
pip install meson ninja
```

## Project Structure

```
OrdersManagementSystem/
├── meson.build           # Meson build configuration
├── main.cpp             # Main application entry point
├── lib/                 # Header files
│   ├── Product.h        # Product class definition
│   └── Store.h          # Store class definition
└── src/                 # Source files
    ├── Product.cpp      # Product class implementation
    └── Store.cpp        # Store class implementation
```

## Build Instructions

### 1. Clone the repository
```bash
git clone <repository-url>
cd OrdersManagementSystem
```

### 2. Setup build directory
```bash
meson setup build
```

### 3. Build the project
```bash
meson compile -C build
```

### 4. Run the application
```bash
./build/orders_management_system
```

### Additional Build Commands

- **Clean rebuild**: Remove `build` and start fresh
  ```bash
  rm -rf build
  meson setup build
  meson compile -C build
  ```

- **Install system-wide**: Install the executable to system directories
  ```bash
  meson install -C build
  ```

## Usage

After running the application, you'll see an interactive menu with the following options:

1. **Add Product**: Enter product name, price, and quantity
2. **Update Product Price**: Update the price of an existing product by name
3. **List Products**: Display all products currently in inventory
4. **Sort Products by Price**: Sort products in ascending order by price
5. **Print All Products**: Display detailed information about all products
6. **Exit**: Quit the application

### Example Usage:
```
===== Orders Management System =====
1. Add Product
2. Update Product Price
3. List Products
4. Sort Products by Price
5. Print All Products
0. Exit
Choose an option: 1

Enter product name: Laptop
Enter price: 999.99
Enter quantity: 10
✔ Added product: Laptop
```

## Architecture

### Classes

#### Product Class
- **Purpose**: Represents individual products in the inventory
- **Attributes**:
  - `name`: Product name (string)
  - `price`: Product price (double)
  - `quantity`: Available quantity (int)
- **Methods**:
  - Constructor for initialization
  - Getters for accessing attributes
  - `setPrice()`: Update product price
  - `printInfo()`: Display product details

#### Store Class
- **Purpose**: Manages the collection of products
- **Attributes**:
  - `products`: Vector of shared pointers to Product objects
- **Methods**:
  - `addProduct()`: Add new product to inventory
  - `updatePrice()`: Update price of existing product
  - `listProducts()`: Display all products
  - `sortByPrice()`: Sort products by price (ascending)
  - `printAllProducts()`: Display detailed product information

## Technical Details

- **Language**: C++17
- **Build System**: Meson
- **Memory Management**: Uses smart pointers (`std::shared_ptr`) for automatic memory management
- **Standard Library Usage**:
  - `<vector>` for dynamic arrays
  - `<string>` for text handling
  - `<iostream>` for console I/O
  - `<algorithm>` for sorting functionality
  - `<memory>` for smart pointers

## Code Style

- Uses modern C++ features and best practices
- Consistent naming conventions (camelCase for methods, PascalCase for classes)
- Proper header guards in all header files
- Smart pointer usage for memory management
- Clear and descriptive variable names

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Support

If you encounter any issues or have questions:

1. Check the build instructions above
2. Ensure all prerequisites are installed
3. Verify your C++ compiler supports C++17
4. Open an issue on the repository

## Acknowledgments

- Built with Meson build system for cross-platform compatibility
- Uses modern C++ features for clean and efficient code
- Designed as an educational project for learning C++ and build systems
