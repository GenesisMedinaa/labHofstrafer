#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/Hofstraf.hpp"

int gNaive(int);

TEST_CASE( "G Sequence Testing" ) {
    REQUIRE( gNaive(0) == 1 );
    REQUIRE( gNaive(1) == 2 );
    REQUIRE( gNaive(2) == 3 );
    REQUIRE( gNaive(3) == 4 );
    REQUIRE( gNaive(4) == 5 );

}
