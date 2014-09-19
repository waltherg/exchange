#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "exchange.hpp"


SCENARIO( "Sellers can add and remove offers to the exchange.", "[exchange]" ) {

  GIVEN( "An empty exchange" ) {
    Exchange exchange();

    REQUIRE( exchange.length() == 0 );

    WHEN( "Seller Bob adds an item" ) {
      exchange.list( "Item 1", 100 );

      THEN( "The item appears on the exchange" ) {
        REQUIRE( exchange.contains( "Item 1" ) );
      }

      WHEN( "Seller Bob removes the item" ) {
        exchange.delist( "Item 1" );

        THEN( "The iteam does not appear on the exchange anymore" ) {
          REQUIRE( not exchange.contains( "Item 1" ) );
        }
      }
    }
  }
}
