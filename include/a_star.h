#ifndef A_STAR_H
#define A_STAR_H

#include <set>

#define SET_EDGE(M,N) (M)->adj.insert(N); (N)->adj.insert(M);

#define DISTANCE(X,Y) (sqrt((X->x - Y->x)*(X->x - Y->x) \
                          + (X->y - Y->y)*(X->y - Y->y)))

typedef struct node_t {
  float x;
  float y;
  float yaw;
  std::set<node_t*> adj;
} node;

typedef struct {
  std::set<node*> nodes;
  float cost; // estimate
} path;

bool a_star(node *start, node *end, path &out_path);

#endif
