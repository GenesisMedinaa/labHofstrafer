#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include <vector>
#include "../src/Hofstraf.hpp"
using namespace std;

//naive method
int gNaive(int);

//create vector
int improvHof(int, vector<int>&);

//store spaces of vector size
    vector<int> memo(7, -1);

TEST_CASE( "G Sequence Testing" ) {
    REQUIRE( gNaive(0) == 0 );
    REQUIRE( gNaive(1) == 1 );
    REQUIRE( gNaive(2) == 1 );
    REQUIRE( gNaive(3) == 2 );
    REQUIRE( gNaive(4) == 3 );
    REQUIRE( gNaive(5) == 3 );

    REQUIRE( improvHof(0, memo) == 0 );
    REQUIRE( improvHof(1, memo) == 1 );
    REQUIRE( improvHof(2, memo) == 1 );
    REQUIRE( improvHof(3, memo) == 2 );
    REQUIRE( improvHof(4, memo) == 3 );
    REQUIRE( improvHof(5, memo) == 3 );


}

TEST_CASE( "G Sequence Benchmarking" ) {

    //Naive method of Sequence
    BENCHMARK("FOR 5") {
        return gNaive(5);
    };
    BENCHMARK("FOR 10") {
        return gNaive(10);
    };
    BENCHMARK("FOR 15") {
        return gNaive(15);
    };
    BENCHMARK("FOR 20") {
        return gNaive(20);
    };
    BENCHMARK("FOR 25") {
        return gNaive(25);
    };
    BENCHMARK("FOR 30") {
        return gNaive(30);
    };
    BENCHMARK("FOR 35") {
        return gNaive(35);
    };
    BENCHMARK("FOR 40") {
        return gNaive(40);
    };
    BENCHMARK("FOR 45") {
        return gNaive(45);
    };
    BENCHMARK("FOR 50") {
        return gNaive(50);
    };

    //Improved version of Sequence
    BENCHMARK("FOR 5") {
        return improvHof(5, memo);
    };
    BENCHMARK("FOR 10") {
        return improvHof(10, memo);
    };
    BENCHMARK("FOR 15") {
        return improvHof(15, memo);
    };
    BENCHMARK("FOR 20") {
        return improvHof(20, memo);
    };
    BENCHMARK("FOR 25") {
        return improvHof(25, memo);
    };
    BENCHMARK("FOR 30") {
        return improvHof(30, memo);
    };
    BENCHMARK("FOR 35") {
        return improvHof(35, memo);
    };
    BENCHMARK("FOR 40") {
        return improvHof(40, memo);
    };
    BENCHMARK("FOR 45") {
        return improvHof(45, memo);
    };
    BENCHMARK("FOR 50") {
        return improvHof(50, memo);
    };
}
