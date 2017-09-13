#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include <lib/library1/include/library1.hpp>
#include <lib/library2/include/library2.hpp>

TEST_CASE("Lib1 test", "[lib1test]")
{
  std::cout << "Running Lib1 test!" << std::endl;
  mylibrary::Library1 lib1;
  REQUIRE(true);
}

TEST_CASE("Lib2 test", "[lib2test]")
{
  std::cout << "Running Lib2 test!" << std::endl;
  mylibrary::Library2 lib2;
  REQUIRE(true);
}


