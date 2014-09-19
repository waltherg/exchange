#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "exchange.hpp"

TEST_CASE( "Seller can list item on exchange with asking price", "[listing]" ) {
  exchange::list("Item 1", 100);
  REQUIRE( exchange::contains( "Item 1" ) );
}
