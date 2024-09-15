#ifndef USER_LAYERS_H
#define USER_LAYERS_H
typedef enum {
  _DEFAULT,
  _LOWER,
  _RAISE,
  _ADJUST,
  _UNK,
  _UNK2,
  _GAME,
  _GAMEADJ
} KB_LAYER;


char layer_name[8];
void render_layer_name(void);

#endif