#ifndef target_h
#define target_h

typedef struct target_t target_t;

#include "rect.h"
#include "game.h"
#include "sprite.h"
#include "event.h"

struct target_t{
  uint8_t type;
  rect_t *rect;
  sprite_t *sprite;
  event_t *event;
 	uint32_t flags;
};

target_t *target_create(void);
void target_delete(target_t *target);

void target_activate(target_t *target, game_t *game);
void target_set_rect_numbers(target_t *target, uint32_t x, uint32_t y, uint32_t w, uint32_t h);
#endif
