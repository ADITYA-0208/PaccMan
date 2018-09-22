//
//  eat dots system.cpp
//  EnTT Example
//
//  Created by Indi Kernick on 22/9/18.
//  Copyright © 2018 Indi Kernick. All rights reserved.
//

#include "eat dots system.hpp"

#include "player component.hpp"
#include "position component.hpp"

int eatDots(Registry &reg, MazeState &maze) {
  int count = 0;
  const auto view = reg.view<Player, Position>();
  for (const Entity e : view) {
    const Grid::Pos pos = view.get<Position>(e).p;
    if (maze.outOfRange(pos)) {
      continue;
    }
  	Tile &tile = maze[pos];
  	if (tile == Tile::dot) {
  	  ++count;
  	  tile = Tile::empty;
  	}
  }
  return count;
}