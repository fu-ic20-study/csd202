project('OrdersManagementSystem', 'cpp',
  version : '1.0.0',
  default_options : ['cpp_std=c++17'])

# Define include directories
incdir = include_directories('lib')

# Source files
sources = [
  'main.cpp',
  'src/Product.cpp',
  'src/Store.cpp'
]

# Create executable
executable('orders_management_system',
  sources,
  include_directories : incdir,
  install : true)
