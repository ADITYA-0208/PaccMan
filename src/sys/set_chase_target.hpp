//
//  set_chase_target.hpp
//  EnTT Example
//
//  Created by Indi Kernick on 24/9/18.
//  Copyright © 2018 Indi Kernick. All rights reserved.
//

#ifndef SYS_SET_CHASE_TARGET_HPP
#define SYS_SET_CHASE_TARGET_HPP

#include "util/registry.hpp"

// These systems calculate the target position of ghosts in chase mode
// There is a system for each ghost because each ghost behaves differently
// The Target component is set for entities that have the ChaseMode component

void setBlinkyChaseTarget(Registry &);
void setPinkyChaseTarget(Registry &);
void setInkyChaseTarget(Registry &);
void setClydeChaseTarget(Registry &);

#endif