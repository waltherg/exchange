#include "exchange.hpp"


void Exchange::list( std::string item, double price ){
  items.push_back( item );
}

void Exchange::delist( std::string item ) {
  items.remove( item );
}

bool Exchange::contains( std::string item ) {
  for( auto i : items )
    if( i == item )
      return true;
  return false;
}

int Exchange::length( ) {
  return items.size( );
}
