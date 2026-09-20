#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/Hofstraf.hpp"

TEST_CASE( "it computes the factorial of different numbers" ) {
    REQUIRE( gNaive(0) == 1 );
    REQUIRE( gNaive(1) == 1 );
    REQUIRE( gNaive(2) == 2 );
    REQUIRE( gNaive(3) == 6 );
    REQUIRE( gNaive(10) == 3628800 );
}

TEST_CASE("benchmarking the factorial function") {
    BENCHMARK("factorial(20)") {
        return factorial(20);
    };

    BENCHMARK("factorial(25)") {
        return factorial(25);
    };

    BENCHMARK("factorial(30)") {
        return factorial(30);
    };

    BENCHMARK("factorial(35)") {
        return factorial(35);
    };
}
