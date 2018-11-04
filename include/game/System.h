//
// Created by Илья Сиганов on 19/10/2018.
//

#ifndef GAME_SYSTEM_H
#define GAME_SYSTEM_H

class System {
 public:
  virtual void update() = 0;
  virtual ~System() = default;
};

#endif  // GAME_SYSTEM_H
